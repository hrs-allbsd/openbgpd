# $hrs: openbgpd/Makefile.inc,v 1.5 2014/05/16 01:06:14 hrs Exp $

PREFIX?=	/usr/local
BINDIR?=	${PREFIX}/sbin
MANDIR?=	${PREFIX}/man/man
.if defined(FREEBSDPORTS)
WITH_INSTALL_AS_USER=	yes
.endif

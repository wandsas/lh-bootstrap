/* ISC license. */

#ifndef SYSDEPS_H
#define SYSDEPS_H

#define SKALIBS_TARGET "arm-linux-musleabihf"
#define SKALIBS_HASCLOCKRT
#define SKALIBS_HASCLOCKMON
#define SKALIBS_HASPOSIXSPAWN
#define SKALIBS_HASTIMER
#define SKALIBS_ENDIANNESS "little"
#define SKALIBS_SIZEOFUSHORT 2
#define SKALIBS_SIZEOFUINT 4
#define SKALIBS_SIZEOFULONG 4
#define SKALIBS_SIZEOFSIZE 4
#define SKALIBS_SIZEOFUID 4
#define SKALIBS_SIZEOFGID 4
#define SKALIBS_SIZEOFPID 4
#define SKALIBS_SIZEOFTIME 4
#define SKALIBS_SIZEOFDEV 4
#define SKALIBS_SIZEOFINO 4
#undef SKALIBS_HASSIGNEDSIGNEDSIZE
#define SKALIBS_HASUNSIGNEDSIGNEDSIZE
#undef SKALIBS_HASSIGNEDSIGNEDUID
#define SKALIBS_HASUNSIGNEDSIGNEDUID
#undef SKALIBS_HASSIGNEDSIGNEDGID
#define SKALIBS_HASUNSIGNEDSIGNEDGID
#define SKALIBS_HASSIGNEDSIGNEDPID
#undef SKALIBS_HASUNSIGNEDSIGNEDPID
#define SKALIBS_HASSIGNEDSIGNEDTIME
#undef SKALIBS_HASUNSIGNEDSIGNEDTIME
#undef SKALIBS_HASSIGNEDSIGNEDDEV
#define SKALIBS_HASUNSIGNEDSIGNEDDEV
#undef SKALIBS_HASSIGNEDSIGNEDINO
#define SKALIBS_HASUNSIGNEDSIGNEDINO
#define SKALIBS_HASACCEPT4
#undef SKALIBS_HASANCILAUTOCLOSE
#define SKALIBS_HASCMSGCLOEXEC
#define SKALIBS_HASDEVURANDOM
#define SKALIBS_HASEPROTO
#define SKALIBS_HASEVENTFD
#define SKALIBS_HASFLOCK
#undef SKALIBS_HASGETPEEREID
#define SKALIBS_HASSOPEERCRED
#undef SKALIBS_HASGETPEERUCRED
#define SKALIBS_HASIPV6
#define SKALIBS_HASMALLOC0
#define SKALIBS_HASMSGDONTWAIT
#define SKALIBS_HASNBWAITALL
#define SKALIBS_HASOPENAT
#define SKALIBS_HASLINKAT
#define SKALIBS_HASPIPE2
#define SKALIBS_HASPPOLL
#undef SKALIBS_HASREVOKE
#define SKALIBS_HASSENDFILE
#define SKALIBS_HASSETGROUPS
#define SKALIBS_HASSETTIMEOFDAY
#define SKALIBS_HASSIGNALFD
#define SKALIBS_HASSPLICE
#define SKALIBS_HASSTRCASESTR
#define SKALIBS_HASSTRNLEN
#define SKALIBS_HASUINT64T
#define SKALIBS_HASFUTIMENS
#define SKALIBS_HASFUTIMES
#undef SKALIBS_HASARC4RANDOM
#undef SKALIBS_HASARC4RANDOM_ADDRANDOM
#define SKALIBS_HASGETRANDOM
#define SKALIBS_HASITIMER
#define SKALIBS_HASDIRFD
#define SKALIBS_HASODIRECTORY
#define SKALIBS_HASMEMMEM
#define SKALIBS_HASNAMESPACES
#define SKALIBS_HASNSGETPARENT
#define SKALIBS_HASEXPLICIT_BZERO

#endif

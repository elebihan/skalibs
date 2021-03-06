 /* ISC license. */

/* OpenBSD needs that for EOVERFLOW. wtfbsdseriously */
#ifndef _BSD_SOURCE
#define _BSD_SOURCE
#endif

#include <skalibs/sysdeps.h>
#include <time.h>
#include <errno.h>
#include <skalibs/tai.h>

int time_from_tai_relative (time_t *u, tai_t const *t)
{
#if SKALIBS_SIZEOFTIME < 8
  if ((t->x >> 32) && (t->x >> 32) != 0xffffffffUL)
    return (errno = EOVERFLOW, 0) ;
#endif
  *u = (time_t)t->x ;
  return 1 ;
}

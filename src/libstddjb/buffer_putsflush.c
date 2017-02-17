/* ISC license. */

#include <sys/types.h>
#include <string.h>
#include <skalibs/buffer.h>

ssize_t buffer_putsflush (buffer *b, char const *s)
{
  return buffer_putflush(b, s, strlen(s)) ;
}

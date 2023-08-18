/* --- Generated the 27/3/2023 at 11:46 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. feb. 10 12:42:31 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s line_follow -hepts LineFollow.ept --- */

#ifndef LINEFOLLOW_H
#define LINEFOLLOW_H

#include "lineFollow_types.h"
typedef struct LineFollow__line_follow_mem {
  LineFollow__st ck;
  LineFollow__modes v_85;
  long v_50;
  long v_49;
  long v_47;
  long v_46;
  long pnr;
} LineFollow__line_follow_mem;

typedef struct LineFollow__line_follow_out {
  long ldir;
  long rdir;
  long left_vel;
  long right_vel;
  LineFollow__modes nodenum;
} LineFollow__line_follow_out;

void LineFollow__line_follow_reset(LineFollow__line_follow_mem* self);

void LineFollow__line_follow_step(long s1, long s2, long s3, long s4, long s5,
                                  LineFollow__line_follow_out* _out,
                                  LineFollow__line_follow_mem* self);

#endif // LINEFOLLOW_H

/* --- Generated the 20/3/2023 at 14:5 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. jan. 11 0:35:15 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s line_follow -hepts try1.ept --- */

#ifndef TRY1_H
#define TRY1_H

#include "try1_types.h"
typedef struct Try1__line_follow_mem {
  Try1__st ck;
  Try1__modes v_90;
  long v_50;
  long v_49;
  long v_47;
  long v_46;
  long pnr;
} Try1__line_follow_mem;

typedef struct Try1__line_follow_out {
  long ldir;
  long rdir;
  long left_vel;
  long right_vel;
  Try1__modes nodenum;
} Try1__line_follow_out;

void Try1__line_follow_reset(Try1__line_follow_mem* self);

void Try1__line_follow_step(long s1, long s2, long s3, long s4, long s5,
                            Try1__line_follow_out* _out,
                            Try1__line_follow_mem* self);

#endif // TRY1_H

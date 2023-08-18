/* --- Generated the 13/3/2023 at 20:47 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. jan. 18 0:51:22 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s controller -hepts controller.ept --- */

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "controller_types.h"
typedef struct Controller__controller_mem {
  int v_6;
  int v_5;
  int v_1;
  int v;
} Controller__controller_mem;

typedef struct Controller__controller_out {
  int velocity_left;
  int velocity_right;
} Controller__controller_out;

void Controller__controller_reset(Controller__controller_mem* self);

void Controller__controller_step(bool red, bool green, bool blue,
                                 Controller__controller_out* _out,
                                 Controller__controller_mem* self);

#endif // CONTROLLER_H

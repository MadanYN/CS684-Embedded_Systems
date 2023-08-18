/* --- Generated the 13/3/2023 at 20:47 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. jan. 18 0:51:22 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s controller -hepts controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller.h"

void Controller__controller_reset(Controller__controller_mem* self) {
  self->v_5 = true;
  self->v = true;
}

void Controller__controller_step(bool red, bool green, bool blue,
                                 Controller__controller_out* _out,
                                 Controller__controller_mem* self) {
  
  int v_9;
  int v_8;
  int v_7;
  int v_4;
  int v_3;
  int v_2;
  if (blue) {
    v_7 = 125;
  } else {
    v_7 = self->v_6;
  };
  if (green) {
    v_8 = 250;
  } else {
    v_8 = v_7;
  };
  if (red) {
    v_9 = 0;
  } else {
    v_9 = v_8;
  };
  if (self->v_5) {
    _out->velocity_right = 255;
  } else {
    _out->velocity_right = v_9;
  };
  if (blue) {
    v_2 = 125;
  } else {
    v_2 = self->v_1;
  };
  if (green) {
    v_3 = 250;
  } else {
    v_3 = v_2;
  };
  if (red) {
    v_4 = 0;
  } else {
    v_4 = v_3;
  };
  if (self->v) {
    _out->velocity_left = 255;
  } else {
    _out->velocity_left = v_4;
  };
  self->v_6 = _out->velocity_left;
  self->v_5 = false;
  self->v_1 = _out->velocity_left;
  self->v = false;;
}


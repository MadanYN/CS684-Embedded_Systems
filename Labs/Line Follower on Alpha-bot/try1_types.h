/* --- Generated the 20/3/2023 at 14:5 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. jan. 11 0:35:15 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s line_follow -hepts try1.ept --- */

#ifndef TRY1_TYPES_H
#define TRY1_TYPES_H

#include "stdbool.h"
#include "assert.h"
//#include "pervasives.h"
typedef enum {
  Try1__St_Turn,
  Try1__St_Straight,
  Try1__St_Stop
} Try1__st;

Try1__st Try1__st_of_string(char* s);

char* string_of_Try1__st(Try1__st x, char* buf);

typedef enum {
  Try1__Two,
  Try1__Three,
  Try1__Seven,
  Try1__Eleven,
  Try1__Twelve
} Try1__modes;

Try1__modes Try1__modes_of_string(char* s);

char* string_of_Try1__modes(Try1__modes x, char* buf);

static const long Try1__thresh = 150;

static const long Try1__kp = 10;

static const long Try1__kd = 100;

static const long Try1__ki = 1000;

static const long Try1__base_speed = 100;

static const long Try1__actualMin = 0;

static const long Try1__actualMax = 50;

#endif // TRY1_TYPES_H

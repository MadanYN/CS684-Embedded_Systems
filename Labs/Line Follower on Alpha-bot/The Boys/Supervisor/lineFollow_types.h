/* --- Generated the 27/3/2023 at 11:46 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. feb. 10 12:42:31 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s line_follow -hepts LineFollow.ept --- */

#ifndef LINEFOLLOW_TYPES_H
#define LINEFOLLOW_TYPES_H

#include "stdbool.h"
#include "assert.h"
typedef enum {
  LineFollow__St_Turn,
  LineFollow__St_Straight
} LineFollow__st;

LineFollow__st LineFollow__st_of_string(char* s);

char* string_of_LineFollow__st(LineFollow__st x, char* buf);

typedef enum {
  LineFollow__Two,
  LineFollow__Three,
  LineFollow__Seven,
  LineFollow__Eleven,
  LineFollow__Twelve
} LineFollow__modes;

LineFollow__modes LineFollow__modes_of_string(char* s);

char* string_of_LineFollow__modes(LineFollow__modes x, char* buf);

static const long LineFollow__thresh = 300;

static const long LineFollow__kp = 10;

static const long LineFollow__kd = 100;

static const long LineFollow__ki = 1000;

static const long LineFollow__base_speed = 100;

static const long LineFollow__actualMin = 0;

static const long LineFollow__actualMax = 50;

#endif // LINEFOLLOW_TYPES_H

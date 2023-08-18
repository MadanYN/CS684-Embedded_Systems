/* --- Generated the 27/3/2023 at 11:46 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. feb. 10 12:42:31 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s line_follow -hepts LineFollow.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lineFollow_types.h"

LineFollow__st LineFollow__st_of_string(char* s) {
  if ((strcmp(s, "St_Turn")==0)) {
    return LineFollow__St_Turn;
  };
  if ((strcmp(s, "St_Straight")==0)) {
    return LineFollow__St_Straight;
  };
}

char* string_of_LineFollow__st(LineFollow__st x, char* buf) {
  switch (x) {
    case LineFollow__St_Turn:
      strcpy(buf, "St_Turn");
      break;
    case LineFollow__St_Straight:
      strcpy(buf, "St_Straight");
      break;
    default:
      break;
  };
  return buf;
}

LineFollow__modes LineFollow__modes_of_string(char* s) {
  if ((strcmp(s, "Two")==0)) {
    return LineFollow__Two;
  };
  if ((strcmp(s, "Three")==0)) {
    return LineFollow__Three;
  };
  if ((strcmp(s, "Seven")==0)) {
    return LineFollow__Seven;
  };
  if ((strcmp(s, "Eleven")==0)) {
    return LineFollow__Eleven;
  };
  if ((strcmp(s, "Twelve")==0)) {
    return LineFollow__Twelve;
  };
}

char* string_of_LineFollow__modes(LineFollow__modes x, char* buf) {
  switch (x) {
    case LineFollow__Two:
      strcpy(buf, "Two");
      break;
    case LineFollow__Three:
      strcpy(buf, "Three");
      break;
    case LineFollow__Seven:
      strcpy(buf, "Seven");
      break;
    case LineFollow__Eleven:
      strcpy(buf, "Eleven");
      break;
    case LineFollow__Twelve:
      strcpy(buf, "Twelve");
      break;
    default:
      break;
  };
  return buf;
}


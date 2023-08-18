/* --- Generated the 20/3/2023 at 14:5 --- */
/* --- heptagon compiler, version 1.05.00 (compiled wed. jan. 11 0:35:15 CET 2023) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s line_follow -hepts try1.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "try1_types.h"

Try1__st Try1__st_of_string(char* s) {
  if ((strcmp(s, "St_Turn")==0)) {
    return Try1__St_Turn;
  };
  if ((strcmp(s, "St_Straight")==0)) {
    return Try1__St_Straight;
  };
  if ((strcmp(s, "St_Stop")==0)) {
    return Try1__St_Stop;
  };
}

char* string_of_Try1__st(Try1__st x, char* buf) {
  switch (x) {
    case Try1__St_Turn:
      strcpy(buf, "St_Turn");
      break;
    case Try1__St_Straight:
      strcpy(buf, "St_Straight");
      break;
    case Try1__St_Stop:
      strcpy(buf, "St_Stop");
      break;
    default:
      break;
  };
  return buf;
}

Try1__modes Try1__modes_of_string(char* s) {
  if ((strcmp(s, "Two")==0)) {
    return Try1__Two;
  };
  if ((strcmp(s, "Three")==0)) {
    return Try1__Three;
  };
  if ((strcmp(s, "Seven")==0)) {
    return Try1__Seven;
  };
  if ((strcmp(s, "Eleven")==0)) {
    return Try1__Eleven;
  };
  if ((strcmp(s, "Twelve")==0)) {
    return Try1__Twelve;
  };
}

char* string_of_Try1__modes(Try1__modes x, char* buf) {
  switch (x) {
    case Try1__Two:
      strcpy(buf, "Two");
      break;
    case Try1__Three:
      strcpy(buf, "Three");
      break;
    case Try1__Seven:
      strcpy(buf, "Seven");
      break;
    case Try1__Eleven:
      strcpy(buf, "Eleven");
      break;
    case Try1__Twelve:
      strcpy(buf, "Twelve");
      break;
    default:
      break;
  };
  return buf;
}


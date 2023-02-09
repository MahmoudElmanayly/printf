#include "globals.h"

int get_char(va_list args){
  unsigned c = va_arg(args, unsigned);
  char* str = (char*)malloc(2);
  str[0] = c;
  str[1] = '\0';
  _print(str);
  free(str);
}


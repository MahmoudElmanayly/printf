#include "globals.h"

int get_string(va_list args){
  char* string = va_arg(args, char *);
  _print(string);
}
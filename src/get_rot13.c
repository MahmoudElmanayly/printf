#include "globals.h"

int get_rot13(va_list args){
  char* str = va_arg(args, char*);
  char* temp = (char*)malloc(strlen(str) + 1);
  strcpy(temp, str);
  _rot(temp, 13);
  _print(temp);
}
#include "globals.h"


int get_pointer(va_list args){
  void* ptr = va_arg(args, void*);
  unsigned long pointer = (unsigned long)ptr;
  char* str = (char*)malloc(150);
  _dec_to_hex(str, pointer);
  _print(str);
  free(str);
}
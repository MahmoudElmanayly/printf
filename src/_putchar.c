#include "globals.h"

void _putchar(unsigned c){
  char* s = (char*)malloc(2);
  s[0] = c;
  s[1] = '\0';
  write(FILEDESCRIPTOR, s, 1);
}
#include "globals.h"

int get_width(char* fmt, int index, va_list args){

  int c;
  int len = 0;
  char* digits = (char*)malloc(MAXDIGITS + 1);

  while(len <= MAXDIGITS && !isalpha(c=fmt[index++]) && c != '\0' && c != '*' && c != '.')
    digits[len++] = c;

  digits[len] = '\0';
  width = atoi(digits);

  free(digits);

  if (c == '*'){
   width = va_arg(args, int);
   while(!isalpha(c = fmt[index++]) && c != '.');
  }
    
  return --index;
}
#include "globals.h"

int get_precision(char* fmt, int index){
  
  int c = fmt[index++];
  if (c == '.'){
    int len = 0;
    char* digits = (char*)malloc(MAXDIGITS + 1);
    while(isdigit(c = fmt[index++]))
      digits[len++] = c; 

    digits[len] = '\0';
    precision = atoi(digits);
  }
  return --index;
}
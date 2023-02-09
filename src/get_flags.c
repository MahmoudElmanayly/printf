#include "globals.h"


int get_flags(char* fmt, int index, va_list args){
  int c;
  while(!isalnum(c=fmt[index++]) && c != '*' && c != '.')
    switch(c){
      case '-':
        flags |= LEFTJUSTIFY;
        break;
      case '+':
        flags |= POSITIVEPREFIX;
        break;
      case '$':
        flags |= PADDINGCHARS;
        padding_char = va_arg(args, int);
        break;
      case '#':
        flags |= SPECIFIERPREFIX;
        break;
    }
    return --index;
}
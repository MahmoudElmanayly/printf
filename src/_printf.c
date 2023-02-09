#include "globals.h"

flag_size_t flags = RIGHTJUSTIFY; // RIGHTJUSTIFY is default  
int         width = 0;
int         precision = 0;
char        padding_char = ' ';

int _printf(char* fmt, ...){
  int c;
  int len = 0;
  specifier_t* type;

  va_list args;
  va_start(args, fmt);

  while((c=fmt[len++]) != '\0'){
    
    if (c == '%'){
      init();
      len = get_flags(fmt, len, args);
      len = get_width(fmt, len, args);
      len = get_precision(fmt, len);

      type = get_specifier(fmt, len);
      type->execute(args);

      len += strlen(type->specifier);
      
      free(type->specifier);
      //free(type->execute);
      continue;
    }
    _putchar(c);
  }

  free(type);
  va_end(args);
  return len;
}
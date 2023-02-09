#include "globals.h"

int _print(char* str){
  int len = strlen(str);
  char* buffer = (char*)malloc(MAXBUFFERLEN + 1);
  buffer[MAXBUFFERLEN] = buffer[0] = '\0';

  if (width > len){
    int gap_len = width - len;
    char* gap = (char*)malloc(gap_len);
    _fill_gap(gap, gap_len, padding_char);

    if (flags & LEFTJUSTIFY){
      _strcat(buffer, str, gap);
    }else if (flags & RIGHTJUSTIFY){
      _strcat(buffer, gap, str);
    }

    write(FILEDESCRIPTOR, buffer, width);

  }else {
    write(FILEDESCRIPTOR, str, len);
  }

} 
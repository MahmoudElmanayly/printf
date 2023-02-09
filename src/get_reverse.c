#include "globals.h"


int get_reverse(va_list args){
  char* str = va_arg(args, char*);
  char* temp = (char*)malloc(strlen(str)+1);
  strcpy(temp, str);
  _strrev(temp, strlen(temp));
  _print(temp);
  free(temp);
}


#include "globals.h"

int get_int(va_list args){

  int num = va_arg(args, long long);
  char* str = (char*)malloc(151);
  char* neg = (char*)malloc(152);
  char* sign = (char*)malloc(2);
  sign[0] = '-';
  sign[1] = '\0';

  int negtive = 0;
  if(num < 0) {
    num *= -1;
    negtive = 1;
  }

  str[150] = '\0';
  _dec_to_str(str, num);
  if (negtive) _strcat(neg, sign, str);
  _print(negtive ? neg : str);
  free(str);
  free(neg);
}
#include "globals.h"

int _dec_to_bin(char* des, unsigned long num){
  int len = 0;
  while(num){
    des[len++] = num%2 + '0';
    num /= 2;
  }
  des[len] = '\0';
  _strrev(des, len);
  return len;
}
#include "globals.h"

int _dec_to_hex(char* des, unsigned long num){
  int sum = 0;
  int index = 0;
  int len = _dec_to_bin(des, num);
  char* temp = (char*)malloc(len+1);
  strcpy(temp, des);

  len--;
  while(len >= 0){
    sum = _bin_to_dec(temp, len);
    des[index++] = sum <= 9 ? sum + '0' : sum - 10 + 'a';
    len -= 4;
  }
  des[index++] = 'x';
  des[index++] = '0';
  des[index] = '\0';
  _strrev(des, index);
  free(temp);
  return index;
}
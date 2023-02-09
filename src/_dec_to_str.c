#include "globals.h"

int _dec_to_str(char* des, long long num){
  
  int len = 0;
  while(num > 0){
    des[len++] = num%10 + '0';
    num /= 10;
  }
  des[len] = '\0';
  _strrev(des, len);
}
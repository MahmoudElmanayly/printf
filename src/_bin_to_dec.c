#include "globals.h"

int _bin_to_dec(char* des, int start_from_end){

  int i = start_from_end;
  int sum = 0;
  for(int p = 0; i >= 0 && i > start_from_end - 4; i--, p = (p+1)%4)
    if (des[i] == '1')
      sum += (int)pow(2, p);

  return sum; 
}
 
#include "globals.h"

int _fill_gap(char* gap, int len,  char c){

  for(int i=0; i < len; i++){
    gap[i] = c;
  }

}
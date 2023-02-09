#include "globals.h"

void _strrev(char* str, int len){
  char* temp = (char*)malloc(len+1);
  temp[len--] = '\0';
  int index = 0;
  while(len >= 0){
    temp[index++] = str[len--];
  }
  strcpy(str, temp);
  free(temp);
}
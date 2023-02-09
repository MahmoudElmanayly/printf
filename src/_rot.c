#include "globals.h"


void _rot(char* str, int rot){
  int len = strlen(str);
  int index = 0;
  int start;
  int c;

  while(index < len){
    if (str[index] >= 65 && str[index] <= 90){ // UPPERCASE
      start = 65;  // 'A'
      c = str[index] - start;
      str[index] = start + ((c+rot)%26);
      
    }else if (str[index] >= 97 && str[index] <= 122){ // LOWERCASE
      start = 97;  // 'a'
      c = str[index] - start;
      str[index] = start + ((c+rot)%26);
    }
    index++;
  }
}
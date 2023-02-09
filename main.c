#include "src/globals.h"


int main(){

  
  _printf("char : %c\n", 97);
  _printf("reverse : %r, my age : %s\n", "Gamil", "25");
  _printf("rot13 : %R\n", "Hello World!");

  int c = 65;
  _printf("Pointer : %p\n", &c);
  printf("printf : %p\n", &c);

  int a = -1998;
  _printf("int : %d\n", a);

  short i = 128;
  int u = 1234567955;
  _printf("long : %d, int : %d\n", i, u);

  int len = _printf("%-#$*.6s<< my name\n", '.', 10, "Mahmoud Gamil");

  printf("----------------------\n");
  printf("flags : %d\n", flags);
  printf("width : %d\n", width);
  printf("precision : %d\n", precision);
  printf("padding char : %c\n", padding_char);

  return 0;
}

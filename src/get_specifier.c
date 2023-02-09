#include "globals.h"

specifier_t* get_specifier(char* fmt, int index){
  int c = fmt[index];
  int len = 0;
  specifier_t* type = (specifier_t*)malloc(sizeof(specifier_t*));
  type->specifier = (char*)malloc(MAXSPECIFIERCHARS + 1);
  type->execute = (void*)malloc(sizeof(void*));

  switch(c){
    case 'd':
    case 'i':
          type->specifier[len++] = 'd';
      type->execute = get_int;
      break;
    case 'h':
      type->specifier[len++] = 'h';
      break;

    // CHAR   
    case 'c':
      type->specifier[len++] = 'c';
      type->execute = get_char;
      break;
    case 's':
      type->specifier[len++] = 's';
      type->execute = get_string;
      break;
    case 'r':
      type->specifier[len++] = 'r';
      type->execute = get_reverse;
      break;
    case 'R':
      type->specifier[len++] = 'R';
      type->execute = get_rot13;
      break;
    case 'p':
      type->specifier[len++] = 'p';
      type->execute = get_pointer;
      break;
/*    
    // OTHER NUMBER BASES SYSTEM
    // BINARY
    case 'b':
      type->specifier[len++] = 'b';
      type->execute = get_binary;
      break;
    // HEXADECIMAL
    case 'x':
    case 'X':
      type->specifier[len++] = 'x';
      type->execute = get_hex;
      break;
    // OCTAL
    case 'o':
      type->specifier[len++] = 'o';
      type->execute = get_octal;
      break;*/
  }
  
  type->specifier[len] = '\0';
  return type;
}
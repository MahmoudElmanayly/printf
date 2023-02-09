#ifndef GLOBALS_H
#define GLOBALS_H


// INCLUDED BUILDIN HEADERS
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdarg.h>

// MACROS
#define MAXDIGITS         10
#define MAXSPECIFIERCHARS 2
#define MAXBUFFERLEN      1024

#define FILEDESCRIPTOR    1

#define LEFTJUSTIFY       1
#define RIGHTJUSTIFY      2
#define POSITIVEPREFIX    4
#define PADDINGCHARS      8
#define SPECIFIERPREFIX   16


// DEFINED TYPES
typedef int flag_size_t;
typedef int (*fn_pointer)(va_list);



// GLOBAL VARIABLES
extern flag_size_t flags;
extern int         width;
extern int         precision;
extern char        padding_char;


// PUSHING THE SPECIFIERS



// STRUCTS
typedef struct {
  char* specifier;
  fn_pointer execute; 
} specifier_t ;

typedef union 
{
  
}value_t;


// INCLUDE USER HEADERS
// #include "hashtable.h"



// GLOBAL FUNCTIONS
void init();
int get_flags(char* fmt, int index, va_list args);
int get_width(char* fmt, int index, va_list args);
int get_precision(char* fmt, int index);
specifier_t* get_specifier(char* fmt, int index);

int _printf(char* fmt, ...);
int _print(char* str);
int _fill_gap(char* gap, int len, char c);
int _strcat(char* buffer, char* left, char* right);
void _putchar(unsigned c);
void _rot(char* str, int rot);
void _strrev(char* s, int len);



int _dec_to_bin(char* des, unsigned long num);
int _dec_to_hex(char* des, unsigned long num);
int _bin_to_dec(char* des, int start);
int _dec_to_str(char* des, long long num);


int get_char(va_list args);
int get_rot13(va_list args);
int get_string(va_list args);
int get_reverse(va_list args);
int get_pointer(va_list args);
int get_int(va_list args);

#endif // END OF GLOBALS_H 
# Printf


this function built from scratch with enhanced improvements like:
- Add special character for padding
- Reverse string
- ROT13 string
- Print numbers in Binary
- Print numbers in Octal

### Usage:
> %[flags][width][.precision][size]type

## Things with special meanings:
 ### Flags:
  ```
  - : left-justify (right justifivation is the default)
  + : prefix the value with (+) if it's positive.
  $ : padding the remaining width with C character
  # : used with o, x, X specifiers the value is preceeded with 0, 0x, or 0x
```
 ### width: 
 ```
  (num) : minimum width
  *     : the width is not specified in the format string, but it will pass as an argument
```
 ### precision [ .(n) ]:
 ```
  . : specifiy the precision
  n :_
      |--> if n == 0, then no characters will be displayed
      |--> for floating specifiers (f, lf, LF) specifiying
      |    the count of the numbers after the decimal pointer
      |--> for integer specifiers (d, i, o, u, x, X) the minimum
      |    number of digits to be written, if the value to be written 
      |    is shorter than this number, the result is padded 
      |    with leading zeros. the value is not truncated
      |    even if the result is longer
      |--> for string (s) this is the maximum number 
           of characters to be printed
```


## The most commonly used format specifiers :
```
 ----------------------------------
 |             STRING             |
 ----------------------------------
 | %c      : unsigned char   DONE |
 | %s      : string          DONE |
 | %r      : reverse string  DONE |
 | %R      : ROT13 string    DONE |
 ----------------------------------
 |            POINTER             |
 ----------------------------------
 | %p      : void*           DONE | 
 ----------------------------------
 |            INTEGER             |
 ----------------------------------
 | %d, %i  : signed int      DONE |
 | %h      : signed short         |
 | %l      : signed long          |
 | %ld     : signed long int      |
 | %u      : unsigned int         |
 | %ul     : unsigned long        |
 ----------------------------------
 |             FLOATS             |
 ----------------------------------
 | %f      : float                |
 | %lf     : double               |
 | %LF     : long double          |
 ----------------------------------
 |         OTHER BASES            |
 ----------------------------------
 | %b      : binary rep           |
 | %x / %X : signed hexadecimal   |
 | %o      : signed octal         |
 ----------------------------------

```

## Run the program
> ./run.sh

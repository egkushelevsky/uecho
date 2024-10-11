#include <stdio.h>
  2 #include <stdlib.h>
  3 #include <string.h>
  4 #include <ctype.h>
  5 
  6 void uecho(char **argv) {
  7     char **p = argv;
  8     *p++;
  9     while(*p) {
 10         printf("%s\n", *p++);
 11     }   
 12 }   
 13 
 14 int main(int argc, char **argv) {
 15    
 16    uecho(argv); 
 17 }

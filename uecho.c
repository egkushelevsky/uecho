  1 #include <stdio.h>
  2 #include <stdlib.h>
  3 #include <string.h>
  4 #include <ctype.h>
  5 
  6 void uecho(char **argv) { //Print CL args
  7     char **p = argv;
  8     *p++;
  9     while(*p) {
 10         printf("%s\n", *p++);
 11     }
 12 }
 13 
 14 void recho(int argc, char **argv) { //Print CL args in reverse
 15     char **p = argv-1;
 16     *p = NULL;
 17     *p++;
 18     p += (argc-1);
 19 
 20     while(*(p-1)) {
 21         printf("%s\n", *p--);
 22     }
 23 }
 24 
 25 void cecho(char **argv) { //Print the first character of each arg
 26     char **p = argv;
 27     *p++;
 28     while(*p) {
 29         putchar(**p);
 30         putchar('\n');
 31         *p++;
 32     }
 33 }
 34 
 35 void clecho(char **argv) { //Print the last char of each arg
 36     char **p = argv;
 37     *p++;
 38     while(*p) {
 39         char *str = *p++;
 40         while(*(str+1)) {
 41             str++;
 42         }
 43         putchar(*str);
 44         putchar('\n');
 45     }
 46 }

  1 #include <stdio.h>
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
 14 void recho(int argc, char **argv) {
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
 25 int main(int argc, char **argv) {
 26 
 27    uecho(argv);
 28    printf("\n");
 29    recho(argc, argv);
 30 }


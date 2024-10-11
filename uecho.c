  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <ctype.h>
  
  void uecho(char **argv) {
      char **p = argv;
      *p++;
      while(*p) {
          printf("%s\n", *p++);
      }   
  }
  
  void recho(int argc, char **argv) {
      char **p = argv-1;
      *p = NULL;
      *p++;
      p += (argc-1);
      
      while(*(p-1)) {
          printf("%s\n", *p--);
      }
  }
  void cecho(char **argv) {
      char **p = argv;
      *p++;
      while(*p) {
          putchar(**p);
          putchar('\n');
          *p++;
      }
  }
  int main(int argc, char **argv) {
  
     uecho(argv);
     printf("\n");
     recho(argc, argv);
  }


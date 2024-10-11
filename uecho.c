#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void uecho(char **argv) { //Print CL args
    char **p = argv;
    *p++;
    while(*p) {
        printf("%s\n", *p++);
    }
}

void recho(int argc, char **argv) { //Print CL args in reverse
    char **p = argv-1;
    *p = NULL;
    *p++;
    p += (argc-1);

    while(*(p-1)) {
        printf("%s\n", *p--);
    }
}

void cecho(char **argv) { //Print the first character of each arg
    char **p = argv;
    *p++;
    while(*p) {
        putchar(**p);
        putchar('\n');
        *p++;
    }
}

void clecho(char **argv) { //Print the last char of each arg
    char **p = argv;
    *p++;
    while(*p) {
        char *str = *p++;
        while(*(str+1)) {
            str++;
        }
        putchar(*str);
        putchar('\n');
    }
}

int main(int argc, char **argv) {
    
   uecho(argv);
   printf("\n");
   recho(argc, argv);
   printf("\n");
   cecho(argv);
   printf("\n");
   clecho(argv);
}  

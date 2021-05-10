#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[]){
    int ch,index;
    char *position;
    if ((argc!=3)||(strlen(argv[1])!=strlen(argv[2]))){
        printf("BAD INPUT\n");
        exit(1);
    }
    for (int i = 0; i < strlen(argv[1]); i++){
        if (!(isalnum(argv[1][i]))||!(isalnum(argv[2][i]))){
            printf("BAD INPUT\n");
            exit(1);
        }
    }
    while ((ch=fgetc(stdin))!=EOF) {
        position = strrchr(argv[1],ch);
        if (position!=NULL) {
            index = position-argv[1];
            printf("%c",argv[2][index]);
        }
        else putchar(ch);
    }
    return 0;
}
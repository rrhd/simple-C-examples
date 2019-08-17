#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    int i = 2;
    string n = argv[1];
    int o;
    do {
        for (int j = 0; j < strlen(argv[i]) ; j++) {
            int intLetter = argv[i][j];
            o =  (n[j % (strlen(n)) ] );
            if ( ('A' <= o) && (o <= 'Z') ) {
                 o = o - 'A';       
            }
            else {
                o = o - 'a'; 
            }
            if ( ('A' <= intLetter) && (intLetter <= 'Z') ) {
                intLetter = (intLetter + o - 'A') % ('Z' - 'A') + 'A';                
            }
            else {
                intLetter = (intLetter + o - 'a')%('z'-'a') + 'a';   
            }
            printf("%c", intLetter);
        }
        printf(" ");
        i++;
    } 
    while (i < argc);
    printf("\n");
}

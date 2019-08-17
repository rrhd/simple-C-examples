#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    int i = 2;
    int d = ('z' - 'A');
    int n = atoi(argv[1]) ;
    do {
        for (int j = 0; j < strlen(argv[i]) ; j++) {
            int intLetter = argv[i][j];
            if ( ('A' <= intLetter) && (intLetter <= 'Z') ) {
                intLetter = (intLetter + n - 'A') % ('Z' - 'A') + 'A';                
            }
            else {
                intLetter = (intLetter + n - 'a')%('z'-'a') + 'a';   
            }
            printf("%c", intLetter);
        }
        printf(" ");
        i++;
    } 
    while (i < argc);
    printf("\n");
}

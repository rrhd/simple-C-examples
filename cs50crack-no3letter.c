#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <crypt.h>

int skip_index(int i, int j[], int n);

int main(int argc, string argv[]) {
    if (argc != 2)
    {
        printf("Usage: crack <hash>\n");
        return 1;
    }
    char letters[] = "\0abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char pass[5] = {0,0,0,0,0};
    char salt[2] = {0,0};
    salt[0] = argv[1][0];
    salt[1] = argv[1][1];
    int N = 53;
    int count = 0;
    //printf("hash: %s\n",argv[1]);
    //printf("salt: %s\n",salt);
    int letter1,letter2,letter3,letter4,letter5;
    for ( letter5 = 0;letter5 < N;letter5++) {
        if (  (letter3 == letter4) && (letter4 == letter5)) {
                    letter5++;
        }
        pass[4] = letters[letter5];
        for ( letter4 = 0;letter4 < N;letter4++) {
            if (  (letter2 == letter3) && (letter3 == letter4)) {
                    letter4++;
            }
            pass[3] = letters[letter4];
            for ( letter3 = 0;letter3 < N;letter3++) {
                if (  (letter1 == letter2) && (letter1 == letter3)) {
                    letter3++;
                }
                pass[2] = letters[letter3];
                for ( letter2 = 0;letter2 < N;letter2++) {
                    pass[1] = letters[letter2];
                    for ( letter1 = 1;letter1 < N;letter1++) {
                        count++;
                        pass[0] = letters[letter1];
                        if (strcmp(argv[1],crypt(pass, salt)) == 0) {
                            printf("%s\n",pass);
                            printf("%i\n",count);
                        return 0;                               
                        }
                    }
                } 
            } 
        }
    }
    printf("%i\n",count);
    return 1;
}

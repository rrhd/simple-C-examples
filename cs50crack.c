#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <crypt.h>


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
    for (int letter5 = 0;letter5 < N;letter5++) {
        pass[4] = letters[letter5];
        for (int letter4 = 0;letter4 < N;letter4++) {
            pass[3] = letters[letter4];
            for (int letter3 = 0;letter3 < N;letter3++) {
                pass[2] = letters[letter3];
                for (int letter2 = 0;letter2 < N;letter2++) {
                    pass[1] = letters[letter2];
                    for (int letter1 = 1;letter1 < N;letter1++) {
                        count++;
                        pass[0] = letters[letter1];
                        if (strcmp(argv[1],crypt(pass, salt)) == 0) {
                            printf("%s\n",pass);
                        return 0;                               
                        }
                    }
                } 
            } 
        }
    }
    return 1;
}

#include<stdio.h>

int main(void) {
    float n = 1;
    printf("Take the factorial of: ");
    scanf ("%f",&n);  
    float p = 1;
    for (int i = 1;i<(n+1);i++) {
        p = p*i;
    }
    printf("The factorial of %.0f is %.0f\n",n,p);
    return 0;
}

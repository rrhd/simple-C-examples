#include<stdio.h>

int main(void)
{ 
    double x = 2;
    double n = -2;
    double s = 1 ;
    if (n>=1) {
        for (int i = 1 ;i < (n+1); i++) {
            s = s*x;
        }
    } else {
        for (int i = 1;i < (-n+1); i++) {
            s = s/x;
        }
    }
    printf("%.2f to the %.2f power is %.2f\n",x,n,s);
    return 0;
}

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    string name = get_string("What is your name?\n");
    printf("Hello, %s\n",name);
    string loc = get_string("Where are you from?\n");
    printf("%s? Never heard of it.\n",loc);
    printf("%f\n",pow(2,5.5));
}

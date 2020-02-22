#include <stdio.h>
#include <stdbool.h>

int main() {
    float age = 2.123e-2;
    short a = -15;
    printf("The age is %d", a);
    
    enum months {Jan=1, Feb, Mar};
    enum months birthMonth = Mar;
    printf("I was born in %d", birthMonth);

    return 0;
}
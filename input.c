#include <stdio.h>

int main() {
    char str[50];
    int age;
    printf("What is your name: ");
    scanf("%s", str);
    printf("How old are you? ");
    scanf("%d", &age);
    printf("Hey %s You were born in the year %d", str, 2020 - age);
    return 0;
}
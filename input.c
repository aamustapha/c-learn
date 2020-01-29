#include <stdio.h>

int main() {
    char str[50];
    printf("What is your name: ");
    scanf("%s", str);
    printf("Hello %s, how are you doing today?", str);
    return 0;
}
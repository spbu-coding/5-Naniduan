#include <stdio.h>

void other() {
    printf("You are not supposed to be there");
    fflush(stdout);
    exit(0);
}

void input() {
    char buffer[10];
    gets(buffer);
    printf("%s\n", buffer);
    fflush(stdout);
}

int main() {
    printf("%p\n", &other);
    input();
    return 0;
}
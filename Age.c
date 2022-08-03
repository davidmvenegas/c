#include <stdio.h>
#include <string.h>

int main() {

    char name[25];
    int age;

    printf("\n What is your name?");
    // scanf("%s", &name);
    fgets(name, 25, stdin); //Accepts whitespace characters
    name[strlen(name)-1] = '\0'; //remove next line

    printf("\n How old are you?");
    scanf("%d", &age);

    printf("Hello %s, you are %d years old.", name, age);

    return 0;
}
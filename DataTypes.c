#include <stdio.h>
#include <stdbool.h>

int main() {
    char a = 'C';
    char b[] = "Bro";

    float c = 3.141592;
    double d = 3.141592653589793;

    bool e = true;

    char f = 100;

    printf("%0.15f\n", c);
    printf("%0.15lf\n", d);

    return 0;
}
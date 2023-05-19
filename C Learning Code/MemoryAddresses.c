# include <stdio.h>
# include <stdbool.h>
# include <string.h>

int main() {
    int num1 = 43;
    printf("%p", &num1); // %p = pointer, use & to get memory address of num1 in the system
    // This memory address is returned in hexadeximal format


    return 0;
}
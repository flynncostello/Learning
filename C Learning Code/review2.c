# include <stdio.h>
# include <stdbool.h>
# include <string.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("Yes");
    }
    
    const int num1 = 1; // Cannot be changed now

    int num1 = 3;
    int* ptr = &num1;
    printf("%i", *ptr);
    printf("%p", ptr);
    //printf("%i", *ptr);








    return 0;
}
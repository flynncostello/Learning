# include <stdio.h>
# include <stdbool.h>

/*
Contains all items learnt in Week 1 of Learning
*/

int main() {
    int num1 = 1;
    float float1 = 1.02345;
    char a = 'a';
    char string1[] = "Greeting";
    int num2 = 2;
    double float2 = 1.2345743892134578493248758;

    num1 += 2;
    int sum = num1 + num2;

    printf("%i\n", sum);
    printf("%.2f\n", float1);
    printf("%c\n", a);
    printf("%s\n", string1);
    printf("%.5lf", float2 * float1);

    int i = 0;
    while (i < 10) {
        if (i < 5) {
            printf("i < 5");
        } else if (i < 7) {
            printf("i < 7");
        } else {
            printf("i >= 7");
        }
        i++;

        switch (i) {
            case 10:
                printf("i = 10");
                i++;
            default:
                printf("Otherwise");
        }

        int j;
        for (j = 0; j < 10; j+=5) {
            printf("Hello");
        }        
    }

    float sumX = (float) num1 + num2;

    int z = 1;
    if (z == 1) {
        printf("Z = 1");
    } else {
        printf("Z != 1");
    }

    int n = 2;
    (n < 2) ? printf("True") : printf("False");


    const int int12345 = 123; // Will never change

    bool boolean123 = true;
    printf("%i\n", boolean123);

    int array1[] = {1, 2, 3, 4, 5};
    int matrix1[3][2] = {{2, 45}, {7, 3}, {123, 3}};


    return 0;
}

/*
Multi-line string
*/
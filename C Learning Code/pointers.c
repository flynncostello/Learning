# include <stdio.h>
# include <stdbool.h>
# include <string.h>

int main() {
    int num2 = 12;
    int num3 = 13;
    int *pointer = &num2; // memory address
    int *pointer2 = &num3; // memory address

    printf("%p\n", pointer); // Pointer = pointer
    printf("%i\n\n\n", *pointer); // Dereference = &pointer (value stored at memory address)
    printf("This is it:");
    printf("%i\n\n\n", *&num2);


    int array1[4] = {1, 2, 3, 4};
    int i;
    for (i = 0; i < 4; i++) {
        printf("%p\n", &array1[i]); // Prints the memory address  
        printf("%i\n", *array1); // Access 1st element in array
        printf("%i\n", *(array1+1)); // Access 2nd element in array
        printf("%i\n", *(array1+2)); // Access 2nd element in array
        printf("%i\n\n", *(array1+3)); // Access 2nd element in array

    }
    // Accessing arrays with pointers is considered faster
    // and more efficient, escpecially with larger arrays
    // Can use pointers to access strings, arrays and 2 dimensional arrays

    printf("Now doing array 2:\n");
    int array2[4] = {6, 7, 8, 9};
    int j = 0;
    while (j < 4) {
        printf("%i\n", *(array2 + j));
        j++;
    }

    // Changing elements of list using pointers
    *array2 = 1;
    *(array2 + 1) = 2;
    *(array2 + 2) = 3;
    *(array2 + 3) = 4;
    int z;
    for (z = 0; z < 4; z++) {
        printf("%i\n", *(array2 + z));
    }



    int num123 = 123;
    int *pointer123 = &num123;
    printf("%p\n", pointer123);
    printf("%i\n", *pointer123);

    return 0;
}

/*
Pointer - a variable that stores the memory
address of another variable as its value.


Memory address of first element of array is same
as memory address of array



*/

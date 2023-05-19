# include <stdio.h>
# include <stdbool.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    printf("%i", array1[0]); // Accessing first element of array
    array1[0] = 12;

    int i;
    for (i = 0; i < 5; i++) { // Looping through array and printing elements of array
        printf("%i\n", array1[i]);
    }

    // Creating empty array that is four integers long
    int array2[4];
    array2[0] = 4; // Assigning parts of array
    array2[1] = 3;
    array2[2] = 2;
    array2[3] = 1;
    int data_size = sizeof(array2);
    printf("Size of array2: %i bytes\n", data_size); // Printing size of array


    int matrix[2][3] = {{1, 6, 12}, {34, 2, 76}};
    printf("%i\n", matrix[1][0]); // outputs 34

    int j, h; // Looping through the matrix (list of lists) and printing each element
    for (j = 0; j < 2; j++) {
        for (h = 0; h < 3; h++) {
            printf("Matrix value is: %i\n", matrix[j][h]);
        }
    }
    return 0;
}


# include <stdio.h>
# include <stdbool.h>

int main() {
    bool istrue = true; // Assigning booleans to variables
    bool isfalse = false;
    printf("%i\n", istrue); // Printing booleans using %i as true = 1, false = 0
    printf("%i\n\n", isfalse);

    printf("%d\n\n", 1 > 0);

    int myAge = 18;
    int votingAge = 18;

    if (myAge >= votingAge) { // Using if statements to find if a condition is true or not
        printf("Old enough to vote!");
    }   else {
        printf("Not old enough to vote.");
    }

    return 0;
}

/*
Notes:
- Need to use %i to return a boolean variable as they take the
value of 1 (true) or 0 (false)
*/


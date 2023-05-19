# include <stdio.h>
# include <stdbool.h>
# include <string.h>

enum Levels {
    LOW, // Default value of 0
    MEDIUM, // 1
    HIGH // 2, etc
};

enum LevelsAltered { // Can't have same names inside different enums
    LOW2 = 25,
    MEDIUM2 = 50,
    HIGH2 = 75
};

// By default LOW = 0 and after that each value increases by 1
// If you change low to 56, next numbers will be 57, 58, 59, 60,...

int main() {
    enum Levels level1 = LOW;
    printf("%i\n", level1);

    enum LevelsAltered level3 = HIGH2;
    printf("%i\n", level3);

    enum Levels testLevel = MEDIUM;

    switch (testLevel) { // Case values need to be in enum Levels
        case 0:
            printf("LOW");
            break;
        case 1:
            printf("MEDIUM");
            break;
        case 2:
            printf("HIGH");
            break;
        default:
            printf("Nothing");
            break;
    }

    int x = 1, y = 2, z = 3;

    return 0;
}

/*
Why And When To Use Enums?
Enums are used to give names to constants, 
which makes the code easier to read and maintain.

Use enums when you have values that you know aren't 
going to change, like month days, days, colors,
deck of cards, etc.
*/
# include <stdio.h>
# include <stdbool.h>

int main() {
    int x; // For loop loops from x = 1 to 10 adding 1 to x each time
    for (x = 1; x < 10; x++) {
        if (x == 4) {
            continue; // Skips 4 - continue takes it back to top
        } else if (x == 9) {
            break; // Stops at 9 therefore only prints 1-8 without 4
        } else {
            printf("%i\n", x); // Printing number
        }
    }


    return 0; // Always need to return 0 to end program
}



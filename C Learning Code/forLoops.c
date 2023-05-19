# include <stdio.h>
# include <stdbool.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%i\n", i);
        float y;
        for (y = 1.2; y < 10; y+=2) {
            printf("%.2f\n", y);
        }
    }
    
    return 0;
}

/*
For Loops:
Statement 1 sets a variable 
before the loop starts (int i = 0).

Statement 2 defines the condition
for the loop to run (i must be less than 5).
If the condition is true, the loop will start
over again, if it is false, the loop will end.

Statement 3 increases a value (i++) each time
the code block in the loop has been executed.

*/
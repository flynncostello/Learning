# include <stdio.h>
# include <stdbool.h>

int main() {
    int i = 0; // While loop - this example loops from 
    // i = 0 --> 4 and print i
    while (i < 5) {
        printf("%i\n", i);
        i++;
    }

    // This example loops from z = 1 --> 9 and checks what 
    // value z is before printing text
    // Later it also incldues a swtich depending on what value z is
    int z = 1;
    while (z < 10) {
        // Checking if z > 1, < 1 or equal to 1 then printing 
        // some output
        if (z > 1) {
            printf("a\n");
        } else if (z < 1) {
            printf("b\n");
        } else {
            printf("c\n");
        }

        // Short hand version of code similar to that above
        (z > 2) ? printf("z > 2\n") : printf("z < 2\n");

        z++;
        // Switch statement used to provide output for different
        // values or cases of some variable, in this case, z
        switch (z) {
            case 1:
                printf("case 1");
                break;
            case 2:
                printf("case 2");
                break;
            default:
                printf("default");
                break;
        }
    }

    int numX = 2;
    do {
        printf("%i\n\n", numX * 2);
        numX++;
    }
    while (numX < 10);

    return 0;
}
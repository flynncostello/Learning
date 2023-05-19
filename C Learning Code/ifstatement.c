# include <stdio.h>
# include <stdbool.h>

int main() {
    int time = 22;
    if (time < 10) {
        printf("Good morning.");
    } else if (time < 20) {
  	    printf("Good day.");
    } else {
        printf("Good evening.\n");
    }

    if (20 > 22) {
        printf("A");
    } else if (20 > 21) {
        printf("B");
    } else if (20 > 20) {
        printf("B2");
    } else {
        printf("C");
    }


    return 0;
}
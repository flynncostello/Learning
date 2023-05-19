# include <stdio.h>
# include <stdbool.h>

int main() {
    // Used to replace simple if...else code blocks
    int time = 20;
    (time < 18) ? printf("Good day.") : printf("Good evening.");

    // Same as the following:
    int time2 = 20;
    if (time2 < 18) {
        printf("Good day.");
    } else {
        printf("Good evening.");
    }

    // Extra
    (20 > 18) ? printf("Good day.") : printf("Good evening.");





    int y = 1;
    int z = 2;
    (z > y) ? printf("z is greater than y") : printf("z is less than y");




    return 0;
}

/*
(x > y) ? printf("Hello") : print("Hi");


(x > y) ? printf("Hello") : print("Hi");


(x > y) ? printf("Hello") : printf("Hi");

*/
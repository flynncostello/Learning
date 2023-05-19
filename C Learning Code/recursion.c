# include <stdio.h>
# include <stdbool.h>
# include <string.h>

int sum(int num);


int main() {
    int num = 100;
    printf("%i", sum(num));
    


    return 0;
}

int sum(int num) {
    if (num > 0) {
        return num + sum(num - 1);
    } else {
        return 0; // When recursion reaches num = 0
    }
}
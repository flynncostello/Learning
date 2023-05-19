# include <stdio.h>
# include <stdbool.h>

int main() {
    int day = 4;

    switch(day) {
        case 1:
            printf("Monday");
            break;
        case 8:
            printf("Monday2");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;

        default:
            printf("No Day");
            break;
    }

    return 0;
}

/*
Basic Structure of switch statement:

int variable = 1;

switch(variables) {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2")
        break;
    default:
        print("default")
        break;
}


switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}


*/
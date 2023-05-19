# include <stdio.h>
# include <stdbool.h>
# include <strings.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# include <string.h>

int main() {

    int count = 1;

    FILE * original_new;
    original_new = fopen("temp_database.txt", "w");



    char formatter[30];

    char info_array[10] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'};
    if (count == 1) {
        char formatter[] = "%s$%s$%s$%s$%s$%s$%s$%s$%s$%s"; // THIS ONE
    } else {
        char formatter[] = "\n%s$%s$%s$%s$%s$%s$%s$%s$%s$%s";
    }

    printf("\n----------------------------------------------------------------------------------------------------------");
    printf("\nEnter new first name: ");
    char new_first_name[50];
    fgets(new_first_name, 50, stdin);
    new_first_name[strlen(new_first_name) - 1] = '\0';


    switch (count) {
        case 1:
            printf("\n----------------------------------------------------------------------------------------------------------");
            printf("\nEnter new first name: ");
            char new_first_name[50];
            fgets(new_first_name, 50, stdin);
            new_first_name[strlen(new_first_name) - 1] = '\0';

            fprintf(original_new, formatter, new_first_name, info_array[1], info_array[2], info_array[3], info_array[4], info_array[5], info_array[6], info_array[7], info_array[8], info_array[9]);
            break;


    }
    return 0;
}
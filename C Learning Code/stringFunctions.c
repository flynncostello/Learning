# include <stdio.h>
# include <string.h> // Includes the string functions used in C

int main() {
    char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%lu\n", strlen(alpha)); // strlen gets length of string
    // Needs %i as output is an integer

    char string2[] = "Hello this is Bob!";
    printf("%lu\n", strlen(string2));
    // Different to sizeof() as it excludes the \0 character and sizeof() returns memoy size in bytes
    // E.g.,
    char example[50] = "Hello";
    printf("%lu\n", strlen(example));
    printf("%lu\n", sizeof(example));

    char str1[20] = "Hello ";
    char str2[] = "World!";
    strcat(str1, str2); // Concatenates string 2 to strin 1
    printf("%s\n", str1);
    printf("%s\n", str2); // str2 doesn't change
    printf("STR3:\n\n");
    char str3[30];
    strcpy(str3, str1); // Coping string1 to string3, string 1 replaces all text in string3
    printf("%s\n", str3);

    printf("%i", strcmp(str3, str1)); // Returns 0 if strings are equal else reutrns a value that is not 0

    /*
    strlen(string1) - gets length
    strcat(string1, string2) - concatenates string 2 into strin 1, string 2 doesn't change
    - Notes: Make sure string1 is large enough to stores both string1 and string2
    strcpy(string1, string2) - copies string2 to string1 replacing anything that might already by in string1
    strcmp(string1, string2) - compares string1 to string2, if they are the same it return 0 else it return something other than 0
    
    sizeof(string1) - gets size of string in bytes (includes enture size assigned to string)

    */

    return 0;
}

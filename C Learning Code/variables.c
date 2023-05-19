#include <stdio.h> //Allows us to use functions

int main() {
  printf("Hello World!\n"); //Print statement
  printf("Line2");
  printf("\tThis should be printed after a tab\n");
  printf("\\There should be a backslash here\n");
  printf("\" Double quote here\n\n");

  int num1 = 15;
  float float1;
  float1 = 12.5;
  double float2 = 12.98547;
  char char1 = 'L';

  printf("%d\n", num1);
  printf("%i\n", num1);
  printf("%f\n", float1);
  printf("%c\n", char1);
  printf("My favourite int is %i, my favourite char is %c, and my favourite float is %f\n", num1, char1, float1);

  float1 = 100.25; // Changing value of float1 to 100.25
  printf("%f\n", float1);

  int num2 = 2;
  num1 = num2; // num1 is now equal to 2

  int num3;
  num3 = num2; // Assigning the value of num2 to a new empty variable num3

  int sum = num1 + num2 + num3;

  printf("%d", num1 + num2 + num3);

  int x, y, z;
  x = y = z = 50;
  

  return 0; //Ends function
}

/*
Notes:
int - stores whole num (2-4 bytes) - %d or %i
float - stores decimal num (4 bytes) up to 6/7 decimals - %f
double - stores up to 15 decimal places (8 bytes) - %lf
char - stores one character (1 byte) - %c
string - stores more than one character/word - %s
*/
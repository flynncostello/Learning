# include <stdio.h>
# include <stdbool.h>
# include <string.h>
# include <math.h>

int main() {
    int num1 = 8;
    int num2 = 12;
    float float1 = 1.54;
    float float2 = 6.45;

    printf("%f\n", sqrt(num1));
    printf("%f\n", ceil(float1)); // Can't use %i even if it rounds to whole number
    // As we were originally using floats
    
    printf("%f\n", floor(float1));


    return 0;
}

/*
Math Functions:
sqrt(num)
ceil(num) - rounds number up always
floor(num) - rounds number down always
pow(num, power) - return num to the power of power
abs(x)
cos(x)
sin(x)
tan(x)
acos(x) - cos^-1(x)
asin(x)
atan(x)
cbrt(x) - cute root of x
exp(x) - e^x
*/
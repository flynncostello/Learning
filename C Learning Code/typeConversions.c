# include <stdio.h>

int main() {
    int num1 = 7;
    int num2 = 2;
    int sum = num1 + num2;
    printf("%i\n", sum);

    float sumX = (float) num1 + num2 + sum;
    printf("%.2f\n", sumX);

    /// Implicit Conversions (Automatic) ///
    float float1 = 5;
    // Converting int to float automatically (implicit conversion)
    printf("%f\n", float1); // 5.000000

    float int3 = 9.99; // 9
    // Assigning a float to an int converts the float to an int automatically
    printf("%f\n", int3);

    /// Explicit Conversions (Manual) ///
    float sum2 = (float) 5 / 2;
    printf("%f\n", sum2);

    float sum3 = 5 / 2; //This would result in 2.0000 as 5 and 2 are treated as ints not floats
    printf("%f\n", sum3);

    double sum4 = (float) 11234 / 2.61;
    printf("%.10lf\n", sum4);

    return 0;
}

/*
Notes:
Types of conversions:
1) Implicit Conversion (automatic)
    Done automatically when you assign a value of one type
    to another (this conversion is done by the compiler)
    E.g., if you assign an int (5) to a float type

2) Explicit Conversion (manual)


*/
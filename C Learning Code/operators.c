# include <stdio.h>

int main() {
    float float1 = 2;
    float float2 = 7;
    float2 /= float1;
    printf("%.2f\n\n", float2);

    int int3;
    float float3;
    double double3;
    double3 = 12345.13245783790812405389;
    char char3;
    printf("%lu\n", sizeof(int3));
    printf("%lu\n", sizeof(float3));
    printf("%lu\n", sizeof(double3));
    printf("%lu\n\n", sizeof(char3));


    int x = 10;
    int y = 5;
    printf("%i\n", x * y);

    return 0;
}

/*
Notes:

Arithmetic Operators:
    +
    -
    *
    /
    %
    ++ (increases value by 1)
    -- (decreases value by 1)

101
011

01010
10111
2

Assignment Operators:
    =
    +=
    -=
    *=
    /=
    %=
    &=
        Does a bitwise AND operation using the binary values
        E.g., 10 &= 23
        10 (in binary) 01010
        23 (in binary) 10111
        Where are they both 1? At 2, therefore it returns 2
    |= ()
        Same as &= but does bitwise OR operation
        E.g., 10 |= 23
        10: 01010
        23: 10111
        = 16 + 8 + 4 + 2 + 1 = 31
    ^= ()
        Same as two above but its a XOR (exclusive-or)
        I.e., one or the other not both
        E.g., 10 ^= 23
        10: 01010
        23: 10111
        = 16 + 8 + 4 + 1 = 29
    >>= ()
        Shifts bits of a number right by value to the right
        of the operator
        E.g. 23 >>= 2
        23: 10111
        So last 2 numbers on right get kicked of (the two 1's)
        and other 3 numbers move right, therefore result is:
        00101 = 5
        Can have negative inputs (e.g., 23 >>= -1) - just does what <<= does
        Will just shift all numbers left and add a 0 on the far right
    <<= ()
        Opposite of >>= (i.e., <<= shifts binary numbers left)
        E.g., 23 <<= 3
        23: 10111
        23 <<= 3: 10111000 = 8 + 16 + 32 + 128 = 184


Comparison Operators:
    1 = True
    0 = False
    ==
    !=
    >
    <
    >=
    <=

Logical Operators:
    && (and)
    || (or)
    ! (not)

sizeof - finds the memory size (in bytes) of a data type of variable
- Need to use %lu instead of %i or %d
*/
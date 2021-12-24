// Writing functions
#include "stdio.h"

int greatestCommonDivisor(int a, int b);
float abs(float x);
float sqrt(float x);

int main(int argc, char *argv[]) {
    int x, y;
    float answer;

    printf("Enter 2 numbers to find the Greatest Common Divisor: ");
    scanf("%d %d", &x, &y);
    answer = greatestCommonDivisor(x, y);
    printf("The Greatest Common Divisor of %d and %d is %0.0f\n", x, y, answer);

    float value;
    printf("Enter a number to find the absolute value: ");
    scanf("%f", &value);
    answer = abs(value);
    printf("The absolute value of %f is %f\n", value, answer);

    float input;
    printf("Enter a number to find the square root: ");
    scanf("%f", &input);
    answer = sqrt(input);
    printf("The square root of %f is %f", input, answer);

    return 0;
}

int greatestCommonDivisor(int a, int b) {

    if (a < 1 || b < 1) {
        printf("a or b is less than 1");
        return -1;
    }

    int r = 0;

    do {
        r = a % b;
        a = b;
        b = r;
    } while (b != 0);

    return a;
}

float abs(float x) {
    if (x != 0) {
        if (x > 0) {
            return x;
        } else {
            return -x;
        }
    }
}

float sqrt(float x)
{
    const  float  epsilon = .00001;
    float  guess   = 1.0;
    float returnValue = 0.0;

    if ( x < 0 )
    {
        printf ("Negative argument to squareRoot.\n");
        returnValue = -1.0;
    }
    else
    {
        while  ( abs (guess * guess - x) >= epsilon )
            guess = ( x / guess + guess ) / 2.0;

        returnValue = guess;
    }

    return returnValue;
}
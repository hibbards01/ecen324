/***********************************************************************
* Program:
*    Lab C_lab, ECEN 324 Learning C Lab
*    Brother Jones, ECEN 324
* Author:
*    Samuel Hibbard
* Summary:
*    Convert the .cpp program to .c
************************************************************************/

#include <stdio.h>
#define PI 3.1415926

/***********************************************************************
* main
*   This will be mainly testing out the power of stdout and stdin.
***********************************************************************/
int main (void)
{
    // Printing various items
    const char LETTER = 'A';

    printf("24\n");
    printf("%3.5f\n", PI);
    printf("%c\n", LETTER);

    float payRate = 10.50;
    int hours = 40;

    printf("Users pay rate: $%3.1f\n", payRate);
    printf(" Hours worked: %i\n", hours);
    printf("    Gross Pay: $%3.0f\n", payRate * hours);

    int number;
    fprintf(stderr, "Enter number: ");
    scanf("%d", &number);
    printf("Twice %i is %i\n", number, number * 2);

    //
    // Output Integer
    //

    int anInt = 99;
    float aFloat = 43.2;

    printf("\n");

    // Output the integer with the default formatting.
    printf("Integer: %d ###\n", anInt);

    // Output the integer in a fixed field width of 10.
    printf("Integer: %10d ###\n", anInt);

    // Output the integer in a fixed field width of 10
    // and left justified in the field.
    printf("Integer: %-10d ###\n", anInt);

    //
    // Output Float
    //

    printf("\n");

    // Output the float with the default formatting.
    printf("  Float: %.1f ###\n", aFloat);

    // Output the float in a fixed field width of 10.
    printf("  Float: %-10.1f ###\n", aFloat);

    // Output the float right justified in a field width of 10 with
    // a precision of 2 places after the decimal point for the float.
    printf("  Float: %10.2f ###\n", aFloat);

    // Output the float with 3 places of precision after the decimal point but
    // not giving a field width.
    printf("  Float: %0.3f ###\n", aFloat);

    // Output the float with 3 places of precision after the decimal point with
    // a field width of 10.
    printf("  Float: %10.3f ###\n", aFloat);

    // Output the float with 4 places of precision after the decimal point with
    // a field width of 10 and left justify the number.
    printf("  Float: %-10.4f ###\n", aFloat);

    //
    // Create some code to output a table
    //



    return 0;
}
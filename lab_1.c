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
    // Section is mainly about outputting an integer
    //



    return 0;
}
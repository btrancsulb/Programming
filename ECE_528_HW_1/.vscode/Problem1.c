#include <stdio.h>
#include <stdlib.h>

//problem 1: Write a program that asks the user to enter an integer and then prints out whether the number is positive, negative, or zero.
//Also, print the absolute value of the number.
//Design Requirements:
//1. Prompt the user to enter an integer.
//2. use if/else to classify the sign of the integer.
//3. compute the absolute value of the integer. You can use the abs function from the stdlib.h library. 
//4. print both the classification and the absolute value of the integer.

int main() {
    while (1) {
        int num;
        printf("Enter an integer: ");
        if (scanf("%d", &num) != 1) {
            printf("Error: invalid input. Please enter a valid integer.\n");
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }

        if (num > 0) {
            printf("The number is positive.\n");
        } else if (num < 0) {
            printf("The number is negative.\n");
        } else {
            printf("The number is zero.\n");
        }

        printf("The absolute value is: %d\n", abs(num));
        //break; // Exit the loop after successful input and processing
    }
    return 0;
}


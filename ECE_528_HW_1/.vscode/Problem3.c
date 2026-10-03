#include <stdio.h>
#include <stdlib.h>

//problem 3: Write a C program that computes the Nth Fibonacci sequence using an iterative
//  approach for n > 1.
// F0 = 0, F1 = 1
// Fn = Fn-1 + Fn-2
// Design Requirements:
// 1. Prompt the user to enter an integer N, where N >= 2. Add a condition that checks if
//    the user has entered a valid integer. Otherwise, display an error message if the user
//    has entered an invalid value.
// 2. Use a loop to compute the Fibonacci sequence. Do not use recursion.
// 3. Display the Nth Fibonacci sequence. Include your name in the output.

int main() {
    int N;
    printf("Enter an integer N, where N >= 2: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("Error: N must be >= 2.\n");
        return 1;
    }

    int a = 0, b = 1, c;
    for (int i = 2; i <= N; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("The Nth Fibonacci sequence is: %d\n", c);
    return 0;
}
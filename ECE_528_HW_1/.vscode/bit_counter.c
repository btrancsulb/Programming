#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>

// problem 2: Prompt the user to enter an unsigned 32-bit integer and add a condition that checks
// if the user has entered a valid integer. Otherwise, display an error message if the
// user has entered an invalid value.
// Implement a loop using n &= (n - 1) to count the set bits.
// Display the result to the user. 

int main(void) {
    while (1) {
        char buffer[64];
        char *end;
        unsigned long value;
        uint32_t n;
        int count = 0;

        printf("Enter an unsigned 32-bit integer: ");
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("Error: invalid integer entered.\n");
            return 1;
        }

        errno = 0;
        value = strtoul(buffer, &end, 10);
        while (*end != '\0' && isspace((unsigned char)*end)) {
            end++;
        }

        if (end == buffer || *end != '\0' || buffer[0] == '-' ||
            errno == ERANGE || value > UINT32_MAX) {
            printf("Error: invalid integer entered.\n");
            return 1;
        }

        n = (uint32_t)value;
        while (n != 0) {
            n &= (n - 1);
            count++;
        }

        printf("number of set bits is %d\n", count);
    }
    return 0;  // Exit the loop after successful input and processing
}

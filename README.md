# -ece528_fall26_homework1
fahhhh


1a. A compiler translates the program into machine code before execution, while an interpreter translates and executes the instructions at runtime.

1b. By default, running main() will return a 0

2. Header files have shared declarations such as constants or structs, and The #include directive copies the contents of a header file into the source file before compilation.

3. To declare and define a function, you first declare the function using a function prototype. To define a function, you provide an implementation inside the function. For example:

   Function()
     {
     implementation
     }

The return statement sends a value back to the code that called the function and immediately terminates the function. The returned value must match the function’s return type. You can have more than one return statement.

4. Type casting converts a value from one data type to another. For example:

int add_as_int(double a, double b)
{
    return (int)(a + b);
}

5. Local variables are declared inside a function or block and can only be accessed there, whereas global variables are declared outside all functions and can be accessed by multiple functions in the same source file.

6. A string can be initialized using what is called a string literal. For example:
  char word[] = "Hello";

'\0', a null terminator, marks the end of the string. C string functions use it to know where the string ends.

7. Pointers are variables that store the memory address of another variable. A pointer is passed to a function by using a pointer parameter. For example:

void double_value(int *number)
{
    *number = *number * 2;
}

Passing a pointer allows a function to modify the original variable, avoid copying large data structures, return multiple results through output parameters, and work directly with arrays and dynamically allocated memory.

8. In the context of pointers, The & operator obtains the address of a variable and the * operator dereferences a pointer, accessing the value stored at its address.

9. A while loop checks its condition before executing, while do while loops execute the body first before checking its condition.

10. The break statement immediately exits the loop, but differs from a continue statement, because using continue skips the rest of the current iteration and begins the next iteration.

11. the & symbol is a bitwise AND operator
    the | Symbol is a bitwise OR operator
    the ^ symbol is a bitwise XOR operator
    the ~ symbol is for bitwise complement
    "<<" is a bitwise shift to the left
    ">>" is a bitwise shift to the right

    To create a bit mask,
    
    uint8_t mask = (1 << 3);  // Binary: 00001000

    to set a bit using OR,

    value |= mask;

    to clear a bit,

    value &= ~mask;

    to toggle a bit,

    value ^= mask;

    to check a specific bit in an integer variable,

    if (value & mask)

12. PxSEL0 and PxSEL1 select the function assigned to a GPIO pin.
   to select p1.0 and p1.7,

   P1SEL0 &= ~(BIT0 | BIT7);
   P1SEL1 &= ~(BIT0 | BIT7);

13. void P1_1_and_P1_4_Init(void)
{
    const unsigned char MASK = 0x12;   // BIT1 | BIT4

    P1SEL0 &= ~MASK;
    P1SEL1 &= ~MASK;

    P1DIR &= ~MASK;    // Inputs
    P1REN |= MASK;     // Enable resistors
    P1OUT |= MASK;     // Pull-ups
}

14. void Buttons_Init(void)
{
    const unsigned char P3_MASK = 0x42;  // BIT1 | BIT6
    const unsigned char P5_MASK = 0x11;  // BIT0 | BIT4

    P3SEL0 &= ~P3_MASK;
    P3SEL1 &= ~P3_MASK;
    P3DIR &= ~P3_MASK;
    P3REN |= P3_MASK;
    P3OUT &= ~P3_MASK;    // Pull-downs

    P5SEL0 &= ~P5_MASK;
    P5SEL1 &= ~P5_MASK;
    P5DIR &= ~P5_MASK;
    P5REN |= P5_MASK;
    P5OUT &= ~P5_MASK;    // Pull-downs
}

15. void LEDs_Init(void)
{
    const unsigned char LED_MASK = 0xFF;

    P7SEL0 &= ~LED_MASK;
    P7SEL1 &= ~LED_MASK;

    P7DIR |= LED_MASK;    // Outputs
    P7OUT &= ~LED_MASK;   // Initialize to zero
}

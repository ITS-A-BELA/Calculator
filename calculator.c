#include <stdio.h>

int main() {
    // Step 1: Choose Operations
    int choice;
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Step 2: Get User Input
    float num1, num2;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Step 3: Perform Operation
    float result;
    switch (choice) {
        case 1: result = num1 + num2; break;
        case 2: result = num1 - num2; break;
        case 3: result = num1 * num2; break;

        case 4: 
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero is not allowed.\n");
                return 1; // Exit program with error code
            }
            break;
        default: printf("Invalid choice!\n"); return 1; // Exit program with error code
    }

    // Step 4: Display Result
    printf("%.2f %c %.2f = %.2f\n", num1, (choice == 1) ? '+' : (choice == 2) ? '-' : (choice == 3) ? '*' : '/', num2, result);

    return 0;
}

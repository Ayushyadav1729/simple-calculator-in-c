#include <stdio.h>
#include <math.h>

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
int modulus(int a, int b);
double power(double base, double exp);
double squareRoot(double num);

int main() {
    int choice;
    double num1, num2, result;

    while (1) { // Infinite loop for the menu
        // Displaying the menu
        printf("\n===== Calculator Menu =====\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("6. Exponentiation (^)\n");
        printf("7. Square Root (√)\n");
        printf("8. Exit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        // Handling the user’s choice
        if (choice >= 1 && choice <= 6) {
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                if (num2 != 0)
                    result = divide(num1, num2);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;
            case 5:
                printf("Result: %d\n", modulus((int)num1, (int)num2));
                break;
            case 6:
                result = power(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 7:
                printf("Enter number: ");
                scanf("%lf", &num1);
                if (num1 >= 0)
                    printf("Result: %.2lf\n", squareRoot(num1));
                else
                    printf("Error! Square root of negative number is not defined.\n");
                break;
            case 8:
                printf("Exiting calculator. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    return a / b;
}
int modulus(int a, int b) {
    return a % b;
}
double power(double base, double exp) {
    return pow(base, exp);
}
double squareRoot(double num) {
    return sqrt(num);
}

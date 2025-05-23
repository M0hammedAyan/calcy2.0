#include <stdio.h>

// Calculator Functions
float summation(float a, float b) {
    return a + b;
}

float subtraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Cannot divide by zero.\n");
        return 0.0;
    }
}

int main() {
    float a, b;
    int choice;

    // Get initial values
    printf("Enter value of a: ");
    while (scanf("%f", &a) != 1) {
        printf("Invalid input. Enter numeric value for a: ");
        while(getchar() != '\n'); // clear buffer
    }

    printf("Enter value of b: ");
    while (scanf("%f", &b) != 1) {
        printf("Invalid input. Enter numeric value for b: ");
        while(getchar() != '\n'); // clear buffer
    }

    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Summation\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Enter new values\n");
        printf("6. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Result: %.2f\n", summation(a, b));
                break;
            case 2:
                printf("Result: %.2f\n", subtraction(a, b));
                break;
            case 3:
                printf("Result: %.2f\n", multiplication(a, b));
                break;
            case 4:
                printf("Result: %.2f\n", divide(a, b));
                break;
            case 5:
                printf("Enter new value of a: ");
                while (scanf("%f", &a) != 1) {
                    printf("Invalid input. Enter numeric value for a: ");
                    while(getchar() != '\n');
                }
                printf("Enter new value of b: ");
                while (scanf("%f", &b) != 1) {
                    printf("Invalid input. Enter numeric value for b: ");
                    while(getchar() != '\n');
                }
                break;
            case 6:
                printf("Thank you! Exiting.\n");
                return 0;
            default:
                printf("Invalid choice! Please select from the menu.\n");
        }
    }

    return 0;
}

#include <stdio.h>


float add(float a, float b) {
    return a + b;
}


float subtract(float a, float b) {
    return a - b;
}


float multiply(float a, float b) {
    return a * b;
}


float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}


int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter the first number: ");
            scanf("%f", &num1);
            printf("Enter the second number: ");
            scanf("%f", &num2);

            switch (choice) {
                case 1:
                    result = add(num1, num2);
                    printf("Result: %.2f\n", result);
                    break;
                case 2:
                    result = subtract(num1, num2);
                    printf("Result: %.2f\n", result);
                    break;
                case 3:
                    result = multiply(num1, num2);
                    printf("Result: %.2f\n", result);
                    break;
                case 4:
                    result = divide(num1, num2);
                    
                        printf("Result: %.2f\n", result);
                    
                    break;
            }
        } else if (choice == 5) {
            printf("Exiting the program. Goodbye!\n");
            break;
        } else {
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0.0;
    }
    return (float)a / b;
}

int main() {
    int choice;
    int x, y;
    float result;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two integers: ");
            scanf("%d %d", &x, &y);
        }

        switch (choice) {
            case 1:
                printf("Result = %d\n", add(x, y));
                break;
            case 2:
                printf("Result = %d\n", sub(x, y));
                break;
            case 3:
                printf("Result = %d\n", mul(x, y));
                break;
            case 4:
                result = divide(x, y);
            if (y != 0) {
                    printf("Result = %.2f\n", result);
                }
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}

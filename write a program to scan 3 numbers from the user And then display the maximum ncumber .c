#include <stdio.h>
int main()
{
    int num1, num2, num3;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the maximum number using if statements
    if (num1 >= num2 && num1 >= num3) {
        printf("The maximum number is %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The maximum number is %d\n", num2);
    } else {
        printf("The maximum number is %d\n", num3);
    }

    return 0;
}

// using switch statement

int main() {
    int num1, num2, num3;
    int max;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the maximum number using switch statements
    int case_selector = (num1 >= num2 && num1 >= num3) ? 1 :
                        (num2 >= num1 && num2 >= num3) ? 2 : 3;

    switch (case_selector) {
        case 1:
            max = num1;
            break;
        case 2:
            max = num2;
            break;
        case 3:
            max = num3;
            break;
        default:
            max = num1; // Default case (should not be reached)
    }

    printf("The maximum number is %d\n", max);

    return 0;
}

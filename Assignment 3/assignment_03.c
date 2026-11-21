#include <stdio.h>

int main()
{
    char op;
    int a, b, Result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            Result = a + b;
            printf("Result = %d", Result);
            break;

        case '-':
            Result = a - b;
            printf("Result = %d", Result);
            break;

        case '*':
            Result = a * b;
            printf("Result = %d", Result);
            break;

        case '/':
            if(b != 0)
            {
                Result = a / b;
                printf("Result = %d", Result);
            }
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}

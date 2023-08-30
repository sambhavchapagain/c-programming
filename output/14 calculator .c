#include <stdio.h>

int main() {
    char o;
    double n1, n2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &o);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);

    switch (o)
     {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            if (n2 != 0)
             {
                result = n1 / n2;
            }
             else 
             {
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;
    }

    printf("Result: %.2lf %c %.2lf = %.2lf\n", n1, o, n2, result);

    return 0;
}

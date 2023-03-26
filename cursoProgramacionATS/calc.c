#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_EXPR_LEN 100

double eval(char *expr);

int main()
{
    char expr[MAX_EXPR_LEN];
    double result;

    printf("Enter a mathematical expression: ");
    fgets(expr, MAX_EXPR_LEN, stdin);
    expr[strcspn(expr, "\n")] = '\0'; // remove newline character from input

    result = eval(expr);
    printf("Result: %lf\n", result);

    return 0;
}

double eval(char *expr)
{
    double result;
    char *endptr;
	result = strtod(expr, &endptr);

	char *p = expr;
    while (*p != '\0')
    {
        if (*p == '*' || *p == '/' || *p == '^')
        {
            char op = *p++;
            double operand = strtod(p, &p);

            switch (op)
            {
                case '*':
                    result *= operand;
                    break;
                case '/':
                    result /= operand;
                    break;
                case '^':
                    result = pow(result, operand);
                    break;
            }
        }
        else
        {
            p++;
        }
    }
    
    // evaluate addition and subtraction first
    while (*endptr != '\0')
    {
        char op = *endptr++;
        double operand = strtod(endptr, &endptr);

        switch (op)
        {
            case '+':
                result += operand;
                break;
            case '-':
                result -= operand;
                break;
            default:
                fprintf(stderr, "Invalid operator: %c\n", op);
        }
    }

    // evaluate multiplication, division, and exponentiation next

    return result;
}


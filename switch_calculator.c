#include <stdio.h>
/*int add(int, int);


int add(int a, int b)
{
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    return (a+b);
}

int sub(int a, int b)
{
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    return (a-b);
}

int div(int a, int b)
{
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    return (a/b);
}

int mult(int a, int b)
{
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    return (a*b);
}

int remd(int a, int b)
{
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    return (a % b);
}*/


int main()
{
    char operator;
    printf("Enter the operator sign: ");
    scanf("%c", operator);
    
    switch (operator)
    {
    case '+'/* constant-expression */:
        int l; int e; int result;
        result = remd(l,e);
        printf("%d", result);
        return 0;     
       /* code */
        break;
    case '-':
        int l; int e; int result;
        result = sub(l,e);
        printf("%d", result);
        return 0; 
        break;
    
    case '*':
        int l; int e; int result;
        result = mult(l,e);
        printf("%d", result);
        return 0; 
        break;

    case '/':
        int l; int e; int result;
        result = div(l,e);
        printf("%d", result);
        return 0; 
        break;

    case '%':
        int l; int e; int result;
        result = remd(l,e);
        printf("%d", result);
        return 0; 
        break;
    default:
        printf("Wrong operator entered:");
        break;
    }
}
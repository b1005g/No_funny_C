#include <stdio.h>
int add(int a, int b);
int minus(int a, int b);
int factorial(int n);

int add(int a, int b)
{   
    int result;
    result = a+b;
    return result;
}

int minus(int a, int b)
{
    int result;
    result = a-b;
    return result;
}

int factorial(int n)
{   
    int i, result = 1;
    for(i = 1; i <= n; i++)
        result *= i; 
    return result;
}

int main(void)
{   
    int num1, result;
    printf("정수를 입력하세요: ");
    scanf("%d", &num1);

    result = factorial(num1);
    printf("답은 %d입니다.", result);
    return 0;
}
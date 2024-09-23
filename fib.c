#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 10

unsigned long long iterativeFibonacci(unsigned long long n)
{
    unsigned long long result = 0;
    unsigned long long value1 = 0;
    unsigned long long value2 = 1;

    for (int i = 1; i <= n; i++)
    {
        result = value1 + value2;
        value2 = value1;
        value1 = result; 
    }

    return result;
}

unsigned long long recursiveFibonacci(unsigned long long n)
{
    if(n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    
    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

int main(int argc, char * argv[]) {
    
    unsigned long long  N = atoi(argv[1]) - 1;

    if (*argv[2] == 'i')
    {
        printf("%llu", iterativeFibonacci(N));
        printf("\n");
    }

    if (*argv[2] == 'r')
    {
        printf("%llu", recursiveFibonacci(N));
        printf("\n");
    }

   return 0;
}



#include <stdio.h>
#include <stdlib.h>

/*
./fib N METHOD

N = positive integer index
METHOD = 'i' for iterative, 'r' for recursive

Can take an integer in the range of 0 to the largest possible integer,
and outputs the first N Fibonacci numbers using the specified method
*/

#define MAX_LEN 1024

unsigned long long iter_fib(unsigned long long fibIndex) {
    
    unsigned long long previous = 0;
    unsigned long long result = 1;

    for (int ix = 0; ix <= fibIndex - 2; ix++) {
        unsigned long long temp = previous + result;
        previous = result;
        result = temp;   
    }

    return result;
}

unsigned long long rec_fib(unsigned long long fibIndex) {
    
    if(fibIndex < 2) {
        return fibIndex;
    }

    return rec_fib(fibIndex - 1) + rec_fib(fibIndex - 2);
}
 
int main(int argc, char * argv[]) {
    
    unsigned long long fibIndex = atoi(argv[1]) - 1;

    if (*argv[2] == 'i') {
        printf("%llu", iter_fib(fibIndex));
        printf("\n");
    }

    if (*argv[2] == 'r') {
        printf("%llu", rec_fib(fibIndex));
        printf("\n");
    }

   return 0;
}



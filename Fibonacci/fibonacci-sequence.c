#include <stdio.h>
#include <assert.h>

// fib() assummes n is 0 or higher (0,1,2,...,n)
int fib(int n){
    
    // returns 0 or 1
    if (n == 0){
        return 0;
    }

    else if (n == 1){
        return 1;
    }
    
    else{
        return fib(n - 1) + fib(n - 2); // recursively call fib()
    }
}

int main()
{
    // first test
    int num = 0, fib_out = fib(num);
    assert(fib_out == 0);
    printf("Passed test 1\n");

    // second test
    num = 1, fib_out = fib(num);
    assert(fib_out == 1);
    printf("Passed test 2\n");

    // third test
    num = 2, fib_out = fib(num);
    assert(fib_out == 1);
    printf("Passed test 3\n");

    // fourth test
    num = 8, fib_out = fib(num);
    assert(fib_out == 21);
    printf("Passed test 4\n");

    // fifth test
    num = 10, fib_out = fib(num);
    assert(fib_out == 55);
    printf("Passed test 5\n");

    return 0;
}

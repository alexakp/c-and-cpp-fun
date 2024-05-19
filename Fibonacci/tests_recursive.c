#include <stdio.h>
#include <assert.h>

#include "fibonacci-sequence-recursive.c" // test Recursive

int main(void){

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

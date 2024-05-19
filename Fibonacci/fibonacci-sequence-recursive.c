// Recursive Approach
int fib(int n){
    
    // returns 0 or 1, base cases
    if (n == 0){
        return 0;
    }

    else if (n == 1){
        return 1;
    }
    
    else{
        return fib(n - 1) + fib(n - 2);
    }
}

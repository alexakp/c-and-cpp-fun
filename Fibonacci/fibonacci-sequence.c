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

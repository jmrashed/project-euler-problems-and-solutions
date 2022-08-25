#include <stdio.h>

int filt(int n){
    return ( n % 2 == 0);
}

int fib_func(int n0, int n1, int acc){
    if (n0 + n1 > 4000000)
        return acc;
    else
        return fib_func(n1, n0+n1, acc + filt(n0+n1)*(n0+n1));
}

int main(int argc, char* argv){
    printf("%d\n", fib_func(0,1,0));
    return 0;
}

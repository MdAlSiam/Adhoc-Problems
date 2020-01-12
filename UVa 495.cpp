#include <bits/stdc++.h>
using namespace std;

int fib[5005][1200];
int i, j;

void make_fib(){
    fib[0][0] = 0;
    fib[1][0] = 1;

    for(i = 2; i < 5005; i++){
        for(j = 0; j < 1200; j++){

            fib[i][j] += fib[i-1][j] + fib[i-2][j];

            if(fib[i][j] > 9){
                fib[i][j+1] += fib[i][j] / 10;
                fib[i][j] %= 10;
            }

        }
    }
}

int main(){
    make_fib();
    int n;
    while(scanf("%d", &n) == 1){
        if(n == 0){
            printf("The Fibonacci number for 0 is 0\n");
            continue;
        }
        int started = 0;
        printf("The Fibonacci number for %d is ", n);
        for(j = 1199; j >= 0; j--){
            if(fib[n][j] == 0 && !started) continue;
            started = 1;
            printf("%d", fib[n][j]);
        }
        printf("\n");
    }
}

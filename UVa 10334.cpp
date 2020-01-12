#include <bits/stdc++.h>
using namespace std;

#define limit 1100
#define max_len 1100

int fib[limit][max_len];

void precalculation(){

    fib[0][0] = 1;
    fib[1][0] = 2;

    for(int i = 2; i < limit; i++){
        for(int j = 0; j < max_len; j++){
            fib[i][j] += (fib[i-1][j] + fib[i-2][j]);

            if(fib[i][j] > 9){
                fib[i][j+1] += (fib[i][j] / 10);
                fib[i][j] %= 10;
            }
        }
    }
}

int main(){

    precalculation();

    int n;
    while(scanf("%d", &n) == 1){
        int i;
        for(i = max_len-1; i > 0; i--)
            if(fib[n][i] != 0) break;
        for(; i >= 0; i--)
            printf("%d", fib[n][i]);
        printf("\n");
    }
}

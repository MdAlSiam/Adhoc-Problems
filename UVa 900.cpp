#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <list>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define pi acos(-1.0)
#define pb push_back
#define Sort(x) sort(x.begin(), x.end())
#define For(i, x, y) for(ll i = x; i < y; i++)
#define pii pair < int, int >
#define ppi pair < pii, int >
#define ff first
#define ss second

#define limit 55
#define length 20
ll fib[limit][length];

void fibonacci(){
    fib[1][0] = 1;
    fib[2][0] = 2;
    For(i, 3, limit){
        For(j, 0, length){
            fib[i][j] += fib[i-1][j] + fib[i-2][j];
            if(fib[i][j] > 9){
                fib[i][j+1] += fib[i][j] / 10;
                fib[i][j] %= 10;
            }
        }
    }
}

int main(){
    fibonacci();
    ll n, i;
	while(scl(n) == 1){
        if(n == 0) return 0;
        for(i = length-1; i > 0; i--){
            if(fib[n][i] != 0) break;
        }
        for(; i >= 0; i--) printf("%lld", fib[n][i]);
        printf("\n");
	}
}

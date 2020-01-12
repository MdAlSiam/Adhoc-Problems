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

int main(){
	ll test, w, m, n;
	scl(test);
	For(i, 1, test+1){
        scl(w);
        if(w % 2 == 0){
            for(ll k = 2; k <= w; k += 2){
                m = k;
                n = w / m;
                if(w%m == 0 && n%2 == 1 && m*n == w) break;
            }
            printf("Case %lld: %lld %lld\n", i, n, m);
        }
        else{
            printf("Case %lld: Impossible\n", i);
        }
	}
	return 0;
}


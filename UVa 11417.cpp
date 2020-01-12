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

ll gcd(ll a, ll b){
    if(a % b == 0) return b;
    return gcd(b, a%b);
}

int main(){
	ll n, gcdsum;
	while(scl(n) == 1){
        if(n == 0) return 0;
        gcdsum =  0;
        For(i, 1, n+1){
            For(j, i+1, n+1){
                gcdsum += gcd(i, j);
            }
        }
        printf("%lld\n", gcdsum);
	}
}

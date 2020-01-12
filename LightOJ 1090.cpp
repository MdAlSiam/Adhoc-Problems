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
	ll test, f5, f2, p5, p2, ans, n, r, p, q;
	scl(test);
	For(t, 1, test+1){
        scl(n);
        scl(r);
        scl(p);
        scl(q);

        f5 = 0, f2 = 0, p5 = 0, p2 = 0;

        ///5 in facts

        for(ll i = 5; i <= n; i *= 5){
            f5 += (n / i);
        }
        for(ll i = 5; i <= (n-r); i *= 5){
            f5 -= ((n-r) / i);
        }
        for(ll i = 5; i <= r; i *= 5){
            f5 -= (r / i);
        }

        ///2 in facts

        for(ll i = 2; i <= n; i *= 2){
            f2 += (n / i);
        }
        for(ll i = 2; i <= (n-r); i *= 2){
            f2 -= ((n-r) / i);
        }
        for(ll i = 2; i <= r; i *= 2){
            f2 -= (r / i);
        }

        ///5 in power
        ll l = p;

        while(l % 5 == 0 && l > 1){
            p5++;
            l /= 5;
        }

        ///2 in power

        while(p % 2 == 0 && p > 1){
            p2++;
            p /= 2;
        }

        p5 *= q;
        p2 *= q;

        ans = min(f5+p5, f2+p2);

        printf("Case %lld: %lld\n", t, ans);
	}
	return 0;
}

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
    ll test;
    scl(test);
    for(ll kount = 1; kount <= test; kount++){
        ///Input
        ll a, b, c, d;
        char gs[36];
        scanf("%lld.%lld.%lld.%lld", &a, &b, &c, &d);
        scanf("%s", &gs);

        ///Check Input
        //printf("Check: %lld %lld %lld %lld\n", a, b, c, d);
        //printf("Check: %s\n", gs);

        ///Structure of Answer
        int i;
        char ans[36];
        for(i = 0; i < 35; i++) ans[i] = '0';
        ans[8] = '.';
        ans[17] = '.';
        ans[26] = '.';
        ans[35] = '\0';

        ///Processing a
        for(i = 7; i >= 0; i--){
            if((a % 2) == 1) ans[i] = '1';
            a /= 2;
        }

        ///Processing b
        for(i = 16; i >= 9; i--){
            if((b % 2) == 1) ans[i] = '1';
            b /= 2;
        }

        ///Processing c
        for(i = 25; i >= 18; i--){
            if((c % 2) == 1) ans[i] = '1';
            c /= 2;
        }

        ///Processing d
        for(i = 34; i >= 27; i--){
            if((d % 2) == 1) ans[i] = '1';
            d /= 2;
        }

        //printf("Check ans: %s\n", ans);
        
        ///Comparison
        bool milse = true;
        for(i = 0; i < 35; i++){
            if(ans[i] != gs[i]){
                milse = false;
                break;
            }
        }
        
        if(milse) printf("Case %lld: Yes\n", kount);
        else printf("Case %lld: No\n", kount);
    }
	return 0;
}
    

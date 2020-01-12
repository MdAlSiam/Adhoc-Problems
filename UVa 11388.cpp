#include <bits/stdc++.h>

#define ll long long
#define scl(x) scanf("%lld", &x)
using namespace std;

int main(){
    ll gcd, lcm;
    ll test;
    scl(test);

    while(test--){
        scl(gcd);
        scl(lcm);

        if(lcm%gcd) printf("-1\n");
        else printf("%lld %lld\n", gcd, lcm);
    }
    return 0;
}

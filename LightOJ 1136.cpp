#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll YesCountTill(ll x){
    ll full_set = x / 3;
    if(x % 3 == 0 || x % 3 == 1) return 2*full_set;
    else return 2*full_set+1;
}

int main(){
    int test;
    ll a, b, ans;
    scanf("%d", &test);
    for(int i = 1; i <= test; i++){
        scanf("%lld %lld", &a, &b);
        ans = YesCountTill(b) - YesCountTill(a-1);
        printf("Case %d: %lld\n", i, ans);
    }
    return 0;
}

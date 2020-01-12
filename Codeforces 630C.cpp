#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    scanf("%lld", &n);
    long long int ans = 0;
    for(long long int i = 1; i <= n; i++){
        ans += pow(2, i);
    }
    printf("%lld\n", ans);
}

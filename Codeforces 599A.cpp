#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll d1, d2, d3, min_dis;
    while(scanf("%lld %lld %lld", &d1, &d2, &d3) == 3){
        min_dis = d1 + d2 + d3;
        ///if((d1 + d2 + d3) <= min_dis ) min_dis = d1 + d2 + d3;
        if((2 * (d1 + d2)) <= min_dis ) min_dis = 2 * (d1 + d2);
        if((2 * (d1 + d3)) <= min_dis ) min_dis = 2 * (d1 + d3);
        if((2 * (d2 + d3)) <= min_dis ) min_dis = 2*(d2 + d3);
        cout << min_dis << endl;
    }
}

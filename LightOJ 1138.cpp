#include <bits/stdc++.h>
using namespace std;

int gnoz; //given number of zeros

int zerosinfact(int n){
    int ret = 0;
    for(int i = 5; i <= n; i *= 5){
        ret += (n/i);
    }
    return ret;
}

int explore(int lo, int hi){
    if(lo > hi) return -1;
    int mid = lo + (hi - lo) / 2;
    int kount = zerosinfact(mid);
    if(kount == gnoz){
        while(zerosinfact(mid) == gnoz) mid--;
        return ++mid;
    }
    if(kount < gnoz)
        return explore(mid+1, hi);
    else return explore(lo, mid-1);
}

int main(){
    int test, kase = 0;
    scanf("%d", &test);
    while(test--){
        scanf("%d", &gnoz);
        int ans = explore(1, INT_MAX);
        printf("Case %d: ", ++kase);
        if(ans == -1) printf("impossible\n");
        else printf("%d\n", ans);
    }
}

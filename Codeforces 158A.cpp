#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, x[51], nibo;
    while(scanf("%d %d", &n, &k) == 2){
        for(int i = 1; i <= n; i++) cin >> x[i];
        if(x[k] == 0){
            nibo = 0;
            //cout << nibo << endl;
            //break;
            for(int i = k-1; i > 0; i--){
                if(x[i] > 0) {
                    nibo = i;
                    break;
                }
            }
            cout << nibo << endl;
            continue;
        }
        nibo = k;
        for(int i = k+1; i <= n; i++){
            if(x[i] == x[i-1]) nibo++;
            else break;
        }
        cout << nibo << endl;
    }
    return 0;
}

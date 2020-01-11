#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, h;
    while(scanf("%d %d", &n, &h) == 2){
        int ara[n];
        int width = 0;
        for(int i = 0; i < n; i++){
            cin >> ara[i];
            if(ara[i] > h) width += 2;
            else width += 1;
        }
        cout << width << endl;
    }
    return 0;
}

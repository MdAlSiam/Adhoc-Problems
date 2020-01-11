#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    char x[4];
    while(scanf("%d", &n) == 1){
        int res = 0;
        for(int i = 0; i < n; i++){
            scanf("%s", &x);
            if(x[0] == '+' && x[1] == '+') res++;
            if(x[1] == '+' && x[2] == '+') res++;
            if(x[0] == '-' && x[1] == '-') res--;
            if(x[1] == '-' && x[2] == '-') res--;
        }
        cout << res << endl;
    }
    return 0;
}

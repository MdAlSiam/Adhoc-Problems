#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, e, init;
    cin >> a >> b >> c >> d >> e;
    init = a + b + c + d + e;
    if(init == 0) cout << "-1" << endl;
    else if (init % 5 == 0) cout << init / 5 << endl;
    else cout << "-1" << endl;
    return 0;
}

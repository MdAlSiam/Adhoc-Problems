#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin >> x;
    int length = x.length();

    for(int i = 0; i < length; i++){
        if(x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U' || x[i] == 'Y' || x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u' || x[i] == 'y')
            continue;
        if(x[i] >= 65 && x[i] <= 90) x[i] = x[i] + 32;
        cout << "." << x[i];
    }
    cout << endl;
    return 0;
}

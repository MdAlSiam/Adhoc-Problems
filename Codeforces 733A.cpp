#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin >> x;
    int length = x.length();
    int laf = 0;
    int current_best = 0;
    for(int i = 0; i <= length; i++){
        laf++;
        if(x[i] == 'A' || x[i] == 'E' || x[i] == 'Y' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U' || i == length){
            if(laf > current_best) current_best = laf;
            laf = 0;
        }
    }

    cout << current_best << endl;
    return 0;
}

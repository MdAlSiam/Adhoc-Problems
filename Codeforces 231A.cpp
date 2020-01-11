#include <iostream>
using namespace std;

int main() {
    int n, a[3], sum;
    cin >> n;
    
    int ts = 0;

    for(int k = 0; k < n; k++) {
        cin >> a[0] >> a[1] >> a[2];
        sum = a[0] + a[1] + a[2];
        if(sum >= 2) ts++;
    }

    cout << ts << endl;
	return 0;
}

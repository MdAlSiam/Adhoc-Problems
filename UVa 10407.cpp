#include <bits/stdc++.h>
using namespace std;
 
typedef long long vlong;
 
vlong gcd ( vlong a, vlong b ) {
    while ( b ) {
        a = a % b;
        swap ( a, b );
    }
    return a;
}
 
vlong arr[1010];
 
int main () {
 
    while ( scanf ( "%d", &arr[0] ) != EOF ) {
        if ( arr[0] == 0 ) break; //End of test case
 
        //A new test case has started
        int cur = 1;
 
        //Take input
        while ( 1 ) {
            scanf ( "%lld", &arr[cur] );
            if ( arr[cur] == 0 ) break;
            else cur++;
        }
 
        vlong g = 0; //Start with 0 since gcd(0,x) = x.
        for ( int i = 1; i < cur; i++ ) {
            int dif = arr[i] - arr[i-1]; //Calculate difference
            g = gcd ( g, dif ); //Find gcd() of differences
        }
 
        if ( g < 0 ) g *= -1; //In case gcd() comes out negative
        printf ( "%lld\n", g );
    }
 
    return 0;
}

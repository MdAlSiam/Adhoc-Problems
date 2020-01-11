#include <stdio.h>
#include <math.h>

int main(){
    int T, i;
    double r, pi = 2*acos(0.0), ans;
    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        scanf("%lf", &r);
        ans = r*r*(4 - pi) + 0.000000001;
        printf("Case %d: %.2lf\n", i, ans);
    }
    return 0;
}

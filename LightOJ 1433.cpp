#include <bits/stdc++.h>
using namespace std;

int main(){
    int test, kase = 0;
    scanf("%d", &test);
    while(test--){
        double ox, oy, ax, ay, bx, by;
        scanf("%lf %lf %lf %lf %lf %lf", \
              &ox, &oy, &ax, &ay, &bx, &by);
        double a, b, c, theta, arc;
        a = sqrt( (ox-ax)*(ox-ax) + (oy-ay)*(oy-ay) );
        b = a;
        c = sqrt( (ax-bx)*(ax-bx) + (ay-by)*(ay-by) );

        theta = acos(  (a*a+b*b-c*c) / (2*a*b)   );

        arc = a*theta;

        printf("Case %d: %.10lf\n", ++kase, arc);
    }
}

#include<stdio.h>
int main(){
    long long int m,n,a,p,q;
    scanf("%lld %lld %lld",&n, &m, &a);

    if(n%a==0) p=n/a; else p=(n/a)+1;
    if(m%a==0) q=m/a; else q=(m/a)+1;

    printf("%lld\n",p*q);

return 0;
}

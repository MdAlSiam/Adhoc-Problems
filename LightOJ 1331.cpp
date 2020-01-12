
#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <list>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define pi acos(-1.0)
#define pb push_back
#define Sort(x) sort(x.begin(), x.end())
#define For(i, x, y) for(ll i = x; i < y; i++)
#define pii pair < int, int >
#define ppi pair < pii, int >
#define ff first
#define ss second

int main(){
	ll test;
	dd ra, rb, rc, a, b, c, A, B, C, s, area, triarea;
	scl(test);
	For(i, 1, test+1){
        scanf("%lf %lf %lf", &ra, &rb, &rc);
        a = ra+rb;
        b = ra+rc;
        c = rb+rc;
        A = acos((b*b + c*c - a*a) / (2.0*b*c));
        B = acos((a*a + c*c - b*b) / (2.0*a*c));
        C = acos((b*b + a*a - c*c) / (2.0*b*a));

        s = (a+b+c) / 2;
        triarea = sqrt(s*(s-a)*(s-b)*(s-c));

        area = triarea - 0.5*(ra*ra*C+rb*rb*B+rc*rc*A);

        printf("Case %lld: %.10lf\n", i, area);
	}
	return 0;
}

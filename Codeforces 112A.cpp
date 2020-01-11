#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
	char a[102], b[102];
	scanf("%s", a);
	scanf("%s", b);

	ll ans = 0, len = strlen(a);

	for(ll i = 0; i < len; i++){
		if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
		if(b[i] >= 'A' && b[i] <= 'Z') b[i] += 32;
		if(a[i] == b[i]) {}
		else if(a[i] < b[i]){ans = -1; break;}
		else if(a[i] > b[i]){ans = 1; break;}
	}

	printf("%lld\n", ans);
}

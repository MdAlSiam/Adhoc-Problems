#include <bits/stdc++.h>
using namespace std;

#define ll long long int

list<ll> adj_list[200005];
ll color[200005];
bool node[200005];

#define WHITE 0
#define RED 1
#define GREEN 2

ll maxcolor(ll src){

    ll redkount = 0, greenkount = 0;

    queue<ll> q;
    q.push(src);
    color[src] = RED;
    redkount++;

    while(!q.empty()){

        ll u = q.front();
        q.pop();

        list<ll>::iterator it;

        for(it = adj_list[u].begin(); it != adj_list[u].end(); it++){
            ll v = *it;
            if(color[v] == WHITE){
                if(color[u] == GREEN){
                    color[v] = RED;
                    redkount++;
                }
                else{
                    color[v] = GREEN;
                    greenkount++;
                }
                q.push(v);
            }
        }
    }

    return max(redkount, greenkount);
}

int main(){

    ll test, kase = 0;
    scanf("%lld", &test);

    while(test--){

        ll n, u, v;

        scanf("%lld", &n);

        ll lim = 200005;

        for(int i = 0; i < lim; i++){
            color[i] = WHITE;
            adj_list[i].clear();
            node[i] = false;
        }

        while(n--){
            scanf("%lld %lld", &u, &v);
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
            node[u] = true;
            node[v] = true;
        }

        ll ans = 0;

        for(int i = 1; i < lim; i++){
            if(color[i] == WHITE && node[i] == true){
                ans += maxcolor(i);
            }
        }

        printf("Case %lld: %lld\n", ++kase, ans);

    } 
}

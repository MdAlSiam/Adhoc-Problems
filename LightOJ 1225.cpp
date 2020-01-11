#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    int test, test_index, i, j, length, half_length;
    char x[21];
    scanf("%d", &test);
    bool palindrome;
    for(test_index = 1; test_index <= test; test_index++){
        scanf("%s", &x);
        length = strlen(x);
        half_length = length / 2;
        palindrome = true;
        for(i = 0, j = length - 1; i < half_length; i++, j--){
            if(x[i] != x[j]){
                palindrome = false;
                break;
            }
        }
        if(palindrome == true) printf("Case %d: Yes\n", test_index);
        else printf("Case %d: No\n", test_index);
    }
    return 0;
}

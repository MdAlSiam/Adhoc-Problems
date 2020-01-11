#include <stdio.h>

int main(){
    int test, total, pc1, pc2;
    scanf("%d", &test);
    while(test--){
        scanf("%d", &total);
        pc1 = total/2;
        pc2 = total - pc1;
        printf("%d %d\n", pc1, pc2);
    }
}

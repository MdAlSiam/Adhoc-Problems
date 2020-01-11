#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    char word[101];

    while(n--){
        scanf(" %[^\n]",word);
        int p=strlen(word);
        if(p<=10) printf("%s\n",word);
        else printf("%c%d%c\n",word[0],p-2,word[p-1]);
    }
return 0;
}

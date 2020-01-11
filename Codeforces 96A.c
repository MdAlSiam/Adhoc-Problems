#include<stdio.h>
#include<string.h>

int main(){
    int length, count0=0,count1=0,i;
    char position[101];

    scanf(" %[^\n]",position);
    length=strlen(position);

    for(i=0;i<length;i++){
        if(position[i] == '0') count0++;
        if(count0 ==7) {
                break;
        }
        if(position[i] == '1') count0=0;
    }

    for(i=0;i<length;i++){
        if(position[i] == '1') count1++;
        if(count1 ==7) {
                break;
        }
        if(position[i] == '0') count1=0;
    }

    if(count0 >= 7 || count1 >=7) printf("YES\n");
    else printf("NO\n");
return 0;
}

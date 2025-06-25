#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int a,b,c;
    for(int i = 0; i < t; i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a+b == c){
            printf("YES\n");
        }
        else if(a+c == b){
            printf("YES\n");
        }
        else if(c+b == a){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}

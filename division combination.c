#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    int n;
    for(int i = 0; i < t; i++){
        scanf("%d",&n);
        if(n == 1 || n == 2){
            printf("0\n");
        }
        else{
            int rslt = (n-1)- (n / 2);
            printf("%d\n",rslt);
        }
    }
}

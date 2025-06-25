#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    int p,q;
    for(int i = 1; i <= n; i++){
        scanf("%d%d",&p,&q);
        if((q - p) >= 2)
            count++;
    }
    printf("%d",count);
}

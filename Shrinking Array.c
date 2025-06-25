#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    int n;
    for(int i = 0; i < t; i++){
        scanf("%d",&n);
        int a[n];
        for(int j = 0; j < n ;j++){
            scanf("%d",&a[j]);
        }
        int count = 0;
        for(int j = 0; j < n-1; j++){
            if(abs(a[j]-a[j+1]) <= 1){
                printf("0\n");
                count = 1;
                break;
            }
        }
        if(count == 0){
            int asc = n;
            int disc = n;
            for(int j = 0; j < n-1; j++){
                if(a[j] > a[j+1])
                    asc--;
                else if(a[j] < a[j+1])
                    disc--;
            }
            if(asc == n || disc == n)
                printf("-1\n");
            else
                printf("1\n");
        }
    }
}

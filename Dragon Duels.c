#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int s,n;
    scanf("%d%d",&s,&n);
    int xy[2*n];
    for(int i = 0; i < 2*n; i++){
        scanf("%d",&xy[i]);
    }
    int min,min_y = xy[1],idx;
    for(int i = 0; i < 2*n-2; i+=2){
        min = xy[i];
        idx = i;
        for(int j = i + 2; j < 2*n; j+=2){
            if(min > xy [j]){
                min = xy[j];
                idx = j;
            }
        }
        min_y = xy[idx+1];
        xy[idx] = xy[i];
        xy[idx+1] = xy[i+1];
        xy[i] = min;
        xy[i+1] = min_y;
    }
    for(int i = 0; i < 2*n ; i+=2){
        if(s > xy[i]){
            s += xy[i+1];
        }
        else{
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}

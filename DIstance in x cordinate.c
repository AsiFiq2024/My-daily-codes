#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int a[3];
    for(int i = 0; i < 3; i++){
        scanf("%d",&a[i]);
    }
    int min,idx;
    for(int i = 0; i < 2; i++){
        min = a[i];
        idx = i;
        for(int j = i + 1; j < 3; j++){
            if(min > a[j]){
                idx = j;
                min = a[j];
            }
        }
        a[idx] = a[i];
        a[i] = min;
    }
    int reslt = a[2] - a[0];
    printf("%d\n",reslt);
}

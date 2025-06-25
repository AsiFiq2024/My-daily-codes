#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int x,y;
    scanf("%d",&x);
    int a[x];
    for(int i = 0; i < x; i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&y);
    int b[y];
    for(int i = 0; i < y; i++){
        scanf("%d",&b[i]);
    }
    int ab[x+y];
    for(int i = 0; i < x+y; i++){
        if(i < x)
            ab[i] = a[i];
        else
            ab[i] = b[i-x];
    }
    int idx = x+y;
    for(int i = 0; i < idx-1; i++){
        for(int j = i+1; j < idx; j++){
            if(ab[i] == ab[j]){
                for(int l = j; l < idx-1; l++){
                    ab[l] = ab[l+1];
                }
                j--;
                idx--;
            }
        }
    }
    if(idx == n)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
}

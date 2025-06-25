#include <stdio.h>

int ten_pow(int a){
    int rslt = 1;
    for(int i = 0; i < a; i++){
        rslt = rslt*10;
    }
    return rslt;
}

int main(){
    int n;
    scanf("%d",&n);
    int l;
    for(int i = 0; i < n; i++){
        scanf("%d",&l);
        int count = 0;
        int a[5];
        int r;
        for(int j = 0; l > 0; j++){
            r = (l % 10)*ten_pow(j);
            l /= 10;
            if(r > 0){
                a[count] = r;
                count++;
            }
        }
        printf("%d\n",count);
        for(int d = 0; d < count; d++){
            printf("%d ",a[d]);
        }
        printf("\n");
    }
}

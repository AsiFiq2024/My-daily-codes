#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int l = 2*n;
    int a[l];
    int count = 0;
    for(int i = 0; i < l; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 1; i <= l ; i+=2){
        for(int j = 0; j < l ; j+=2){
            if(a[i] == a[j])
                count++;
        }
    }
    printf("%d\n",count);
}

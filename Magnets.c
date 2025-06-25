#include <stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    int m;
    int f;
    int count = 1;
    for(long long i = 0; i < n; i++){
        scanf("%d",&m);
        if(i == 0)
            f = m;
        else{
            if(f != m){
                count++;
                f = m;
            }
        }
    }
    printf("%d",count);
}

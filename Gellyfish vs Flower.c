#include <stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long a,b,c,d;
    long long k;
    for(long long i = 0; i < n; i++){
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        k = 1;
        while(1){
            if(k%2 == 0 && d > 0){
                a--;
                c--;
            }
            else if(k%2 != 0 && c>0){
                b--;
                d--;
            }
            if(a <= 0){
                printf("Flower\n");
                break;
            }
            else if(b <= 0){
                printf("Gellyfish\n");
                break;
            }
            k++;
        }
    }
}

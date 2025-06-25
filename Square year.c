#include <stdio.h>
#include <math.h>

int main(){
    long long n;
    scanf("%lld",&n);
    int count;
    float y;
    int root_y;
    for(long long i = 0; i < n; i++){
        scanf("%f",&y);
        root_y = sqrt(y);
        if(root_y*root_y == y){
            if(root_y == 0)
                printf("0 0\n");
            else if(root_y == 1)
                printf("0 1\n");
            else if(root_y*root_y == y){
                printf("%d %d\n",2,root_y-2);
            }
        }
        else
            printf("-1\n");
    }
}

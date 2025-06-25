#include <stdio.h>
#include <string.h>

int main(){
    int a,m,n;
    printf("a=");
    scanf("%d",&a);
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    int no_tile = (m*n)/(a*a);
    if(m*n == no_tile*a*a){
        printf("%d",no_tile);
    }
    else{
        printf("Cannot be covered");
    }
    return 0;
}

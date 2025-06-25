#include <stdio.h>
#include <math.h>

int main(){
    double d1,a,v,d2;
    printf("d1=");
    scanf("%lf",&d1);
    printf("a=");
    scanf("%lf",&a);
    printf("v=");
    scanf("%lf",&v);
    printf("d2=");
    scanf("%lf",&d2);
    double t1,t2;
    double t =  sqrt((2*d2/a));
    if((4*v*v-8*a*d1)>=0){
        t1 = (2*v + sqrt(4*v*v-8*a*d1))/(2*a);
        t2 = (2*v - sqrt(4*v*v-8*a*d1))/(2*a);
        if((t1 > t && t2 > t)|| (t2<0 && t1<0)){
            printf("safe");
        }
        else{
            printf("Caught");
        }
    }
    else{
        printf("safe");
    }
    return 0;
}

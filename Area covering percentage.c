#include <stdio.h>
#include <math.h>

int main(){
    double x1,x2,y1,y2,a1,a2;
    printf("Enter x1,y1,a1: ");
    scanf("%lf%lf%lf",&x1,&y1,&a1);
    printf("Enter x2,y2,a2: ");
    scanf("%lf%lf%lf",&x2,&y2,&a2);
    double x_diff = abs(x1-x2);
    double y_diff = abs(y1-y2);
    double a,b;
    if(x_diff>a1){
        a =  0;
    }
    else if(x_diff>a1-a2){
        a = a1 - x_diff;
    }
    else{
        a = a2;
    }
    if(y_diff>a1){
        b =  0;
    }
    else if(y_diff>a1-a2){
        b = a1 - y_diff;
    }
    else{
        b = a2;
    }
    double percent = (a*b)*100/(a1*a1);
    printf("%0.1lf",percent);
}

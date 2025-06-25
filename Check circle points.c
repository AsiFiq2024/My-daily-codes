#include <stdio.h>

int main(){
    float x,y,r,h,k;
    printf("Enter the center: ");
    scanf("%f%f",&h,&k);
    printf("Enter radius: ");
    scanf("%f",&r);
    printf("Enter the points: ");
    scanf("%f%f",&x,&y);
    if((x-h)*(x-h)+(y-k)*(y-k)<=r*r){
        printf("Point is inside the circle");
    }
    else{
        printf("Point is outside the circle");
    }
    return 0;
}

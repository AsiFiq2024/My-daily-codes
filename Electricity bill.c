#include <stdio.h>

int main(){
    int unit;
    printf("Enter consumed unit: ");
    scanf("%d",&unit);
    int bill;
    if(unit <= 100){
        bill = unit*2;
    }
    else if(unit >100 && unit<=300){
        bill = 100*2 + (unit-100)*2.5;
    }
    else if(unit > 300 && unit <=500){
        bill = 100*2 + 200*2.5 + (unit-300)*5;
    }
    else{
        bill = 100*2 + 200*2.5 + 200*5 + (unit-500)*7;
    }
    printf("Bill: %d",bill);
    return 0;
}

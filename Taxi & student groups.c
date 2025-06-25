#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a;
    int ones = 0, twos = 0, threes = 0, fours = 0;
    for(int i = 0; i < n; i++){
        scanf("%d",&a);
        if(a == 1)
            ones++;
        else if(a == 2)
            twos++;
        else if(a == 3)
            threes++;
        else if(a == 4)
            fours++;
    }
    int count = fours;
    count += threes;
    if(ones >= threes)
        ones -= threes;
    else
        ones = 0;
    count += twos/2;
    if(twos%2 == 1){
        count++;
        if(ones >= 2)
            ones -= 2;
        else
            ones = 0;
    }
    if(ones > 0){
        count += (ones + 3)/4;
    }
    printf("%d",count);
}

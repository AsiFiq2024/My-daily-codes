#include <stdio.h>

int main(){
    int y;
    scanf("%d",&y);
    int a[4];
    for(int i = y+1;;i++){
        int temp = i;
        for(int l = 3; l >= 0 ; l--){
            a[l] = temp % 10;
            temp /= 10;
        }
        int checker = 0;
        for(int j = 0; j < 3; j++){
            for(int k = j+1; k < 4; k++){
                if(a[j] == a[k]){
                    checker++;
                }
            }
        }
        if(checker == 0){
            printf("%d",i);
            break;
        }
    }
}

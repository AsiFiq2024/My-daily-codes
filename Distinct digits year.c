#include <stdio.h>

int main(){
    int y1;
    scanf("%d",&y1);
    for(int i = y1;;i++){
        int temp = y1;
        int a[4];
        for(int i = 3; i>=0; i--){
            a[i] = temp % 10;
            temp /= 10;
        }
        int count = 0;
        for(int i = 0; i < 3; i++){
            for(int j = i+1; j < 4; j++){
                if(a[i]==a[j]){
                    break
                }
            }
        }
    }
}

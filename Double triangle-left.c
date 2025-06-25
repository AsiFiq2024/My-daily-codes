#include <stdio.h>

int main(){
    int row;
    scanf("%d",&row);
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= row;j++){
            if(j>i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    for(int i = 1; i <= row-1; i++){
        for(int j = 0; j <= row-1;j++){
            if(j<i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}

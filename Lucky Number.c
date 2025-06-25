#include <stdio.h>
#include <string.h>

int main(){
    char num[100];
    scanf("%100s",num);
    int l = 0;
    for(int i = 0; i < strlen(num); i++){
        if(num[i] == '4' || num[i] == '7'){
            l=l+1;
        }
    }
    if(l == 4 || l == 7){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}

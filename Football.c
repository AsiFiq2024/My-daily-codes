#include <stdio.h>
#include <string.h>

int main(){
    char a[101];
    scanf("%s",a);
    int n = strlen(a);
    int cnt0 = 0;
    int cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == '0'){
            cnt1 = 0;
            cnt0++;
            if(cnt0 > 6){
                printf("YES\n");
                return 0;
            }
        }
        else{
            cnt0 = 0;
            cnt1++;
            if(cnt1 > 6){
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}

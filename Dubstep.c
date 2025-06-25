#include <stdio.h>
#include <string.h>

int main(){
    char a[1001];
    scanf("%s",a);
    int n = strlen(a);
    int start = 1;
    int space_count = 0;
    for(int i = 0; i < n;){
        if(a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B'){
            if(start){
            }
            else{
                if(space_count == 0){
                    printf(" ");
                    space_count++;
                }
            }
            i = i + 3;
        }
        else{
            printf("%c",a[i]);
            start = 0;
            space_count = 0;
            i++;
        }
    }
}

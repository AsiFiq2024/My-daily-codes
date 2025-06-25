#include <stdio.h>
#include <string.h>

int main(){
    char a[101];
    scanf("%s",a);
    int n = strlen(a);
    for(int i = 0; i < n; i++){
        if(!(a[i]=='a'||a[i]=='A'||a[i]=='u'||a[i]=='U'||a[i]=='o'||a[i]=='O'||a[i]=='i'||a[i]=='I'||a[i]=='e'||a[i]=='E'||a[i]=='y'||a[i]=='Y')){
            if('A'<=a[i] && a[i]<='Z'){
                a[i] = a[i] + ('a'-'A');
            }
            printf(".%c",a[i]);
        }
    }
}

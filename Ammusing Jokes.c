#include <stdio.h>
#include <string.h>

int main(){
    char a[101],b[101],c[201];
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    int n1 = strlen(a);
    int n2 = strlen(b);
    int n3 = strlen(c);
    int count[26] = {0};
    for(int i = 0; i < n1; i++){
        count[a[i] - 'A']++;
    }
    for(int i = 0; i < n2; i++){
        count[b[i] - 'A']++;
    }
    for(int i = 0; i < n3; i++){
        count[c[i] - 'A']--;
    }
    for(int i = 0; i < 26; i++){
        if(count[i] != 0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}

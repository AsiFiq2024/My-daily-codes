#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    int n;
    for(int i = 0; i < t; i++){
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        int c[26] = {0};
        for(int j = 0; j < n; j++){
            c[a[j]-'a']++;
        }
        int f = 0;
        for(int l = 0; l < 26; l++){
            if(c[l] >= 3){
                f = 1;
                break;
            }
            if(c[l] == 2){
                char ch = l + 'a';
                if(ch != a[0] || ch != a[n-1]){
                    f = 1;
                    break;
                }
            }
        }
        if(f)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

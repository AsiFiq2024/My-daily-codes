#include <stdio.h>
#include <string.h>

int main(){
    char a[1001];
    fgets(a,sizeof(a),stdin);
    int n = strlen(a);
    if(a[n-1] == '\n'){
        a[n-1] = '\0';
        n--;
    }
    for(int i = 0; i < n; i++){
        if(a[i] == '{' || a[i] == '}' || a[i] == ',' || a[i] == ' '){
            for(int j = i; j < n -1; j++){
                a[j] = a[j+1];
            }
            i--;
            n--;
        }
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] == a[j]){
                for(int l = j; l < n-1; l++){
                    a[l] = a[l+1];
                }
                j--;
                n--;
            }
        }
    }
    printf("%d",n);
}

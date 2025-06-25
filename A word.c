#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char word[100];
    scanf("%100s",word);
    int low = 0;
    int up = 0;
    for(int i = 0; i < strlen(word); i++){
        if('A' <= word[i] && word[i] <= 'Z'){
            up++;
        }
        else{
            low++;
        }
    }
    if(up>low){
        for(int j = 0; j < strlen(word); j++){
            if('a'<=word[j] && 'z'>=word[j]){
                word[j] = word[j] - 32;
            }
        }
    }
    else{
        for(int k = 0; k < strlen(word); k++){
            if('A'<=word[k] && 'Z'>=word[k]){
                word[k] = word[k] + 32;
            }
        }
    }
    for(int l = 0; l < strlen(word); l++){
        printf("%c",word[l]);
    }
    return 0;
}

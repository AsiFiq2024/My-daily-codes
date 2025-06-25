#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int f_n = 1,fct_k,co_fct;
    for(int i = 1; i <= n; i++){
        f_n = f_n*i;
    }
    int highest_k_fact = 1;
    for(int d = 1; d <= n/2 ; d++){
        highest_k_fact = highest_k_fact*d;
    }
    int h_comF = 1;
    for(int d = 1; d <= (n - (n/2)) ; d++){
        h_comF = h_comF*d;
    }
    int highest_term = f_n / (highest_k_fact*h_comF);
    for(int k = 0; k <= n; k++){
        fct_k = 1;
        for(int l = 1; l <= k ; l++){
            fct_k = fct_k*l;
        }
        co_fct = 1;
        for(int j = 1; j <= (n-k) ; j++){
            co_fct = co_fct*j;
        }
        int coeff = f_n / (co_fct*fct_k);
        for(int r = 1; r <= highest_term; r++){
            if(r <= highest_term - coeff){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}

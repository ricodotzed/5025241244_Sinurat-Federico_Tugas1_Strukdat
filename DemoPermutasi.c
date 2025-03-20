#include <stdio.h>

int i[200];  
int ii = 0;  
int n;   
int j;   

void permutasi();

int main() {
    scanf("%d", &n);  
    permutasi();
}

void permutasi() {
    if (ii == n) { 
        for (j = 0; j < n; j++) {
            printf("%d ", i[j]); 
        }
        printf("\n");
        return;
    }

    for (i[ii] = 1; i[ii] <= n; i[ii]++) {
        ii++;            
        permutasi();    
        ii--;}
}
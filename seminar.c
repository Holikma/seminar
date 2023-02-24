#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define l 4
#define k 4


void prienik(int a[l], int b[k]){
    for (int i = 0; i < l; i++){
        for (int j = 0; j < k; j++){
            if (a[i] == b[j]){
                printf("%d ", a[i]);
            }
        }
    }
}

int main(){
    int x[l] = {1,2,3,4};
    int y[k] = {-1, 3, 5, 7};
    prienik(x,y);
    zjednotenie(x,y);
}
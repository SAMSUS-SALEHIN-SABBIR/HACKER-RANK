#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N; 
    while(scanf("%d",&N)==1){
        if(N%2==0){
            if(N>=2 && N<=5){
            printf("Not Weird\n");
        }
        else if(N>=6 && N<=20){
             printf("Weird\n");
        }
        else if(N>20){
            printf("Not Weird\n");
        }
        }
        else{
        printf("Weird\n");
    }
    }
        
    
    return 0;
}

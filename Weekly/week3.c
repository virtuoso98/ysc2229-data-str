#include <stdio.h>

int add(int a, int b){
    return a + b;
}

float div(float a, float b){
    return a / b;
}


int funct (int *a){
    /* 
    *a -> content of a
    */
    *a = 9;
    return 0;
}

int main(){
    int n = 5;
    printf("old: %d\n", n);
    /*  
    & -> address in memory 
    *a -> pointer to variable a
    */
    funct(&n);
    printf("new: %d\n", n);
    
}
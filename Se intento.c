//Es funcional?
//factorial iterativa , int a
//recursiva
#include <stdio.h>

void facTail(n){
    
    
    if(n < 0){
        return 0;
    }
        
    else if (n = 0){
        return 1;
    }
        
    else if (n = 1){
        return 1;
    }
        
    else {
        return n*fact(n-1);
    }
        
}
    

    

int main(){
    int n;
    printf("Enter an number: ");
    scanf("%d", &n);
    //printf("Enter another number: ");
    //scanf("%d", &a);
    facTail(n);
    return 1;
}
    

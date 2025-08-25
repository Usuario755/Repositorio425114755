#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void facTail(n,a){
    
    
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

int main (int argc, char *argv[]){
    int i,n,a;
    char *num =argv[1];
    fprintf(stdout, "arg[1] = %s \n", argv[1]);
    
    for(i=0;i<strlen(argv[1]);i++)
        fprintf(stdout,"num[%d]=%c \n", i, num[i]);
    facTail(n,a);
    return 0;
}

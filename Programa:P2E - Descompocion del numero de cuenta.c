#include <stdio.h>

int main() {
	char nc []= {'4','2','5','1','1','4','7','5','5'};


	for(int j=0; j<9; j++) {
        if(nc[j]%2==0){
		    printf("[%c]", nc[j]);
		}
		if(j==5){
		    printf("[-1]");
		}
		
	}
	printf("\n");
	for(int i=8; i>-1; i--) {
		if(nc[i]%2==0){
		    printf("[%c]", nc[i]);
		}
		if(i==6){
		    printf("[-1]");
		
		}
		
	}
	return 0;
}


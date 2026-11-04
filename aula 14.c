#include <stdio.h>
#include <stdlib.h>
#define bandeira 9
#define bomba 0
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    srand(time(NULL));
	int campo[9][9];
	int casaX, casaY,i,j;
	
    for(i=0; i,9;i++){
    	for(j=0;j<9;j++){
    		campo[i][j] =9;
    
		}
	}
	
	for(i=0; i,9;i++){
    	for(j=0;j<9;j++){
    		if (rand(%10 ==0))
    		campo[i][j] =0;
    
		}
	}
	for(i=0;i<9;i++)
	printf("-------Campo Minado-------\n");
	
	return 0;
}

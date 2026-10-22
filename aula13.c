#include <stdio.h>
#include <stdlib.h>

/* palindromo */


int main(int argc, char *argv[]) {
 int i,j,tam,palindromo=1;
 char palavra[30];
 scanf("%s",palavra);
 printf("Inseridos %s",palavra);
 printf("\n");
 for( i=0 ; i<30 && palavra[i]!= '\0';i++);
 tam=i;
 for(j=i-1, i=0; i<j; i++,j--){
 	if(palavra[i] == palavra[j]) palindromo = 1;
	 else{
	 	palindromo =0;
	 	break;
	 }  
 	
	 
 }
 	
 if(palindromo==1) printf("\n E palindromo");
 else printf("\n Nao e palindromo");
 
 printf("\n o tamanho da minha palavra é %d", tam);
	
	return 0;
}

int main(int argc, char *argv[]) {
int a,b,c,r;

printf("Entre os valores para A B C : ");
scanf("%d %d %d",&a,&b,&c);
if(a>b){
	r= a;
}else{
	r= b;
}


if(r>c){
	r=r;
}
if(c>r){
	r=c;
}

printf("%d eh o maior", r);	
	

		
	
	
	
	
	
	
	
	return 0;
}

#include<stdio.h>
void main(){
	int n, r, cont;
	cont = 0;
	printf("Digite um número inteiro diferente de 1\n");
	scanf("%d", &n);
	do{
		cont = cont + 1;
		r = n % 2;
		if(r == 0){
			n = n / 2;
			printf("%d ", n);
		}else{
		n = (n * 3) + 1;
		printf("%d ", n);
		}
	}while(n != 1);
	printf("Seu número foi rebaixado a %d e levou %d contagens", n, cont);
	getch();
}
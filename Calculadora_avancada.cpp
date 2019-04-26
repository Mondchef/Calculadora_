#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>

float subtracao(float sub1, float sub2){
	float resultado;
	resultado = sub1 - sub2;
	return resultado;
}

main(){
	setlocale(LC_ALL,"portuguese");	
	int saida1;
	char saida[50];
	double log, a, base;
	float n1,n2,r;
	float x = 0;
	int cont = 0;
	char operador,zero[] ="0"; 
	while(x==0){
		n1=0;
		n2=0;
		printf("********************************************************************************\n");
		printf("****ATENÇÃO SE A OPERAÇÃO FOR INVÁLIDA O PROGRAMA IRÁ FECHAR AUTOMATICAMENTE****\n");
		printf("********************************************************************************");
		if(cont!=0){
			printf("\n\nO RESULTADO DA OPERAÇÃO ANTERIOR FOI: %.2lf\n", r);
		}
		printf("\n\nCALCULADORA\nComandos:\nSoma = '+'\nSubtração = '-'\nMultiplicação = '*' \nDivisão = '/'\nPorcentagem = '%%' \nExponencial = '^'\nLogaritmo = 'l'\nRaíz quadrada = 'v'");
		printf("\n\nDigite o primeiro número, a operação e logo depois o segundo número\n\n");	
		scanf("%f %c %f", &n1, &operador, &n2);
		switch(operador){
				case '-':
    			r = subtracao(n1,n2);
    			printf("\n%.2f", r);
    			break;
			
		}
	
			printf("\nSe deseja continuar na calculadora digite 0\nSe não qualquer número:\n");
    		fflush(stdin);
			gets(saida);
			if(strcmp(saida,zero)){
    			exit(1);
			}
			else{
    			system("cls");
    			cont++;
    		}
    	}
	}



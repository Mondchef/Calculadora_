#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>

float calcula_log(double base, double rlog){
	int a;
	double cont;
	for(cont=0, a=1; a<=rlog; cont++, a++){
		a *= base;
	}
	return cont;
	}
	
main(){
	setlocale(LC_ALL,"portuguese");	
	int saida1;
	char saida[50];
	double a, base;
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
			
				case 'l':
    				r = calcula_log(n1, n2);
    				printf("log(%.2lf)%.2lf = %.2lf", n1, n2, r);
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



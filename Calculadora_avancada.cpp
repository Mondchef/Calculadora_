#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>

float raiz(float r1, float r2){
	float resultado;
	resultado = pow(r1, 1/r2);
	return resultado;
}
float exponencial(float q1, float q2){
	float resultado;
	resultado = pow(q1,q2);
	return resultado;
}
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
		printf("****ATEN��O SE A OPERA��O FOR INV�LIDA O PROGRAMA IR� FECHAR AUTOMATICAMENTE****\n");
		printf("********************************************************************************");
		if(cont!=0){
			printf("\n\nO RESULTADO DA OPERA��O ANTERIOR FOI: %.2lf\n", r);
		}
		printf("\n\nCALCULADORA\nComandos:\nSoma = '+'\nSubtra��o = '-'\nMultiplica��o = '*' \nDivis�o = '/'\nPorcentagem = '%%' \nExponencial = '^'\nLogaritmo = 'l'\nRa�z quadrada = 'v'");
		printf("\n\nDigite o primeiro n�mero, a opera��o e logo depois o segundo n�mero\n\n");	
		scanf("%f %c %f", &n1, &operador, &n2);
		switch(operador){
			
				case 'v':
    				r = raiz(n1,n2);
    				printf("\n%.2f", r);
    				break;
    			case 'V':
    				r = raiz(n1,n2);
    				printf("\n%.2f", r);
    				break;
    			case 'l':
    				r = calcula_log(n1, n2);
    				printf("log(%.2lf)%.2lf = %.2lf", n1, n2, r);
    				break;
    				
    			case 'L':
    				r = calcula_log(n1, n2);
    				printf("log(%.2lf)%.2lf = %.2lf", n1, n2, r);
    				break;
    				
    			case '^':
    				r = exponencial(n1,n2);
    				printf("\n%.2f", r);
				case 'l':
    				r = calcula_log(n1, n2);
    				printf("log(%.2lf)%.2lf = %.2lf", n1, n2, r);
    				break;
				
		}
	
			printf("\nSe deseja continuar na calculadora digite 0\nSe n�o qualquer n�mero:\n");
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



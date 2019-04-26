#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>

float soma(float s1, float s2){
	float resultado;
	resultado = s1 + s2;
	return resultado;
}

float divisao(float d1, float d2){
	float resultado;
	resultado = d1 / d2;
	return resultado;
}

float subtracao(float sub1, float sub2){
	float resultado;
	resultado = sub1 - sub2;
	return resultado;
}

float multiplicacao(float m1, float m2){
	float resultado;
	resultado = m1 * m2;
	return resultado;
}

float porcentagem(float p1, float p2){
	float resultado;
	resultado = (p1 * p2)/100;
	return resultado;
}

float raizquadrada(float r1, float r2){
	float resultado;
	resultado = (r1);
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

float raizquadrada(float r1){
	float resultado;
	resultado = sqrt(r1);
	return resultado;
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
			
			case '+':
				r = soma(n1,n2);
				printf("\n%.2f", r);
				break;	
			case '-':
    			r = subtracao(n1,n2);
    			printf("\n%.2f", r);
    			break;
    		
    		case '*':
    			r = multiplicacao(n1,n2);
    			printf("\n%.2f", r);
    			break;
    			
			case '/':
  	 			if(n2==0){
  	 	 			printf("O resultado é indefinido");
				}
					else{
    				r = divisao(n1,n2);
    				printf("\n%.2f", r);
    				break;
    			}
    		
    		case '%':
    			r = porcentagem(n1,n2);
    			printf("\n%.2f", r);
    			break;
    		
    		case '^':
    			r = exponencial(n1,n2);
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
    		
	    	case 'v':
    			r = raizquadrada(n2);
    			r = r * n1;
    			printf("\n%.2f", r);
    			break;
    			
    		case 'V':
    			r = raizquadrada(n2);
    			r = r * n1;
    			printf("\n%.2f", r);
    			break;
    		
    		default:
    			printf("Operação não reconhecida");
    			exit(1);
    	}	
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
	



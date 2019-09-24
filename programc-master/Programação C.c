#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	setlocale(LC_ALL, "Portuguese");
int num = 0;
int num1 = 0;
	
do{
    printf("\n---------------------------"
	"\nOPÇÕES DO MENU\n"
	"\n0- Para sair\n"
    "1- Par ou impar\n"
	"2- Potência\n"
	"3- Raiz\n"
	"4- Ano bissexto\n"
	"5- Média ponderada com pesos diferentes 5\n"
	"6- Média de notas válidas\n"
	"7- Fatorial\n"
	"8- Número primo\n"
	"9- Fibonacci 9\n"
	"10- Hexadecimal 10\n"
	"11- Operações com strings\n");

    printf("\nEscolha uma opção: ");
    scanf("%d", &num);

switch(num){
	case 0:{
		system("cls");
    	printf("\nAdeus!\n");
    	break;
			}
	case 1:{
		int num1;
		
		system("cls");
	    printf("\nInforme um número: \n");
        scanf ("%d", &num1);		
    	
		if (num1 % 2 == 0){
                printf ("\nO número %d é par\n",num1);
        }else {
                printf("\nO número %d é impar\n",num1);}
        break;
			}
			
	case 2:{
		float num2a, pot2;
		int num2b;
		
		system("cls");
	    printf("\nDigite um número de ponto flutuante: \n");
	    scanf("%f", &num2a);
	    printf("Digite um número inteiro: \n");
	    scanf("%d", &num2b);
	    
		pot2 = pow(num2b,num2a);
	    
		printf("\nO resultado do número %f elevado a %d é: %e\n", num2a, num2b, pot2);
	    break;
			}

	case 3:{
		float num3a, pot3, raiz3;
		int num3b;
		
		system("cls");
	    printf("\nDigite um número de ponto flutuante: \n");
	    scanf("%f", &num3a);
	    printf("\nDigite um número inteiro: \n");
	    scanf("%d", &num3b);
	    
		pot3 = pow(num3b,num3a);
	    
		raiz3 = sqrt(pot3);
	    
		printf("\nO resultado é %e", raiz3);
	    break;
			}

	case 4:{
		int ano4;
		
		system("cls");
		printf("\nDigite o ano: \n");
		scanf("%d", &ano4);
		
		if (ano4 % 4 == 0 && (ano4 % 400 == 0 || ano4 % 100 != 0)) {
   			printf("\nO ano %d é bissexto\n"), ano4;}
		
		else {
    		printf("\nO ano %d não é bissexto\n", ano4);}
		break;	
			}
	
	case 5:{
		float num5a, num5b, num5c, media5;
		
		system("cls");
	    printf("\nDigite sua nota: \n");
	    scanf("%f",&num5a);
	    printf("\nDigite sua segunda nota: \n");
	    scanf("%f",&num5b);
	    printf("\nDigite sua terceira nota: \n");
	    scanf("%f",&num5c);
		media5 = ((num5a)/2 + (num5b)/2 + (num5c*2))/3;
		
		if(media5>60){
			printf("\nSua média foi: %.2f\nVocê foi aprovado\n", media5);
		}else{
			printf("\nSua média foi %.2f\nVocê foi reprovado\n", media5);}
		break;
			}
	
	case 6:{
		float num6a, num6b, media6;
		
	    system("cls");
	    printf("\nDigite sua nota: \n");
	    scanf("%f",&num6a);
	    printf("\nDigite sua segunda nota\n");
	    scanf("%f",&num6b);
	    media6=(num6a+num6b)/2;
	    
		if(num6a>0 && num6a<=10 && num6b>0 && num6b<=10){
			printf("As notas são válidas e a média das notas é: %.2f", media6);
	    }else{
			printf("As notas são inválidas");}
	    break;
			}
	
	case 7:{
	 	int fat, n;
	 	
	 	system("cls");
		printf("Insira um valor para o qual deseja calcular seu fatorial: ");
		scanf("%d", &n);
 
		for(fat = 1; n > 1; n = n - 1)
		fat = fat * n;
		
		printf("\nFatorial: %d", fat);
		break;
			}
			
	case 8:{   
	    int num8, i, resultado = 0;
 		system("cls");
 		printf("Digite um número: ");
 		scanf("%d", &num8);
 
 		for (i = 2; i <= num8 / 2; i++) {
    	if (num8 % i == 0) {
      		resultado++;
        	break;
   							}
										}	
 		if (resultado == 0){
    		printf("%d É um número primo\n", num8);
		}else{
    		printf("%d Não é um número primo\n", num8);
    	}
			break;
			  	
			}	

	case 9:{
	 	system("cls");
		int f1, f2;
		int i, n, aux;
		f1=0;
		f2=1;
		printf("\nNúmeros da sequência: ");
		scanf("%d", &n);
	
		printf("\nSequência fibonacci: ");
		printf("%d %d ", f1, f2);
	
		for(i=0; i < n; i++){
			aux = f1 + f2;
			f1 = f2;
			f2 = aux;
		
			printf("%d ", aux);
							}	
		break;					
			}

	case 10:{
		system("cls");
		char nome10[30] = "Rodolfo Mariano";
		int matricula10;
		
		printf("Nome: %s\n", nome10);
	    matricula10 = 1920027548;
	    printf("Matrícula: %X\n", matricula10);
	    break;
			}
	
	case 11:{
		system("cls");
		printf("\n---------------------------"
		"\nOPÇÕES DO MENU\n"
		"\n0- Para sair\n"
    	"1- Opção1\n"
		"2- Opção2\n"
		"3- Opção3\n"
		"4- Opção4\n"
		"5- Opção5\n"
		"6- Opção6\n"
		"7- Opção7\n"
		"8- Opção8\n"
		"9- Opção9\n"
		"10- Opção10\n");
		printf("\nEscolha uma opção: ");
    	scanf("%d", &num1);
	switch (num1){
		case 0:{
			system("cls");
			printf("Adeus!");
			break;
				}
	
		case 1:{
			printf("Aqui vai ser: ");
			break;
				}
				
			
				  }	
				
			  }	
		}
	}while(num!=0||num1!=0);
	
		    }

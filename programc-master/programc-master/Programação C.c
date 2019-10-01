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
	"9- Fibonacci\n"
	"10- Hexadecimal\n"
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
		system("cls");
	    int a2, b2 , i2 ,resul2=1;
  
    	printf("Informe um numero: ");
    	scanf("%d",&a2);
    	printf("Informe a potencia: ");
    	scanf("%d",&b2);
  
    	for(i2=0; i2<b2; i2++){
        resul2 *= a2;
      
        if(b2 == 0){
            resul2 = 1;
        			}
    						}		
  		printf("\n%d elevado a %d = %d\n", a2, b2, resul2);
		break;
}

	case 3:{
	system("cls");
	    int a3, b3 , i3 ,resul3=1, raiz3;
  
    	printf("Informe um numero: ");
    	scanf("%d",&a3);
    	printf("Informe a potencia: ");
    	scanf("%d",&b3);
  
    	for(i3=0; i3<b3; i3++){
        resul3 *= a3;
      
        if(b3 == 0){
            resul3 = 1;
            raiz3 = resul3/resul3;
        			}
    						}	
  		printf("\nO resultado da raiz quadrada é %d\n", raiz3);
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
    	"1- Contagem de caracteres\n"
		"2- Contagem de vogais\n"
		"3- Comparação de texto\n"
		"4- Entrada de texto e saída pra outra variável\n"
		"5- Concatenar textos\n");
		printf("\nEscolha uma opção: ");
    	scanf("%d", &num1);
	
	switch (num1){
		
		case 0:{
			system("cls");
			printf("Adeus!");
			break;
				}
	
		case 1:{
			system("cls");
			char texto1[100];
			printf("Digite um texto com 100 caracteres: ");
			scanf("%s", &texto1);
			int a1 = 0, i = 0;
		    for(i =0; i<sizeof(texto1) && texto1[i] != '\0'; i++){
		    	texto1[i];
		    	a1++;
			}
			printf("\nTotal de caracteres digitados: %d", a1);
			break;
				}
				
		case 2:{
			system("cls");
			char texto2[100];
			printf("Digite um texto com 100 caracteres: ");
			scanf("%d", &texto2);
			int vogais = 0, i = 0;
			
			for(i =0; i<sizeof(texto2) && texto2[i] != '\0'; i++){
				if(texto2[i] == 'a' || texto2[i] == 'e' || texto2[i] == 'i' || texto2[i] == 'o' || texto2[i] == 'u'){
				vogais++;	
																												}
				if(texto2[i] == 'A' || texto2[i] == 'E' || texto2[i] == 'I' || texto2[i] == 'O' || texto2[i] == 'U'){
				vogais++;
																												}
																	}
			printf("\nTotal de vogais digitadas no texto: %d", vogais);			
			break;	
				}
				
		case 3:{
			system("cls");	
			char texto3a[100];
			printf("\nDigite um texto com 100 caracteres: ");
			scanf("%s", &texto3a);
			char texto3b[100];
			printf("Digite um texto com 100 caracteres: ");
			scanf("%s", &texto3b);
			if(texto3a[1]==texto3b[1]){
			printf("\nOs textos digitados são iguais");
			}else{
			printf("Os textos digitados são diferentes");
			}
			break;
		}
		
		case 4:{
			char texto4a[100];
			char texto4b[100];
			printf("Digite um texto (máx. 100 caracteres): ");
			scanf("%s", &texto4a);
			int i = 0;
			for(i = 0; i<sizeof(texto4a) && texto4a[i] != '/0'; i++){
				texto4b[i] = texto4a[i];
			}
			printf("%s", texto4b);
			
			break;
		}
		case 5:{
			
			char str1[10] = "Penso";
			char str2[20] = ", logo existo";
			
			strncat(str1, str2, 30);
			
			printf("%s\n", str1);
			
			getch();
			system("pause");
			break;
				}
			
				  }	
				
			  }	
		}
	}while(num!=0||num1!=0);
	
		    }

#include <stdio.h>
#include <locale.h>
#define NTENTATIVAS 5

int main()
{
	setlocale(LC_ALL, "portuguese");
    //imprime o cabe�alho do nosso jogo.
    printf("\n******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
    printf("******************************************\n");

	
	for(int i = 1; i <= NTENTATIVAS; i++){ 
	    int numerosecreto = 42;
	    int chute;
	    printf("\nTentativa %d de %d", i, NTENTATIVAS);
	    printf("\nInforme seu chute: ");
	    
	    scanf("%d", &chute);
	    printf("Seu chute foi %d.\n", chute);
	    
	    int acertou = chute == numerosecreto;
	    int errouAcima = chute > numerosecreto;
	    int errouAbaixo = chute < numerosecreto;
	
	   
	    if(acertou){
	        printf("Parab�ns! Voc� acertou.\n");
	        printf("Jogue de novo, voc� � um bom jogador.\n");
	        break;
	    }
	    else {
	    	if (errouAbaixo){
	    		printf("Voc� errou! Seu chute foi menor que o n�mero secreto.\n");
			}
			if (errouAcima){
				printf("Voc� errou! Seu chute foi maior que o n�mero secreto.\n");
			}
	        
	        printf("N�o desanime, tente de novo.\n");
	    }
	    
	    
	
	
	}
	printf("\n*****  FIM DO JOGO  *****");
}

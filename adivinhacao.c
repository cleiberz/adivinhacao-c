#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "portuguese");
    //imprime o cabe�alho do nosso jogo.
    printf("\n******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinha��o *\n");
    printf("******************************************\n");

	
	int numerosecreto = 42;
	int chute;
	int tentativa = 0;
	int desistir = 0;
	int pontos = 1000;
	
	
	while (chute != numerosecreto){
		
	    printf("\nTentativa de n�mero %d", tentativa+1);
	    tentativa++;
	    printf("\nPara desistir digite 0 ou");
	    printf("\nInforme seu chute: ");
	    
	    scanf("%d", &chute);
	    
	    if (chute != 0){
		
	    printf("Seu chute foi %d.\n", chute);
	    }
	    
	    int acertou = chute == numerosecreto;
		//int errouAcima = chute > numerosecreto;
		int errouAbaixo = chute < numerosecreto;
		
		if (chute == 0){
			
			printf("Ap�s %d tentativa(s) voc� desistiu do jogo!", tentativa-1);
			break;
		}
	    
	    if (chute < 0 ){
	    	continue; //aqui ele vai voltar para o loop imediatamente.
		}

	   	int pontosFinal = 0;
	   	
	    if(acertou){
	    	
	        printf("Parab�ns! Voc� acertou em %d tentativa(s).\n", tentativa);
	        printf("Jogue de novo, voc� � um bom jogador.\n");
	        
	        break;
	    }
	    else if (errouAbaixo){
	    		printf("Voc� errou! Seu chute foi menor que o n�mero secreto.\n");
	    		pontosFinal = pontos - (numerosecreto - chute) / numerosecreto * 100;
			}
		else {
				printf("Voc� errou! Seu chute foi maior que o n�mero secreto.\n");
				pontosFinal = pontos - (chute - numerosecreto) / numerosecreto * 100;
			}
	        
	        printf("N�o desanime, tente de novo.\n");
	    
		pontos = pontos - (tentativa * 100);
	    	
	    if(tentativa == 10){
	    	printf("\nVoc� estourou o limite de tentativas\n");
	    	break;
		}
	
	}
		
	
	tentativa++;

		    
	
	
	printf("%d pontos", pontos);
	printf("\n*****  FIM DO JOGO  *****");
}

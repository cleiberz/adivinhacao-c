#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "portuguese");
    //imprime o cabeçalho do nosso jogo.
    printf("\n******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

	
	int numerosecreto = 42;
	int chute;
	int tentativa = 0;
	int desistir = 0;
	int pontos = 1000;
	
	
	while (chute != numerosecreto){
		
	    printf("\nTentativa de número %d", tentativa+1);
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
			
			printf("Após %d tentativa(s) você desistiu do jogo!", tentativa-1);
			break;
		}
	    
	    if (chute < 0 ){
	    	continue; //aqui ele vai voltar para o loop imediatamente.
		}

	   	int pontosFinal = 0;
	   	
	    if(acertou){
	    	
	        printf("Parabéns! Você acertou em %d tentativa(s).\n", tentativa);
	        printf("Jogue de novo, você é um bom jogador.\n");
	        
	        break;
	    }
	    else if (errouAbaixo){
	    		printf("Você errou! Seu chute foi menor que o número secreto.\n");
	    		pontosFinal = pontos - (numerosecreto - chute) / numerosecreto * 100;
			}
		else {
				printf("Você errou! Seu chute foi maior que o número secreto.\n");
				pontosFinal = pontos - (chute - numerosecreto) / numerosecreto * 100;
			}
	        
	        printf("Não desanime, tente de novo.\n");
	    
		pontos = pontos - (tentativa * 100);
	    	
	    if(tentativa == 10){
	    	printf("\nVocê estourou o limite de tentativas\n");
	    	break;
		}
	
	}
		
	
	tentativa++;

		    
	
	
	printf("%d pontos", pontos);
	printf("\n*****  FIM DO JOGO  *****");
}

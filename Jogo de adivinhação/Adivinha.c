#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero_minimo, numero_maximo, numero_secreto, palpite, tentativas=0;
	
	printf("\033[0;32mBem-vindo(a) ao jogo de adivinhação.\n");
	printf("Digite um intervalo de números\n");
	printf("Número mínimo: ");
	scanf("%d", &numero_minimo);
	printf("Número máximo: ");
	scanf("%d", &numero_maximo);

	// inicializa o gerador de números aleatórios
	srand(time(NULL)); 

	// gera um número aleatório entre o intervalo escolhido
	numero_secreto = rand() % (numero_maximo - numero_minimo + 1) + numero_minimo;

	printf("Bem-vindo ao jogo de adivinhação! Escolha um número entre %d e %d.\n", numero_minimo, numero_maximo); 

	do {
       printf("Digite seu palpite: ");
       scanf("%d", &palpite); 

       tentativas++; 

       if (palpite > numero_secreto) {
          printf("Seu palpite foi alto.\n");
          
       } else if (palpite < numero_secreto) {
          printf("Seu palpite foi baixo.\n");
          
       } else {
       	  printf("Parabéns, você acertou o número em %d tentativa(s)!\n", tentativas);
    } 

} 	
	while (palpite != numero_secreto); 

	return 0;

}
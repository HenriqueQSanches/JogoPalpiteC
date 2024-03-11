/******************************************************************************
Henrique Sanches - 02AM - ADS

Versão 3 do Jogo da Adivinhação - 07/03/2024 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int segredo, palpite;
    int tentativas = 5; // Número máximo de tentativas
    srand(time(NULL)); // Inicializa a semente de números aleatórios com base no tempo atual

    // Gerando um número aleatório entre 1 e 15
    segredo = rand() % 15 + 1;

    printf("Tente adivinhar o número entre 1 e 15:\n");
    
    for (int i = 0; i < tentativas; i++) {
        scanf("%d", &palpite);
        
        if (segredo == palpite) {
            printf("Acertou!\n");
            break; // Encerra o loop se o usuário acertar
        } else if (palpite < segredo) {
            printf("O número secreto é maior. Tente novamente.\n");
            printf("Tentativas restantes: %d\n", tentativas - i - 1);
        } else {
            printf("O número secreto é menor. Tente novamente.\n");
            printf("Tentativas restantes: %d\n", tentativas - i - 1);
        }
    }

    if (palpite != segredo) {
        printf("Suas tentativas acabaram. O número secreto era: %d\n", segredo);
    }

    return 0;
}

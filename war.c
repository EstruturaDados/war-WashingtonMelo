// =====================================================================
// Prática> Desafio Jogo War - Nível novato
// Objetivo: Criar uma struct chamada Territorio que armazenará informações como nome, cor do exército e quantidade 
// de tropas. O sistema permitirá o cadastro de 5 territórios e exibirá seus dados logo após o preenchimento. 
//=====================================================================

// Inclusão de bibliotecas necessárias
#include <stdio.h>
#include <string.h>

// Definição da struct e variáveis para representar um território
struct Territorio {
    char nome [30];
    char corExercito [10];
    int qtdTropas;
};

// Constante Global (Qtd total de territórios)
#define TOTAL_TERRITORIOS 5

// Função principal
int main () {
    struct Territorio territorios[TOTAL_TERRITORIOS];

    //Laço para cadastrar os territórios
    for (int i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("\nCadastro do território %d:\n", i + 1);
        printf("Digite o nome do território: ");
        fgets(territorios[i].nome, 30, stdin);

        printf("Digite a cor do exército: ");
        fgets(territorios[i].corExercito, 10, stdin);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].qtdTropas);
        getchar(); // Limpa o buffer de entrada
    }

    // Exibe os dados dos territórios cadastrados
    printf("\n--- Territórios Cadastrados ---\n");
    
    for (int i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("Território: %d\n", i + 1);
        printf("Nome: %s", territorios[i].nome);
        printf("Cor do Exército: %s", territorios[i].corExercito);
        printf("Quantidade de Tropas: %d\n", territorios[i].qtdTropas);
        printf("-----------------------------\n");
    }

    return 0; // Fim do programa
}
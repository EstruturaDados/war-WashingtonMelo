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
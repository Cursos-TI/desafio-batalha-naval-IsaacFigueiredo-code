#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    char colunas_tabuleiro [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas_tabuleiro [] =  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro [10] [10] = {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    int primeiro_navio [] = {3,3,3};
    int segundo_navio [] = {3,3,3};
    int terceiro_navio [] = {3,3,3};
    int quarto_navio [] = {3,3,3};

    printf ("      BATALHA NAVAL\n");

    printf ("  ");
    for (int c = 0; c < 10; c++){
        printf (" %c", colunas_tabuleiro[c]);
    }

    for (int i = 2, j = 0; i < 5; i++, j++){
        tabuleiro[5][i] = primeiro_navio[j];
    }

    for (int i = 7, j = 0; i < 10; i++, j++){
        tabuleiro[i][2] = segundo_navio[j];
    }

    for (int i = 2, j = 0, k = 0; i < 5 && j < 3; i++, j++, k++){
        tabuleiro[i][j] = terceiro_navio[k];
    }

    for (int i = 0, j = 9, k = 0; i < 3 && j > 6; i++, j--, k++){
        tabuleiro[i][j] = quarto_navio[k];
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (j == 0){
                printf("\n");
                if (i < 9){
                    printf ("%i ", linhas_tabuleiro[i]);
                } else {
                    printf ("%i", linhas_tabuleiro[i]);
                }
            }
            printf (" %i", tabuleiro[i][j]);
        }
    }


    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}

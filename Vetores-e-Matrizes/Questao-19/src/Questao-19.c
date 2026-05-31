// Crie uma matriz 2x2, leia os valores e exiba a soma de todos os elementos.

//---------------------------------------------------------------------------------//

#include <stdio.h> // Biblioteca para usar printf() e scanf()

int main() { // Início da função principal

    int matriz[2][2]; // Cria uma matriz de 2 linhas e 2 colunas
    int i, j; // Variáveis para percorrer linhas e colunas
    int soma = 0; // Armazena a soma de todos os elementos da matriz

    printf("=== Soma dos Elementos da Matriz ===\n\n"); // Título do programa

    for (i = 0; i < 2; i++) { // Percorre as linhas da matriz

        for (j = 0; j < 2; j++) { // Percorre as colunas da matriz

            printf("Digite o valor da posicao [%d][%d]: ", i, j); // Solicita um valor

            scanf("%d", &matriz[i][j]); // Armazena o valor na posição [i][j]

            soma = soma + matriz[i][j]; // Adiciona o valor digitado à soma total

        } // Fim do for das colunas

    } // Fim do for das linhas

    printf("\nA soma de todos os elementos e: %d\n", soma); // Exibe a soma final

    return 0; // Encerra o programa sem erros

} // Fim da função main

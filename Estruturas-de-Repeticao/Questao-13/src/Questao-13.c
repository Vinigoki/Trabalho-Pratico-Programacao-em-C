// Utilize o comando for para exibir os números de 1 até 10.

//-------------------------------------------------------------------//

#include <stdio.h> // Biblioteca para entrada e saída de dados

int main() {

    int nivel; // Variável que será usada pelo laço for

    printf("=== Carregando Niveis do Jogo ===\n\n"); // Título do programa

    // O laço for começa em 1, continua enquanto nivel for menor ou igual a 10
    // e incrementa 1 a cada repetição.
    for (nivel = 1; nivel <= 10; nivel++) {

        printf("Nivel %d desbloqueado!\n", nivel); // Exibe o nível atual

    }

    return 0; // Encerra o programa
}

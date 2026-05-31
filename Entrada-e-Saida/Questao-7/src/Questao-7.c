// Crie um programa que leia um número inteiro e exiba:
//antecessor;
//sucessor;

//-------------------------------------------------------------------//
#include <stdio.h>

int main() {

    // Declara uma variável inteira chamada "sala".
    // Ela será usada para armazenar o número digitado pelo usuário.
    int sala;

    // Exibe uma mensagem na tela pedindo um número.
    printf("=== Sistema de Localizacao de Salas ===\n");

    // Solicita ao usuário que informe o número da sala.
    printf("Digite o numero de uma sala: ");

    // Lê o valor digitado e o armazena na variável "sala".
    scanf("%d", &sala);

    // Mostra o número informado pelo usuário.
    printf("\nSala atual: %d\n", sala);

    // Calcula e exibe o antecessor.
    // O antecessor é o número que vem imediatamente antes.
    // Exemplo: se sala = 25, então 25 - 1 = 24.
    printf("Sala anterior: %d\n", sala - 1);

    // Calcula e exibe o sucessor.
    // O sucessor é o número que vem imediatamente depois.
    // Exemplo: se sala = 25, então 25 + 1 = 26.
    printf("Proxima sala: %d\n", sala + 1);

    // Retorna 0 indicando que o programa terminou corretamente.
    return 0;
}

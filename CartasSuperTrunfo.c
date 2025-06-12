#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char Estado1[50];
    char Estado2[50];

       
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("BEM-VINDO AO SUPER TRUNFO PAÍSES\n");

    printf("INSIRA NOME DO ESTADO 1:\n");
    scanf("%10s", Estado1);

    printf("INSIRA NOME DO ESTADO 2:\n");
    scanf("%10s", Estado2);

    printf("ESTADO 1\n");
    printf("%s\n", &Estado1);

    printf("ESTADO 2\n");
    printf("%s\n", &Estado2);

        
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

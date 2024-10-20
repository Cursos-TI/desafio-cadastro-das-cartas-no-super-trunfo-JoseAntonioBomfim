#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para verificar se é letra

int main () {

    char estado;
    char codigoCarta[3];
    char nomeCidade[30];
    int populacao;
    float areaKm;
    float pib;
    int pontosTuristicos;

    // Solicita a letra inicial do estado e o código da carta
    printf("Insira a Letra Inicial do Estado e o Código: ");
    scanf(" %c", &estado);
    scanf("%2s", codigoCarta); 

    // Solicita o nome da cidade
    printf("Insira Nome da Cidade: ");
    getchar();  // Consome o '\n' que pode ter ficado no buffer
    fgets(nomeCidade, sizeof(nomeCidade), stdin);  // Lê o nome da cidade com espaços

    // Remove o '\n' adicionado pelo fgets
    nomeCidade[strcspn(nomeCidade, "\n")] = 0;

    // Solicita a população
    printf("Insira População: ");
    scanf("%d", &populacao);  

    // Solicita a área em Km²
    printf("Insira Área em Km²: ");
    scanf("%f", &areaKm);  

    // Solicita o PIB
    printf("Insira o PIB: ");
    scanf("%f", &pib);  

    // Solicita a quantidade de pontos turísticos
    printf("Insira Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);  

    // Exibe as informações inseridas
    printf("\nEstado: %c\n", estado);
    printf("Código da carta: %c%s\n", estado, codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);  
    printf("População: %d Habitantes\n", populacao);
    printf("Área em Km²: %.2f Km²\n", areaKm);
    printf("PIB: R$ %.2f Bilhões de Reais\n", pib); 
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para verificar se é letra

// Variáveis globais para armazenar os dados
char estado;
char codigoCarta[3];
char nomeCidade[30];
double populacao;
double areaKm;
double pib;
int pontosTuristicos;
double densidadeDemografica;
double pibPercapita;

// Função para entrada de dados
void entradaDados() {
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
    scanf("%lf", &populacao);

    // Solicita a área em Km²
    printf("Insira Área em Km²: ");
    scanf("%lf", &areaKm);

    // Solicita o PIB
    printf("Insira o PIB em mil: ");
    scanf("%lf", &pib);

    // Solicita a quantidade de pontos turísticos
    printf("Insira Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

}

// Função para cálculo da densidade demográfica
double calculaDensidadeDemografica(double populacao, double areaKm) {
    
    return populacao / areaKm;
    
}

// Função para cálculo do PIB percapita
double calculoPibPercapita(double pib, double populacao) {
    
    return pib / populacao;
    
}

// Função para exibir dados
void exibirDados(char estado, char codigoCarta[], char nomeCidade[], double populacao, 
double areaKm, double pib, int pontosTuristicos, double densidadeDemografica, double pibPercapita) {
    printf("\nEstado: %c\n", estado);
    printf("Código da carta: %c%s\n", estado, codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %.2lf Habitantes\n", populacao);
    printf("Área em Km²: %.2lf Km²\n", areaKm);
    printf("PIB R$: %.2lf Bilhões de Reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Demográfica: %.2lf Habitantes/Km²\n", densidadeDemografica);
    printf("PIB Percapita: %.2lf PIB/Habitantes\n", pibPercapita);
}

int main() {
    // Entrada de dados
    entradaDados();

   // Calcula densidade demográfica e PIB percapita
    double densidadeDemografica = calculaDensidadeDemografica(populacao, areaKm);
    double pibPercapita = calculoPibPercapita(pib, populacao);


    // Exibe os dados
    exibirDados(estado, codigoCarta, nomeCidade, populacao, areaKm, pib, pontosTuristicos, densidadeDemografica, pibPercapita);

    return 0;
}
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
     // Variaveis para a Primeira Carta
    char estadoA[20];
    char codigoA[20];
    char nomeCidadeA[20];
    int populacaoA;
    float kmA;
    float pibA;
    int pontosTuriscticosA;
    

    // Variaveis para a segunda Carta
    char estadoB[20];
    char codigoB[20];
    char nomeCidadeB[20];
    int populacaoB;
    float kmB;
    float pibB;
    int PontosTuriscticosB;

    printf("VAMOS INSERIR OS DADOS DA PRIMEIRA CARTA:\n ");

    // Inserção de Dados na primeira Carta
    printf("Digite uma letra de A a H para representar a sua carta; Exemplo F: ");
    scanf("%s", estadoA, "\n");
    printf("Digite a letra do Estado mais um numero de 01 a 04. Exemplo F03: ");
    scanf("%s", codigoA, "\n");
    printf("Digite o nome da Cidade: ");
    scanf("%s", nomeCidadeA, "\n");
    printf("Digite o numero TOTAL de habitantes na cidade: ");
    scanf("%i", &populacaoA, "\n");
    printf("Digite a Area em KM2; Exemplo 1528.76: ");
    scanf("%f", &kmA, "\n");
    printf("Digite o PIB (Produto Interno Bruto) da cidade em Bilhoes; Exemplo 187.87: ");
    scanf("%f", &pibA, "\n");
    printf("Digite a quantidade de Pontos Turisticos a cidade possui: ");
    scanf("%i", &pontosTuriscticosA, "\n");

    // Leitura da Primeira Carta Inserida
    printf("\n\n Carta 1 \n");
    printf("Estado: %s \n", estadoA);
    printf("Código: %s \n", codigoA);
    printf("Nome da Cidade: %s \n", nomeCidadeA);
    printf("População: %i \n", populacaoA);
    printf("Área: %f Km2 \n", kmA);
    printf("PIB: %f Bilhões de Reais \n", pibA);
    printf("Numero de Pontos Turisticos: %i \n", pontosTuriscticosA);

    printf("\n\nVAMOS INSERIR OS DADOS DA SEGUNDA CARTA:\n ");

    // Inserção de Dados na segunda carta
    printf("Digite uma letra de A a H para representar a sua carta; Exemplo F: ");
    scanf("%s", estadoB, "\n");
    printf("Digite a letra do Estado mais um numero de 01 a 04. Exemplo F03: ");
    scanf("%s", codigoB, "\n");
    printf("Digite o nome da Cidade: ");
    scanf("%s", nomeCidadeB, "\n");
    printf("Digite o numero TOTAL de habitantes na cidade: ");
    scanf("%i", &populacaoB, "\n");
    printf("Digite a Area em KM2; Exemplo 1528.76: ");
    scanf("%f", &kmB, "\n");
    printf("Digite o PIB (Produto Interno Bruto) da cidade em Bilhoes; Exemplo 187.87: ");
    scanf("%f", &pibB, "\n");
    printf("Digite a quantidade de Pontos Turisticos a cidade possui: ");
    scanf("%i", &PontosTuriscticosB, "\n");

    // Leitura da Segunda Carta Inserida
    printf("\n\n Carta 2 \n");
    printf("Estado: %s \n", estadoB);
    printf("Código: %s \n", codigoB);
    printf("Nome da Cidade: %s \n", nomeCidadeB);
    printf("População: %i \n", populacaoB);
    printf("Área: %f Km2 \n", kmB);
    printf("PIB: %f Bilhões de Reais \n", pibB);
    printf("Numero de Pontos Turisticos: %i \n", PontosTuriscticosB);
    return 0;
}

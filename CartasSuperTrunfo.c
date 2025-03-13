#include <stdio.h>

int main(){

    // Variaveis para a Primeira Carta
    char estadoA[20];
    char codigoA[20];
    char nomeCidadeA[20];
    int populacaoA;
    float kmA;
    float pibA;
    int pontosTuriscticosA;
    float densidadePopulacionalA;
    float pibPerCapitaA;

    

    // Variaveis para a segunda Carta
    char estadoB[20];
    char codigoB[20];
    char nomeCidadeB[20];
    int populacaoB;
    float kmB;
    float pibB;
    int PontosTuriscticosB;
    float densidadePopulacionalB;
    float pibPerCapitaB;

    printf("VAMOS INSERIR OS DADOS DA PRIMEIRA CARTA:\n ");

    // Inserção de Dados na primeira Carta
    printf("Digite uma letra de A a H para representar a sua carta; Exemplo F: ");
    scanf("%s", estadoA);
    printf("\n Digite a letra do Estado mais um numero de 01 a 04. Exemplo F03: ");
    scanf("%s", codigoA);
    printf("\n Digite o nome da Cidade: ");
    scanf("%s", nomeCidadeA);
    printf("\n Digite o numero TOTAL de habitantes na cidade: ");
    scanf("%i", &populacaoA);
    printf("\nDigite a Area em KM2; Exemplo 1528.76: ");
    scanf("%f", &kmA);
    printf("\n Digite o PIB (Produto Interno Bruto) da cidade em Bilhoes; Exemplo 187.87: ");
    scanf("%f", &pibA);
    printf("\nDigite a quantidade de Pontos Turisticos a cidade possui: ");
    scanf("%i", &pontosTuriscticosA);

    // Calculo da Densidade e do PIB per Capita

    densidadePopulacionalA = (populacaoA / kmA);
    pibPerCapitaA = (pibA / populacaoA);

    // Leitura da Primeira Carta Inserida
    printf("\n\n\n Carta 1 \n");
    printf("Estado: %s \n", estadoA);
    printf("Código: %s \n", codigoA);
    printf("Nome da Cidade: %s \n", nomeCidadeA);
    printf("População: %i \n", populacaoA);
    printf("Área: %f Km2 \n", kmA);
    printf("PIB: %f Bilhões de Reais \n", pibA);
    printf("Numero de Pontos Turisticos: %i \n", pontosTuriscticosA);
    printf("Densidade Populacional: %f \n", densidadePopulacionalA);
    printf("PIB per Capita: %f \n", pibPerCapitaA);

    printf("VAMOS INSERIR OS DADOS DA SEGUNDA CARTA:\n ");

    // Inserção de Dados na segunda carta
    printf("Digite uma letra de A a H para representar a sua carta; Exemplo F: ");
    scanf("%s", estadoB);
    printf("\n Digite a letra do Estado mais um numero de 01 a 04. Exemplo F03: ");
    scanf("%s", codigoB);
    printf("\n Digite o nome da Cidade: ");
    scanf("%s", nomeCidadeB);
    printf("\n Digite o numero TOTAL de habitantes na cidade: ");
    scanf("%i", &populacaoB);
    printf("\n Digite a Area em KM2; Exemplo 1528.76: ");
    scanf("%f", &kmB);
    printf("\n Digite o PIB (Produto Interno Bruto) da cidade em Bilhoes; Exemplo 187.87: ");
    scanf("%f", &pibB);
    printf("\n Digite a quantidade de Pontos Turisticos a cidade possui: ");
    scanf("%i", &PontosTuriscticosB);

      // Calculo da Densidade e do PIB per Capita

    densidadePopulacionalB = (populacaoB / kmB);
    pibPerCapitaB = (pibB / populacaoB);

    // Leitura da Segunda Carta Inserida
    printf("\n\n\n Carta 2 \n");
    printf("Estado: %s \n", estadoB);
    printf("Código: %s \n", codigoB);
    printf("Nome da Cidade: %s \n", nomeCidadeB);
    printf("População: %i \n", populacaoB);
    printf("Área: %f Km2 \n", kmB);
    printf("PIB: %f Bilhões de Reais \n", pibB);
    printf("Numero de Pontos Turisticos: %i \n", PontosTuriscticosB);
    printf("Densidade Populacional: %f \n", densidadePopulacionalB);
    printf("PIB per Capita: %f \n", pibPerCapitaB);




}

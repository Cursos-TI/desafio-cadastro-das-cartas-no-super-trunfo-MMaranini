#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1, estado2;
    char cod1[20];
    char cod2[20];
    char nome1[20], nome2[20];
    unsigned int popu1, popu2;
    float area1, area2;
    float pib1, pib2;
    int npt1, npt2;
    float densidade1, densidade2;
    float pibperCap1, pibperCap2;
    float superPoder1, superPoder2;

    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoNpt;
    int resultadoDensidade;
    int resultadoPibperCap;
    int resultadoSuperpoder;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Recebendo dados das cartas
    printf("Carta 1 \n");
    printf("Digite a primeira letra do estado: ");
    scanf(" %c", &estado1);
    printf("Digite o código: ");
    scanf("%s", cod1);
    printf("Digite o nome do estado: ");
    scanf("%s", nome1);
    printf("Digite a população: ");
    scanf("%u", &popu1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npt1);

    printf("\nCarta 2\n");
    printf("Digite a primeira letra do estado: ");
    scanf(" %c", &estado2);
    printf("Digite o código: ");
    scanf("%s", cod2);
    printf("Digite o nome do estado: ");
    scanf("%s", nome2);
    printf("Digite a população: ");
    scanf("%u", &popu2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npt2);

    //Calculo PIB per Capita
    //(* 1e9) -> convertendo pib para reais
    pibperCap1 = (pib1 * 1e9) / popu1;
    pibperCap2 = (pib2 * 1e9) / popu2;

    //Calculo Densidade Populacional
    densidade1 = popu1 / area1;
    densidade2 = popu2 / area2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibindo resultados
    printf("\n---------Carta 1---------\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %c%s \n", estado1, cod1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %u \n", popu1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", npt1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pibperCap1);

    printf("\n---------Carta 2---------\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %c%s \n", estado2, cod2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %u \n", popu2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", npt2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibperCap2);

    //Calculo Super Poder
    superPoder1 = (float)(popu1 + area1 + pib1 + npt1 + pibperCap1) - densidade1;
    superPoder2 = (float)(popu2 + area2 + pib2 + npt2 + pibperCap2) - densidade2;

    //Comparação dos dados
    resultadoPopulacao = popu1 > popu2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoNpt = npt1 > npt2;
    resultadoDensidade = densidade1 < densidade2;
    resultadoPibperCap = pibperCap1 > pibperCap2;
    resultadoSuperpoder = superPoder1 > superPoder2;

    printf("Comparação de Cartas: \n");
    printf("População: Carta 1 venceu? (%d)\n", resultadoPopulacao);
    printf("Área: Carta 1 venceu? (%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu? (%d)\n", resultadoPib);
    printf("Pontos Turisticos: Carta 1 venceu? (%d)\n", resultadoNpt);
    printf("Densidade Populacional: Carta 2 venceu? (%d)\n", resultadoDensidade);
    printf("PIB per Capita: Carta 1 venceu? (%d)\n", resultadoPibperCap);
    printf("Super Poder: Carta 1 venceu? (%d)\n", resultadoSuperpoder);
    
    return 0;
}

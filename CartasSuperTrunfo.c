#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoCidade[20];
    char nomeCidade[20];
    double populacao, area;
    long long pib;
    int pontosTuristico;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo da Cidade: Ex: A01, B01.\n");
    scanf("%s", &codigoCidade);

    printf("Digite o nome da cidade:\n Não pode conter espaço no nome.\n Ex: Sao Paulo = Sao-Paulo\n");
    scanf("%s", &nomeCidade);

    printf("Qual é o indice populacional da Cidade?\n");
    scanf("%lf", &populacao);

    printf("Qual o tamanho da area geográfica da cidade(km²)?\n");
    scanf("%lf", &area);

    printf("Qual o valor do PIB da cidade?\n");
    scanf("%llu", &pib);

    printf("Quantos pontos turistico existe na cidade?\n");
    scanf("%d", &pontosTuristico);


    // Calculando a Densidade populacional, ou seja, iremos divivir a população pela area da cidade.
    double densidadePpulacional = populacao / area;
    double pibPerCapita = pib / populacao;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Codigo: %s\n", codigoCidade);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %.2lf\n", populacao);
    printf("Area(Km²): %.2lf\n", area);
    printf("PIB: %.2llu\n", pib);
    printf("Existe %d ponto(s) turisticos na cidade.\n", pontosTuristico);
    printf("Densidade Populacional em Km²: %.3f\n", densidadePpulacional);
    printf("PIB per Capita: %.3lf\n", pibPerCapita);

    return 0;
}

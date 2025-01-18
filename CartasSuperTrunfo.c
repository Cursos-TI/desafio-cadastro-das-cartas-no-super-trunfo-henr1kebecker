#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoCidade;
    char nomeCidade;
    float populacao;
    float area;
    float pib;
    int pontosTuristico;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o codigo da Cidade: Ex: A01, B01.\n");
    scanf("%s", &codigoCidade);

    printf("Digite o nome da cidade:\n Não pode conter espaço no nome.\n Ex: Sao Paulo = Sao-Paulo\n");
    scanf("%s", &nomeCidade);

    printf("Qual é o indice populacional da Cidade?\n");
    scanf("%f", &populacao);

    printf("Qual o tamanho da area geográfica da cidade(m2)?\n");
    scanf("%f", &area);

    printf("Qual o valor do PIB da cidade?\n");
    scanf("%f", &pib);

    printf("Quantos pontos turistico existe na cidade?\n");
    scanf("%d", &pontosTuristico);




    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Codigo: %s \n", codigoCidade);
    printf("Cidade: %s \n", nomeCidade);
    printf("População: %f", populacao);
    prinf("Area(m2): %f", area);
    printf("PIB: %f", pib);
    printf("Existe %d ponto(s) turisticos na cidade.", pontosTuristico);


    return 0;
}

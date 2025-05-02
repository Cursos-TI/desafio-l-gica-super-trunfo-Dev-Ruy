#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados da cidade
struct Cidade {
    char nome[50];
    char codigo[10];
    int populacao;
    float area;
    float pib;
};

int main() {
    struct Cidade cidade1, cidade2;

    // Cadastro da cidade 1
    printf("Cadastro da Cidade 1:\n");
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1.nome);
    printf("Digite o código da cidade: ");
    scanf(" %s", cidade1.codigo);
    printf("Digite a população: ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &cidade1.pib);

    // Cadastro da cidade 2
    printf("\nCadastro da Cidade 2:\n");
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2.nome);
    printf("Digite o código da cidade: ");
    scanf(" %s", cidade2.codigo);
    printf("Digite a população: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &cidade2.pib);

    printf("\nComparação das Cidades:\n");

    // Comparação da população
    if (cidade1.populacao > cidade2.populacao) {
        printf("%s tem maior população.\n", cidade1.nome);
    } else if (cidade2.populacao > cidade1.populacao) {
        printf("%s tem maior população.\n", cidade2.nome);
    } else {
        printf("Ambas as cidades têm a mesma população.\n");
    }

    // Comparação da área
    if (cidade1.area > cidade2.area) {
        printf("%s tem maior área.\n", cidade1.nome);
    } else if (cidade2.area > cidade1.area) {
        printf("%s tem maior área.\n", cidade2.nome);
    } else {
        printf("Ambas as cidades têm a mesma área.\n");
    }

    // Comparação do PIB
    if (cidade1.pib > cidade2.pib) {
        printf("%s tem maior PIB.\n", cidade1.nome);
    } else if (cidade2.pib > cidade1.pib) {
        printf("%s tem maior PIB.\n", cidade2.nome);
    } else {
        printf("Ambas as cidades têm o mesmo PIB.\n");
    }

    // Lógica para definir cidade vencedora (exemplo: quem vence mais atributos)
    int pontos1 = 0, pontos2 = 0;
    if (cidade1.populacao > cidade2.populacao) pontos1++;
    else if (cidade2.populacao > cidade1.populacao) pontos2++;

    if (cidade1.area > cidade2.area) pontos1++;
    else if (cidade2.area > cidade1.area) pontos2++;

    if (cidade1.pib > cidade2.pib) pontos1++;
    else if (cidade2.pib > cidade1.pib) pontos2++;

    printf("\nResultado Final:\n");
    if (pontos1 > pontos2) {
        printf("A cidade vencedora é: %s\n", cidade1.nome);
    } else if (pontos2 > pontos1) {
        printf("A cidade vencedora é: %s\n", cidade2.nome);
    } else {
        printf("Empate entre as duas cidades.\n");
    }

    return 0;
}

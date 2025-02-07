#include <stdio.h>
#include<string.h>

    // Criando as Variáveis

int main() {

    char codigo[3];
    char nome[20];
    int populacao;
    int turisticos;
    float area;
    float pib;
    char continuar;

    // Estrutura de Repetição

do{
    //Entrada e Saída de Dados

    printf("Digite o código da cidade(Ex: A01, H03): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    getchar();
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    
    //Exibição de Dados das Cartas

    printf("Código da Cidade: %s\n", codigo);
    printf("Nome da Cidade: %s\n",nome);
    printf("População: %d\n",populacao);
    printf("Área: %.2f\n",area);
    printf("PIB: %.2f\n", pib);

    printf("Deseja cadastrar outra carta? (s/n): \n");
    scanf(" %c", &continuar);

   //Condição para a Repetição

} while(continuar == 's' || continuar == 'S');

    //Fim do Cadastro

    printf("Cadastro encerrado.\n");
    return 0;
}

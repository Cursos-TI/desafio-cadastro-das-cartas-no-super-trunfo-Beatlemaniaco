#include <stdio.h>
#include <string.h>

    // Criando as Variáveis

int main() {

    char codigo[4];
    char estado[20];
    char cidade[20];
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

    printf("Digite o nome do estado: \n");
    getchar();
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0';

    printf("Digite o nome da cidade: \n");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    //Caculando Densidade Populacional e PIB per Capita

    float densidade_populacional = (float) populacao / area;
    float pib_per_capita = (float) pib / populacao;
   
    //Exibição de Dados das Cartas

    printf("Código da Cidade: %s\n", codigo);
    printf("Nome do Estado: %s\n",estado);
    printf("Nome da Cidade: %s\n",cidade);
    printf("População: %d\n",populacao);
    printf("Área: %.2f km²\n",area);
    printf("PIB: %.2f\n", pib);
    printf("Densidade Populacional: %.2f Habitantes por km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f por pessoa\n", pib_per_capita);

    printf("Deseja cadastrar outra carta? (s/n): \n");
    scanf(" %c", &continuar);

   //Condição para a Repetição

} while(continuar == 's' || continuar == 'S');

    //Fim do Cadastro

    printf("Cadastro encerrado.\n");
    return 0;
}

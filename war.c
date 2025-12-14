#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// Essa estrutura armazena informações sobre um território:
// - nome: até 30 caracteres
// - cor: até 10 caracteres (cor do exército)
// - tropas: número de tropas
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Declaração de um vetor de 5 elementos do tipo Territorio
    struct Territorio territorios[5];

    // Laço para cadastrar os 5 territórios
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do territorio %d:\n", i + 1);

        // Leitura do nome do território
        printf("Digite o nome do territorio: ");
        scanf("%s", territorios[i].nome); 
        // scanf("%s") lê até encontrar espaço. Para nomes compostos, poderia usar fgets.

        // Leitura da cor do exército
        printf("Digite a cor do exercito: ");
        scanf("%s", territorios[i].cor);

        // Leitura da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n"); // Linha em branco para separar cadastros
    }

    // Exibição dos dados cadastrados
    printf("=== Dados dos Territorios Cadastrados ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}
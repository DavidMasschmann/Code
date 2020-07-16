#include<stdio.h>
#include<string.h>

struct Dados {
    char nome[30];
    char marca[30];
    int quantestoque;
    int estoqueminimo;
    float preco;
};

int Incluir_peca(struct Dados pecas[100], int numpecas) {
    char resp;

    do {
        printf("Nome da peca: \n");
        fflush(stdin);
        gets(pecas[numpecas].nome);

        printf("Marca da peca: \n");
        gets(pecas[numpecas].marca);

        printf("Preco da peca: \n");
        scanf("%f", &pecas[numpecas].preco);

        printf("Quantidade em estoque: \n");
        fflush(stdin);
        scanf("%i", &pecas[numpecas].quantestoque);

        printf("Quantidade minima em estoque: \n");
        fflush(stdin);
        scanf("%i", &pecas[numpecas].estoqueminimo);

        numpecas++;

        printf("\nDeseja incluir outra peca (S/N)? ");
        fflush(stdin);
        scanf("%c", &resp);

    } while ((resp == 'S') || (resp == 's'));

    return (numpecas);
}

int Consultar_peca_por_nome(struct Dados pecas[100], int numpecas) {
    char nome2[30];
    int i;

    printf("Informe o nome de uma peca: ");
    fflush(stdin);
    gets(nome2);

    for (i = 0; i < numpecas; i++) {
        if (strcmp(nome2, pecas[numpecas].nome) == 0) {
            printf("Marca: %s\n", pecas[numpecas].marca);
            printf("Preco: %.2f\n", pecas[numpecas].preco);
            printf("Quantidade em estoque: %i\n", pecas[numpecas].quantestoque);
            printf("Quantidade minima em estoque: %i\n", pecas[numpecas].estoqueminimo);
            break;
        }
    }

    if (strcmp(nome2, pecas[numpecas].nome) != 0)
        printf("Peca nao encontrada.");
}

int Exibir_peca_estoque_baixo(struct Dados pecas[100], int numpecas) {
    int i;

    for (i = 0; i < numpecas; i++) {
        if (pecas[numpecas].quantestoque < pecas[numpecas].estoqueminimo) {
            printf("\nNome: %s", pecas[numpecas].nome);
            printf("\nQuantidade em estoque: %i", pecas[numpecas].quantestoque);
            printf("\nEstoque minimo: %i", pecas[numpecas].estoqueminimo);
        }
    }
}

int Vender_peca(struct Dados pecas[100], int numpecas) {
    int quantvenda, novoestoque, i;
    char nomevenda[20];

    printf("Nome da peca a ser vendida: \n");
    fflush(stdin);
    gets(nomevenda);
    printf("Quantidade da venda: \n");
    scanf("%i", &quantvenda);
    fflush(stdin);

    for (i = 0; i < numpecas; i++) {
        if (strcmp(nomevenda, pecas[numpecas].nome) == 0)
            novoestoque = pecas[numpecas].quantestoque - quantvenda;

        if (novoestoque < pecas[numpecas].estoqueminimo)
            printf("A peca %s ficou com um estoque de %i \nABAIXO DO MINIMO.\n", nomevenda, novoestoque);
    }

}

int main() {
    struct Dados pecas[100];
    int escolha, controle, x = 0;

    do {
        printf("\n========Controle de Estoque========");
        printf("\n1 - Incluir peca");
        printf("\n2 - Consultar peca por nome");
        printf("\n3 - Exibir pecas com o estoque baixo");
        printf("\n4 - Vender peca");
        printf("\n5 - Sair\n");
        scanf("%i", &escolha);
        switch (escolha) {
            case 1:
                controle = Incluir_peca(pecas, controle);
                break;

            case 2:
                Consultar_peca_por_nome(pecas, controle);
                break;

            case 3:
                Exibir_peca_estoque_baixo(pecas, controle);
                break;

            case 4:
                Vender_peca(pecas, controle);
                break;

            case 5:
                printf("\nPrograma encerrado.");
                x = 1;
                break;
        }
    } while (x == 0);
}
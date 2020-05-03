#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// ------------------------------------ Definições

#define SUCESSO 0
#define FALTA_DE_MEMORIA 1
#define LISTA_VAZIA 2

// ---------------------------------------------- Tipos de Dados

typedef int TDADOS;

typedef struct nodo {
    TDADOS dado;
    struct nodo *elo;
} TNODO;

typedef struct {
    TNODO *primeiro;
} TLISTA;

// ------------------------------------ Prototypes

void Cria_Lista (TLISTA *l);
int Inclui_Lista (TLISTA *l, TDADOS d);
int Remove_Primeiro(TLISTA *l);
int Conta_Elementos_Lista(TLISTA l);
int Remove_Ultimo(TLISTA *l);
void Imprime_Erro(int erro);
void Destroi_Lista(TLISTA *l);

// ------------------------------------ Programa Principal
int main() {
    TLISTA l;
    TDADOS d;
    int n,erro;

    Cria_Lista(&l);
    do {
        printf("Valor a inserir na lista: ");
        scanf("%d",&d); // zero para sair

        if (d != 0) {
            erro = Inclui_Lista(&l,d);

            if (erro) {
            Imprime_Erro(erro);
            break;
            }
        }
    } while (d != 0);

    n = Conta_Elementos_Lista(l);
    printf("Numero de Elementos: %d\n",n);
    Destroi_Lista(&l);
    getche();
}

// ------------------------------------ Cria_Lista

void Cria_Lista (TLISTA *l)
{
l->primeiro = NULL;
}

// ------------------------------------ Inclui_Lista

int Inclui_Lista (TLISTA *l, TDADOS d)
{
TNODO *p;

p = (TNODO *) malloc(sizeof(TNODO));
if (p == NULL)
return(FALTA_DE_MEMORIA);
else
{
if (l->primeiro == NULL)
{
l->primeiro = p;
p->dado = d;
p->elo = NULL;
}
else
{
p->dado = d;
p->elo = l->primeiro;
l->primeiro = p;
}
return(SUCESSO);
}
}

// ------------------------------------ Remove_Primeiro

int Remove_Primeiro(TLISTA *l)
{
TNODO *p;

if (l->primeiro == NULL)
return(LISTA_VAZIA);
else
{
p = l->primeiro;
l->primeiro = p->elo;
free(p);
return(SUCESSO);
}
}

// ------------------------------------ Conta_elementos

int Conta_Elementos_Lista(TLISTA l) {
    TNODO *p;
    int n = 0;

    if (l.primeiro == NULL)
        return(n);
    else {
        p = l.primeiro;
        while (p != NULL) {
            printf("%i\n", p->dado);
            n++;
            p = p->elo;
        }
    return(n);
    }
}

// ------------------------------------ Remove_Ultimo

int Remove_Ultimo(TLISTA *l)
{
TNODO *p,*q;

if (l->primeiro == NULL)
return(LISTA_VAZIA);
else
{
q = l->primeiro;
p = l->primeiro;
while (p->elo != NULL)
{
q = p;
p = p->elo;
}
if (l->primeiro == p)
l->primeiro = NULL;
else
q->elo = NULL;
free(p);
return(SUCESSO);
}
}

// ------------------------------------ Imprime_Erro

void Imprime_Erro(int erro)
{
switch (erro)
{
case FALTA_DE_MEMORIA: printf("ERRO: Falta de Memória\n");
break;
case LISTA_VAZIA: printf("ERRO: Lista Vazia\n");
break;
}
getchar();
}

// ------------------------------------------ Destroi_Lista

void Destroi_Lista(TLISTA *l)
{
TNODO *p;

if (l->primeiro != NULL)
{
p = l->primeiro;
while (p != NULL)
{
l->primeiro = p->elo;
free(p);
p = l->primeiro;
}
}
}

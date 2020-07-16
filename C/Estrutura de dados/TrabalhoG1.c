#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct alunos {
	int codigo;
	char nome[20];
	char email[20];
	char telefone[20];
	float g1;
	float g2;
};
typedef struct alunos nodo;

struct lista {
	int FinalList;
	nodo dados[MAX];
};
typedef struct lista Lista;

//Done 1
Lista* CriaLista(void) {
 	Lista* LT = (Lista*)malloc(sizeof(Lista));

 	if(LT != NULL) {
 	  printf("\nLista criada com sucesso!");
  	LT->FinalList = 0;
 	}

	return LT;
}

//Kinda 2
Lista* IncluirFinal(Lista* Ptl, nodo aluno) {
 	if (Ptl == NULL || Ptl->FinalList == MAX) {
		printf("\nLISTA JA CHEIA OU INEXISTENTE\n");
 	} else {
		Ptl->dados[Ptl->FinalList] = aluno;
		Ptl->FinalList++;
		printf("\nInclusao realizada com sucesso!");

		return Ptl;
 	}
}

//Kinda 3
Lista* IncluirInicio(Lista* Ptl, nodo aluno) {
	int i=0,j;

	if (Ptl == NULL || Ptl->FinalList == MAX)
  	printf("\nLISTA JA CHEIA OU INEXISTENTE\n");

	for(j = Ptl->FinalList; j >= i; j--)
		Ptl->dados[j] = Ptl->dados[j-1];

	Ptl->dados[0] = aluno;
	Ptl->FinalList++;
	printf("\nInclusao realizada com sucesso!");

	return Ptl;
}

//Kinda 4
Lista* IncluirAposNome(Lista* Ptl, nodo aluno, char nomeProcurado[MAX]) {
	if (Ptl == NULL || Ptl->FinalList == MAX)
		printf("\nLISTA JA CHEIA OU INEXISTENTE\n");

	for(int i = 0; i <= Ptl->FinalList; i++) {
		if(strcmp(Ptl->dados[i].nome, nomeProcurado) == 0) {
			for(int j = Ptl->FinalList; j >= i; j--) {
				Ptl->dados[j] = Ptl->dados[j-1];
				if(j == i + 1) {
					Ptl->dados[j]=aluno;
					break;
				}
			}
			break;
		}
	}

	Ptl->FinalList++;
	printf("\nInclusao realizada com sucesso!");
	return Ptl;
}

//Done 5
void PesquisarPorNome(Lista* Ptl, char nomeProcurado[MAX]) {
	for(int i = 0; i <= Ptl->FinalList; i++){
		if(strcmp(Ptl->dados[i].nome, nomeProcurado) == 0){
			printf("\nCodigo: %d",Ptl->dados[i].codigo);
			printf("\nNome: %s",Ptl->dados[i].nome);
			printf("\nEmail: %s",Ptl->dados[i].email);
			printf("\nTelefone: %s",Ptl->dados[i].telefone);
			printf("\nNota da G1: %.2f",Ptl->dados[i].g1);
			printf("\nNota da G2: %.2f",Ptl->dados[i].g2);
			printf("\n-----------------\n");
		}
	}
}

//Done 6 but have a bug that closes the program
Lista* RemoverInicio(Lista* Ptl) {
	if(Ptl != NULL) {
		for(int i = 0; i < Ptl->FinalList-1; i++){
			Ptl->dados[i] = Ptl->dados[i+1];
		}

		Ptl->FinalList--;
		printf("\nPrimeiro elemento removido com sucesso!");
	}
	return Ptl;
}

//Done 7
Lista* RemoverFim(Lista* Ptl) {
	if(Ptl != NULL) {
		Ptl->FinalList--;
		printf("\nUltimo elemento removido com sucesso!");
	}
	return Ptl;
}

//Done 8
Lista* RemovePorCodigo(Lista* Ptl, int codigoProcurado) {
	for(int i = 0; i <= Ptl->FinalList; i++) {
		if(codigoProcurado == Ptl->dados[i].codigo) {
			for(; i < Ptl->FinalList-1; i++) {
				Ptl->dados[i]=Ptl->dados[i+1];
				Ptl->FinalList--;
			}
		}
	}
	printf("Aluno de codigo %i foi excluido com sucesso.\n", codigoProcurado);
	return Ptl;
}

//Done 9
void MostraLista(Lista* Ptl) {
 	for(int i = 0; i < Ptl->FinalList; i++) {
  	printf("\nCodigo [%d]: %d", i+1, Ptl->dados[i].codigo);
  	printf("\nNome [%d]: %s", i+1, Ptl->dados[i].nome);
  	printf("\nE-mail [%d]: %s", i+1, Ptl->dados[i].email);
  	printf("\nTelefone [%d]: %s", i+1, Ptl->dados[i].telefone);
  	printf("\nNota da G1 [%d]: %.2f", i+1, Ptl->dados[i].g1);
  	printf("\nNota da G2 [%d]: %.2f\n", i+1, Ptl->dados[i].g2);
		printf("-----------------------\n");
 	}
}

//Done 10
void MostraListaMedia(Lista* Ptl) {
	for(int i = 0; i < Ptl->FinalList; i++) {
  	printf("\nCodigo [%d]: %d", i+1, Ptl->dados[i].codigo);
  	printf("\nNome [%d]: %s", i+1, Ptl->dados[i].nome);
  	printf("\nE-mail [%d]: %s", i+1, Ptl->dados[i].email);
  	printf("\nTelefone [%d]: %s", i+1, Ptl->dados[i].telefone);
  	printf("\nNota da G1 [%d]: %.2f", i+1, Ptl->dados[i].g1);
  	printf("\nNota da G2 [%d]: %.2f\n", i+1, Ptl->dados[i].g2);
		printf("Media: %.2f\n", (Ptl->dados[i].g1 + Ptl->dados[i].g2) / 2);
		printf("-----------------------\n");
	}
}

int main() {
	int op=0;
	int codigoProcurado;
	nodo alu;
 	Lista* Ptl;
 	char nomeProcurado[MAX];


	Ptl = CriaLista();
	printf("\nLISTA CRIADA\n");

	while(op !=11){
		printf("\n\tESCOLHA UMA OPCAO\n");
		printf("\n[1]CRIAR LISTA");
		printf("\n[2]INCLUIR NO FINAL");
 		printf("\n[3]INCLUIR NO INICIO");
		printf("\n[4]INCLUIR APOS UM NOME");
		printf("\n[5]CONSULTAR POR NOME");
		printf("\n[6]EXCLUIR DO INICIO");
		printf("\n[7]EXCLUIR DO FIM");
		printf("\n[8]EXCLUIR POR CODIGO");
		printf("\n[9]LISTAR TODOS OS REGISTROS");
		printf("\n[10]LISTAR COM MEDIAS FINAIS");
		printf("\n[11]SAIR");
		printf("\nOPCAO => ");
		scanf("%d", &op);
		system("cls");

  	switch(op) {
			case 1:
				Ptl = CriaLista();
				printf("\nLISTA CRIADA\n");
				break;

			case 2:
				printf("\nDIGITE OS DADOS DO ALUNO: ");
				printf("\nCODIGO: ");
				scanf("%d",&alu.codigo);
				fflush(stdin);

				printf("\nNOME: ");
				gets(alu.nome);

				printf("\nEMAIL: ");
				gets(alu.email);

				printf("\nTELEFONE: ");
				gets(alu.telefone);

				printf("\nNOTA DA G1: ");
				scanf("%f",&alu.g1);
				fflush(stdin);

				printf("\nNOTA DA G2: ");
	 			scanf("%f",&alu.g2);

	    	Ptl=IncluirFinal(Ptl, alu);
	    	break;

	  	case 3:
	  		printf("\nDIGITE OS DADOS DO ALUNO: ");
	    	printf("\nCODIGO: ");
	    	scanf("%d",&alu.codigo);
	    	fflush(stdin);
	    	printf("\nNOME: ");
	    	gets(alu.nome);
	    	printf("\nEMAIL: ");
	    	gets(alu.email);
	    	printf("\nTELEFONE: ");
	    	gets(alu.telefone);
	    	printf("\nNOTA DA G1: ");
	    	scanf("%f",&alu.g1);
	    	fflush(stdin);
	    	printf("\nNOTA DA G2: ");
	    	scanf("%f",&alu.g2);

	    	Ptl=IncluirInicio(Ptl, alu);
	    	break;

	    case 4:
				printf("\nINFORME O NOME QUE DESEJA PROCURAR: ");
				fflush(stdin);
				gets(nomeProcurado);

				printf("\nDIGITE OS DADOS DO ALUNO: ");
				printf("\nCODIGO: ");
				scanf("%d",&alu.codigo);
				fflush(stdin);

				printf("\nNOME: ");
				gets(alu.nome);

				printf("\nEMAIL: ");
				gets(alu.email);

				printf("\nTELEFONE: ");
				gets(alu.telefone);

				printf("\nNOTA DA G1: ");
				scanf("%f",&alu.g1);
				fflush(stdin);

				printf("\nNOTA DA G2: ");
				scanf("%f",&alu.g2);

				Ptl=IncluirAposNome(Ptl, alu, nomeProcurado);
				break;

			case 5:
				printf("\nINFORME O NOME QUE DESEJA PROCURAR: ");
				fflush(stdin);
				gets(nomeProcurado);
				PesquisarPorNome(Ptl, nomeProcurado);
				break;

	    case 6:
	    	RemoverInicio(Ptl);
	    	break;

			case 7:
				RemoverFim(Ptl);
				break;

			case 8:
				printf("Deseja apagar o aluno com qual codigo? \n");
				scanf("%i", &codigoProcurado);
				RemovePorCodigo(Ptl, codigoProcurado);
				break;

	   	case 9:
	    	printf("\nLISTA:\n");
	    	MostraLista(Ptl);
	    	break;

			case 10:
				MostraListaMedia(Ptl);
				break;

	   	case 11:
	    	printf("\nPROGRAMA FINALIZADO.");
	    	exit(0);

	   	default:
	    	printf("\nERRO // OPCAO INVALIDA // DIGITE NOVAMENTE UMA OPCAO VALIDA\n");
		}
	}
}

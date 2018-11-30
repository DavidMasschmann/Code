#include <stdio.h>
#include <conio.h>

int main()
{
	int voto, total1=0, total2=0, total3=0, total4=0, branco=0;
	char resp;
	do {
		printf("Qual o numero do seu candidato? \nCandidato numero 1 \nCandidato numero 2 \nCandidato numero 3 \nCandidato numero 4 \nVoto em branco 5 \nSe deseja parar com a votacao digite 0 \n");
		scanf("%d", &voto);
		if(voto==1){
			total1++;
		}
		if(voto==2){
			total2++;
		}
		if(voto==3){
			total3++;
		}
		if(voto==4){
			total4++;
		}
		if(voto==5){
			branco++;
    }
  } while(voto!=0);
	printf("\nO numero de votos do candidato 1 e:%d", total1);
	printf("\nO numero de votos do candidato 2 e:%d", total2);
	printf("\nO numero de votos do candidato 3 e:%d", total3);
	printf("\nO numero de votos do candidato 4 e:%d", total4);
	printf("\nO numero de votos em branco e:%d", branco);

	getche();
}

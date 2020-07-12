#include<stdio.h>
#include<stdlib.h>

int main(){
	
	struct ficha_de_aluno{
		char nome[50];
		char disciplina[30]; //Struct criada
		float nota_prova1;
		float nota_prova2;
	};
	
	struct ficha_de_aluno aluno; //vari�vel aluno do tipo struct
	
	printf("================Cadastro de aluno=================\n\n");
	
	printf("Nome do aluno....\n");
	fflush(stdin); //apaga o buffer do teclado
	
	fgets(aluno.nome, 40, stdin);//variavel,tamanho da string, entrada que no caso padr�o. No lugar de 40 tabb�m pode ser utilizado o sizeof
	                             //Este operador permite saber o n�mero de bytes ocupado por um determinado tipo de vari�vel. � muito usado na aloca��o din�mica de mem�ria.
                                 //Sintaxe:
                                 //sizeof(tipo);
	printf("Disciplina....\n");
	fflush(stdin);
	fgets(aluno.disciplina, 40, stdin);
	
	printf("Informe a primeira nota:");
	scanf("%f",&aluno.nota_prova1);
	
	printf("Informe a segunda nota:");
	scanf("%f",&aluno.nota_prova2);
	
	printf("===================Lendo os dados da struct======================\n");
	printf("Nome....................:%s\n",aluno.nome);
	printf("Disciplina..............:%s\n",aluno.disciplina);
	printf("Nota da prova 1.........:%.2f\n",aluno.nota_prova1);
	printf("Nota da prova 2.........:%.2f\n",aluno.nota_prova2);
	
	system("pause");
	
}

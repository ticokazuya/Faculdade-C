#include<stdio.h>
#include<stdlib.h>

typedf struct{ /*typedf O comando typedef � usado para criar �sin�nimo� ou um �alias� para tipos de dados existentes. Ent�o na pr�tica podemos dizer que estamos 
                 renomeando um tipo de dados.
                 A renomea��o de tipos facilita a organiza��o e o entendimento do c�digo. Sintax typedef <nome do tipo de dado> <novo nome>; */ 
	int matricula;
	float nota;
}tAluno;

int main(){
	
	tAluno a1; //a1 � uma struc do tipo aluno
	
	tAluno *ptrAluno = &a1;//*ptrAluno � um ponteiro do tipo tAluno que recebe o endere�o de a1;
	a1.matricula = 555;//atribuindo valores para os membros da struct
	a1.nota = 8.0;
	
	//exibindo dados
	printf("Matricula: %d nota: %.2f\n",a1.matricula, a1.nota);
	
	//Podemos atribuir ou acessar um valor usando o ponteiro (*ptrAluno)
	(*ptrAluno).nota = 8.5;
	
	//exibindo dados usando um ponteiro para struct
	printf("\nMatricula: %d nota: %.2f\n",(*ptrAluno).matricula, (*ptrAluno).nota);
	
	//ptrAluno-> substitui a nota��o (*ptrAluno). de forma mais intuitiva
	//atribuindo um novo valor para a nota usando ptrAluno->
	
	ptrAluo->nota = 9.0;
	
	//portanto (*ptrAluno).nota � o mesmo que usar ptrAluno->nota
	
	printf("\nMatricula: %d nota: %.2f\n", ptrAluno->matricula, ptrAluno->nota);
	
	system("pause");
	
}



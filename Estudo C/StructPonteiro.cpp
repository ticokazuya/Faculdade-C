#include<stdio.h>
#include<stdlib.h>

typedf struct{ /*typedf O comando typedef é usado para criar “sinônimo” ou um “alias” para tipos de dados existentes. Então na prática podemos dizer que estamos 
                 renomeando um tipo de dados.
                 A renomeação de tipos facilita a organização e o entendimento do código. Sintax typedef <nome do tipo de dado> <novo nome>; */ 
	int matricula;
	float nota;
}tAluno;

int main(){
	
	tAluno a1; //a1 é uma struc do tipo aluno
	
	tAluno *ptrAluno = &a1;//*ptrAluno é um ponteiro do tipo tAluno que recebe o endereço de a1;
	a1.matricula = 555;//atribuindo valores para os membros da struct
	a1.nota = 8.0;
	
	//exibindo dados
	printf("Matricula: %d nota: %.2f\n",a1.matricula, a1.nota);
	
	//Podemos atribuir ou acessar um valor usando o ponteiro (*ptrAluno)
	(*ptrAluno).nota = 8.5;
	
	//exibindo dados usando um ponteiro para struct
	printf("\nMatricula: %d nota: %.2f\n",(*ptrAluno).matricula, (*ptrAluno).nota);
	
	//ptrAluno-> substitui a notação (*ptrAluno). de forma mais intuitiva
	//atribuindo um novo valor para a nota usando ptrAluno->
	
	ptrAluo->nota = 9.0;
	
	//portanto (*ptrAluno).nota é o mesmo que usar ptrAluno->nota
	
	printf("\nMatricula: %d nota: %.2f\n", ptrAluno->matricula, ptrAluno->nota);
	
	system("pause");
	
}



//Criar um programa que preencha um vetor de 5 posi��es com n�meros inteiros (positivos ou negativos) informados pelo usu�rio (utilize um loop para requisitar os valores aos estudantes)

//Ap�s isso, utilizando um loop (for ou while) realizar a soma e a multiplica��o destes 5 n�meros. 

//OBS: n�o ser�o aceitos exerc�cios em que a soma � feita sem a utiliza��o do loop. 

//Exemplo de exerc�cio n�o aceito:

//soma = vet[0]+vet[1]+vet[2]+vet[3]+vet[4];

//Ap�s a soma e a multiplica��o serem feitas, duas mensagens dever�o ser emitidas:

//1) Deve-se informar o valor da soma e informar se a soma � positiva ou negativa.

//2) Deve-se informar o valor da multiplica��o e informar se a mesma � positiva ou negativa.



//Nas primeiras linhas do c�digo, inserir coment�rios para identificar o aluno e curso. Por exemplo:

//******************************************************

//Instituto Federal de S�o Paulo - Campus Sert�ozinho

//Disciplina......: M2LPBA

//Programa��o de Computadores e Dispositivos M�veis

//Aluno...........: Camila Maria de Oliveira Lima

//******************************************************


//O c�digo deve estar estar com cada uma de suas etapas comentadas. Por exemplo, antes de um loop. colocar algo parecido com://

// OBJETIVO.......: Este loop � utilizado para pedir que um usu�rio digite valores que ser�o armazenados em um vetor



//Veja na imagem abaixo um exemplo de como sua tela deve ficar. Fiquem � vontade para modificar o tipo de pergunta e o resultado final. Este foi apenas um exemplo para dar uma ideia para voc�s.//



#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int v[5], i=5, s=0, m=1;
	
	// Objetivo: Este loop solicita que o usu�rio digite um valor para cada uma das cinco posi��es no vetor
	for(i=0; i<5; i++)
	{
		
		printf("\n Informe um numero inteiro para a posicao %i=", i);
		scanf( "%i",&v[i]);
		
	//Objetivo: Atrav�s do Loop utilizado dever� ser realizado a soma dos mesmos, como a multiplicacao tambem.
		s=s+v[i];
		m=m*v[i];
			
	}
	
	//Objetivo: Informar o resultado da soma dos valores informados
		printf("\n O valor da soma eh =%i", s);
		
	//Objetivo: Condi��o utilizada para informar o resultado da soma se eh positiva ou negativa		
	if (s>0)
	{
		printf("\n O valor da soma eh positivo \n");
	}
	
	else 
	{
		printf("\n O valor da soma eh negativo \n");
	}
	
	//Objetivo: Informar o resultado da multiplicacao dos valores informados	
		printf("\n O valor da multiplicacao eh =%i", m);
	
	//Objetivo: Condi��o utilizada para informar o resultado da multiplicacao se eh positiva ou negativa	
	if (m>0)
	{
		printf("\n O valor da multiplicacao eh positivo \n");
	}
	
	else	
	{
		printf("\n O valor da multiplicacao eh negativo \n");
	}

	system ("pause");
	
	return 0;
}

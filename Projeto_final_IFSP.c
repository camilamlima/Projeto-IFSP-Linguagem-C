//Criar um programa que preencha um vetor de 5 posições com números inteiros (positivos ou negativos) informados pelo usuário (utilize um loop para requisitar os valores aos estudantes)

//Após isso, utilizando um loop (for ou while) realizar a soma e a multiplicação destes 5 números. 

//OBS: não serão aceitos exercícios em que a soma é feita sem a utilização do loop. 

//Exemplo de exercício não aceito:

//soma = vet[0]+vet[1]+vet[2]+vet[3]+vet[4];

//Após a soma e a multiplicação serem feitas, duas mensagens deverão ser emitidas:

//1) Deve-se informar o valor da soma e informar se a soma é positiva ou negativa.

//2) Deve-se informar o valor da multiplicação e informar se a mesma é positiva ou negativa.



//Nas primeiras linhas do código, inserir comentários para identificar o aluno e curso. Por exemplo:

//******************************************************

//Instituto Federal de São Paulo - Campus Sertãozinho

//Disciplina......: M2LPBA

//Programação de Computadores e Dispositivos Móveis

//Aluno...........: Camila Maria de Oliveira Lima

//******************************************************


//O código deve estar estar com cada uma de suas etapas comentadas. Por exemplo, antes de um loop. colocar algo parecido com://

// OBJETIVO.......: Este loop é utilizado para pedir que um usuário digite valores que serão armazenados em um vetor



//Veja na imagem abaixo um exemplo de como sua tela deve ficar. Fiquem à vontade para modificar o tipo de pergunta e o resultado final. Este foi apenas um exemplo para dar uma ideia para vocês.//



#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int v[5], i=5, s=0, m=1;
	
	// Objetivo: Este loop solicita que o usuário digite um valor para cada uma das cinco posições no vetor
	for(i=0; i<5; i++)
	{
		
		printf("\n Informe um numero inteiro para a posicao %i=", i);
		scanf( "%i",&v[i]);
		
	//Objetivo: Através do Loop utilizado deverá ser realizado a soma dos mesmos, como a multiplicacao tambem.
		s=s+v[i];
		m=m*v[i];
			
	}
	
	//Objetivo: Informar o resultado da soma dos valores informados
		printf("\n O valor da soma eh =%i", s);
		
	//Objetivo: Condição utilizada para informar o resultado da soma se eh positiva ou negativa		
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
	
	//Objetivo: Condição utilizada para informar o resultado da multiplicacao se eh positiva ou negativa	
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

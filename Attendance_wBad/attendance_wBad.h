#pragma once

#include <stdio.h>

#define ERRO -1

/*=========================== DESCRI��O=======================
O intuito � criar um aplicatico que controla a presen�a e pontualidade dos participatens 
de um grupo
============================================*/

// Representa o conte�do e os atributos do arquivo.
typedef struct {
	int ID;
	char nick[100];
	char nomePessoal[100];
	void* conteudo;
}STRPlayer;


//fun��o para abrir o arquivo se n�a abrir retorna ERRO;
int abrirArq(char*nomeArquivo);


//fun��o para ler o arquivo e passar os dados para a memoria temportaria, alocar espa�o de 
//memoria
/* L� o arquivo identificado por ID.
   Faz a leitura de n (tamanho) bytes do arquivo com a quantidade indicada.
   Retorna o conte�do lido do arquivo em caso de sucesso ou NULL se ocorrer um erro.
*/
void* lerArq(int ID, unsigned tamanho, unsigned quantidade);



//fun��o para inserir novo cadastro


//fun��o para alterar novo cadastro


//fun��o para escrever no arquivo / SALVA as autera��es feitas em memoria para o arquivo
/* Escreve o conte�do do buffer no arquivo identificado por ID.
   Faz a escrita de n (tamanho) bytes no arquivo com a quantidade indicada.
   Retorna o n�mero de bytes escritos no arquivo em caso de sucesso ou ERRO se ocorrer um erro.
*/
int escreverArq(int ID, const void* buffer, unsigned tamanho, unsigned quantidade);

//fun��o para desalocar a memoria alocada


//fun��o para fechar o arquivo se n�a abrir retorna ERRO;
int fecharAqr(FILE* arquivo);


/*Pensar a interface para controlar a presensa dos player*/








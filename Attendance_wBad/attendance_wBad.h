#pragma once

#include <stdio.h>

#define ERRO -1

/*=========================== DESCRIÇÃO=======================
O intuito é criar um aplicatico que controla a presença e pontualidade dos participatens 
de um grupo
============================================*/

// Representa o conteúdo e os atributos do arquivo.
typedef struct {
	int ID;
	char nick[100];
	char nomePessoal[100];
	void* conteudo;
}STRPlayer;


//função para abrir o arquivo se nõa abrir retorna ERRO;
int abrirArq(char*nomeArquivo);


//função para ler o arquivo e passar os dados para a memoria temportaria, alocar espaço de 
//memoria
/* Lê o arquivo identificado por ID.
   Faz a leitura de n (tamanho) bytes do arquivo com a quantidade indicada.
   Retorna o conteúdo lido do arquivo em caso de sucesso ou NULL se ocorrer um erro.
*/
void* lerArq(int ID, unsigned tamanho, unsigned quantidade);



//função para inserir novo cadastro


//função para alterar novo cadastro


//função para escrever no arquivo / SALVA as auterações feitas em memoria para o arquivo
/* Escreve o conteúdo do buffer no arquivo identificado por ID.
   Faz a escrita de n (tamanho) bytes no arquivo com a quantidade indicada.
   Retorna o número de bytes escritos no arquivo em caso de sucesso ou ERRO se ocorrer um erro.
*/
int escreverArq(int ID, const void* buffer, unsigned tamanho, unsigned quantidade);

//função para desalocar a memoria alocada


//função para fechar o arquivo se nõa abrir retorna ERRO;
int fecharAqr(FILE* arquivo);


/*Pensar a interface para controlar a presensa dos player*/








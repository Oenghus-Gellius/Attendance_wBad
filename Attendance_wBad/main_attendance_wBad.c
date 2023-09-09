#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdlib.h>
#include "attendance_wBad.h"

//menu de ascesso ao conteudo do programa

int attendance_wBad() {
	int menu;
	
	printf("\nTeste app attendance_wBad!!!\n");

	int arquivo;
	void* conteudoLido;
	int bytesEscritos;

	//abertura de arquivo
	arquivo = abrirArq("dadosAttendance.txt");
	if (arquivo != -1)
	{
		printf("\nArquivo aberto com sucesso!!!!\n");
	}
	else {
		printf("\nErro ao abrir o arquivo.\n");
	}


	do
	{
		printf("\nEscolha uma das opções do menu");
		printf("\n1-Cadastro de Player | 0-SAIR");
		scanf("%d", &menu);
	} while (menu != 0);
	
	fecharAqr(arquivo);
	if (arquivo != ERRO)
	{
		printf("n Arquivo fechado com sucesso!!!!\n");
	}
	else {
		printf("\nErro ao fechar o arquivo .\n");
	}

	
	printf("\nFIM teste app attendance_wBad!!!\n");
	return EXIT_SUCCESS;
}

main() {

	return attendance_wBad();
}
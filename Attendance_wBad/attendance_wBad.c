#define _CRT_SECURE_NO_WARNINGS

#include "attendance_wBad.h"

#include <stdlib.h>

int abrirArq(char* nomeArquivo){
	FILE *arquivo;
	arquivo = fopen(nomeArquivo, "a+");
	if (arquivo == NULL)
	{
		return ERRO;
	}
	return arquivo;
}

int fecharAqr(FILE *arquivo){
	int resultado;	
	resultado = fclose(arquivo);
	if (resultado != 0)
	{
		return ERRO;
	}
	return 0;
}
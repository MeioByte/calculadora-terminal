#pragma once

#include <stdio.h>

/* Estrutura que guarda as informações geradas após
o programa realizar a operação matemática */
typedef struct {
    unsigned int resultado; // Resultado da operação
    short erro; // Seu valor será 1 caso aconteça algum erro, 0 caso contrário
    char *mensagem; // Mensagem retornada após a operação
} Operacao;

// Callbacks correspondentes à cada operação matemática
Operacao somar(int, int);
Operacao subtrair(int, int);
Operacao multiplicar(int, int);
Operacao dividir(int, int);
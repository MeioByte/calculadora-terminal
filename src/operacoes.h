#pragma once

#include <stdio.h>

typedef struct {
    unsigned int resultado;
    short erro;
    char *mensagem;
} Operacao;

Operacao somar(int, int);
Operacao subtrair(int, int);
Operacao multiplicar(int, int);
Operacao dividir(int, int);
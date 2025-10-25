#include "operacoes.h"

Operacao somar(int a, int b) {
    Operacao op;

    if (a<=0 & b<=0) {
        op.resultado = 0;
        op.erro = 1;
        op.mensagem = "Ambos os operandos devem ser números positivos!";
    }
    else {
        op.resultado = a+b;
        op.erro = 0;
        op.mensagem = "Somado com sucesso!";
    }

    return op;
}
Operacao subtrair(int a, int b) {
    Operacao op;
    
    if (a<=0 & b<=0) {
        op.resultado = 0;
        op.erro = 1;
        op.mensagem = "Ambos os operandos devem ser números positivos!";
    }
    else if (a-b<0) {
        op.resultado = 0;
        op.erro = 1;
        op.mensagem = "O primeiro operando deve ser maior ou igual ao segundo!";
    }
    else {
        op.resultado = a-b;
        op.erro = 0;
        op.mensagem = "Subtraído com sucesso!";
    }

    return op;
}
Operacao multiplicar(int a, int b) {
    Operacao op;
    
    if (a<=0 & b<=0) {
        op.resultado = 0;
        op.erro = 1;
        op.mensagem = "Ambos os operandos devem ser números positivos!";
    }
    else {
        op.resultado = a*b;
        op.erro = 0;
        op.mensagem = "Multiplicado com sucesso!";
    }

    return op;
}
Operacao dividir(int a, int b) {
    Operacao op;

    if (a<=0 & b<=0) {
        op.resultado = 0;
        op.erro = 1;
        op.mensagem = "Ambos os operandos devem ser números positivos!";
    }
    else if (b==0) {
        op.resultado = 0;
        op.erro = 1;
        op.mensagem = "O segundo operando deve ser maior que zero!";
    }
    else if (a%b!=0) {
        op.resultado = 0;
        op.erro = 1;
        op.mensagem = "O primeiro operando deve ser divisível pelo segundo!";
    }
    else if (a<b) {
        op.resultado = 0;
        op.erro = 1;
        op.mensagem = "O primeiro operando deve ser maior ou igual ao segundo!";
    }
    else {
        op.resultado = a/b;
        op.erro = 0;
        op.mensagem = "Dividido com sucesso!";
    }

    return op;
}
#include "operacoes.h"

int primeiro;
int segundo;
int operacao_id;
Operacao (*operacoes[4])(int, int);
Operacao operacao_realizada;
int resultado;

int main() {
    printf("Olá!\nPor favor, digite um número.\n");
    scanf("%d", &primeiro);

    printf("\nAgora, digite outro número.\n");
    scanf("%d", &segundo);

    printf("\nQual operação você quer realizar com esses números? Digite:\n");
    printf("'1' para adição\n");
    printf("'2' para subtração\n");
    printf("'3' para multiplicação\n");
    printf("'4' para divisão\n");
    scanf("%d", &operacao_id);

    operacoes[0] = somar;
    operacoes[1] = subtrair;
    operacoes[2] = multiplicar;
    operacoes[3] = dividir;

    operacao_realizada = operacoes[operacao_id-1](primeiro, segundo);
    printf("%s\n", operacao_realizada.mensagem);
    if (operacao_realizada.erro) {
        return 1;
    }
    printf("\nO resultado é: %d\n\n", operacao_realizada.resultado);

    return 0;
}
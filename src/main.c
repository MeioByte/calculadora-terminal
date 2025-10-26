#include "operacoes.h"

// Operandos utilizados pela calculadora
int primeiro; // Primeiro operando
int segundo; // Segundo operando

int resultado; // Resultado gerado pela calculadora

int operacao_id; // Idendificador da operação feita com os operandos
Operacao (*operacoes[4])(int, int); // Callbacks das possíveis operações
Operacao operacao_realizada; // Guarda o resultado da operação feita

int main() { // Entry-point do código
    // Programa pede para o usuário digitar o primeiro operando
    printf("Olá!\nPor favor, digite um número.\n");
    scanf("%d", &primeiro);

    // Programa pede para o usuário digitar o segundo operando
    printf("\nAgora, digite outro número.\n");
    scanf("%d", &segundo);

    // Programa pergunta ao usuário qual operação matemática será realizada
    printf("\nQual operação você quer realizar com esses números? Digite:\n");
    printf("'1' para adição\n");
    printf("'2' para subtração\n");
    printf("'3' para multiplicação\n");
    printf("'4' para divisão\n");
    scanf("%d", &operacao_id);

    // Define os callbacks correspondentes às funções da calculadora
    operacoes[0] = somar;
    operacoes[1] = subtrair;
    operacoes[2] = multiplicar;
    operacoes[3] = dividir;

    // Retorna o resultado para o usuário
    operacao_realizada = operacoes[operacao_id-1](primeiro, segundo);
    printf("%s\n", operacao_realizada.mensagem);
    if (operacao_realizada.erro) { // Verifica se há alguma erro com a operação
        return 1;
    }
    printf("\nO resultado é: %d\n\n", operacao_realizada.resultado);

    return 0; // Encerra o programa
}
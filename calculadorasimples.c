#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    // Solicita ao usuário que insira o operador
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    // Solicita ao usuário que insira os dois números
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    // Realiza a operação com base no operador inserido
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            // Verifica se o divisor não é zero antes de realizar a divisão
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro! Divisao por zero.\n");
                return 1; // Encerra o programa com código de erro
            }
            break;
        default:
            printf("Operador invalido.\n");
            return 1; // Encerra o programa com código de erro
    }

    // Exibe o resultado
    printf("Resultado: %.4lf\n", resultado);

    return 0;
}

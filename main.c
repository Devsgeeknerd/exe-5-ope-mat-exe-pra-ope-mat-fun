// Inclui a biblioteca para as funções de entrada e saída (como printf e scanf).
#include <stdio.h>

void main() {
    // Declara a variável 'salario' para armazenar o valor do salário.
    float salario;

    // Declara a variável 'reajuste' para armazenar o percentual do reajuste.
    float reajuste;

    // Declara a variável 'novoSalario' para armazenar o novo valor do salário após o reajuste.
    float novoSalario;

    // Solicita ao usuário o valor do salário atual.
    printf("Digite o valor do salário atual: ");

    // Lê o valor informado pelo usuário e armazena em 'salario'.
    scanf("%f", &salario);

     // Solicita ao usuário o percentual do reajuste.
    printf("Digite o percentual do reajuste do salario: ");

    // Lê o percentual informado pelo usuário e armazena em 'reajuste'.
    scanf("%f", &reajuste);

    // Calcula o novo salário aplicando o reajuste.
    // A fórmula é: novoSalario = salario + (salario * (reajuste / 100)).
    // Onde 'reajuste / 100' transforma o percentual em número decimal.
    novoSalario = salario + (salario * (reajuste / 100));

    // Exibe o novo salário com duas casas decimais.
    printf("O novo salario apos o reajuste é de: %0.2f", novoSalario);

    // A função main não precisa de um 'return 0;' quando se usa void no início, mas está correto se incluir. 
    // O valor 0 indica que o programa terminou sem erros.
    return 0;
}

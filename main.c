// Inclui a biblioteca padrão de entrada e saída.
#include <stdio.h>
// Inclui a biblioteca padrão para funções utilitárias.
#include <stdlib.h>

// Função principal do programa.
void main()
{
    // Declara uma variável para armazenar o custo final do carro.
    float custoFinal;
    // Declara uma variável para armazenar o custo de fábrica do carro.
    float custoFabrica;

    // Solicita ao usuário que digite o custo de fábrica do carro.
    printf("Digite o custo de fabrica do carro: ");
    // Lê o custo de fábrica e armazena na variável 'custoFabrica'.
    scanf("%f", &custoFabrica);

    // Calcula o imposto sobre o custo de fábrica (45% do custo de fábrica).
    float imposto = custoFabrica * 45 / 100;

    // Calcula a comissão do distribuidor (28% do custo de fábrica).
    float distribuidor = custoFabrica * 28 / 100;

    // Calcula o custo final do carro somando o custo de fábrica, o imposto e a comissão do distribuidor.
    custoFinal = custoFabrica + distribuidor + imposto;

    // Exibe o custo final do carro com duas casas decimais.
    printf("O custo final do carro sera de : %0.2f", custoFinal);
    // Retorna 0 para indicar que o programa terminou com sucesso.
    return 0;
}

#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //declarar váriaveis
    int opcao;
    int bispo=0;
    int rainha=0;
    int repeti=0;

    //banner
    printf("****JOGO DE XADREZ****\n");

    //estrutu de repetição para capturar dados
    do
    {
    //exibir banner/capturar dado
    printf("(1)torre.\n(2)bispo.\n(3)rainha.\n(4)sair.\n");
    scanf("%d",&opcao);
    }while(opcao<1||opcao>4);

    //opcões de jogo
    switch(opcao)
    {

    //torre
    case(1):
    for(opcao;opcao<=5;opcao++)
    {
        printf("TORRE:direita\n");
    }
    break;

    //bispo
    case(2):
    while(bispo<=5)
    {
        bispo++;
        printf("BISPO:direita e cima\n");
    }
    break;

    //rainha
    case(3):
    while(rainha<=8)
    {
        rainha++;
        printf("RAINHA:esquerda\n");
    }
    break;

    //sair do jogo
    default:
        printf("saindo...");
    }
    return 0;
}

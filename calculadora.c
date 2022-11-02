#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  // Biblioteca para funções getch() e getche()
#include <string.h> // Funções de manipulação de strings
#include <ctype.h>  // Função isdigit
#include <math.h>   // Função POV
#include <locale.h> // Configurar a acentuação

float numero1, numero2, resultado; // variaveis declaradas

int operacao; // variaveis declaradas
char opc[50] = "";// variaveis declaradas


float adicao(float numero1, float numero2) // Função para somar.
{
    return numero1 + numero2;
}

float subtracao(float numero1, float numero2) // Função para subtrair.
{
    return numero1 - numero2;
}

float divisao(float numero1, float numero2) // Função para dividir.
{
    return numero1 / numero2;
}

float multiplicacao(float numero1, float numero2) // Função para multiplicar.
{
    return numero1 * numero2;
}

float porcentagem(float numero1, float numero2) // Função para calcular a porcentagem.
{
    return numero1 * numero2 / 100;
}

float potenciacao(float numero1, float numero2) // Função para efetuar a potenciação do numero 1 potencializado pelo numero 2.
{
    return pow(numero1, numero2);
}

void mostraMenu() // Função que imprime o menu de opções.
{
    printf("***************************************************\n\t");
    printf("**                                               **\n\t");
    printf("**         Escolha a operacao desejada:          **\n\t");
    printf("**         [1] - Adicao                          **\n\t");
    printf("**         [2] - Subtracao                       **\n\t");
    printf("**         [3] - Multiplicacao                   **\n\t");
    printf("**         [4] - Divisao                         **\n\t");
    printf("**         [5] - Porcentagem                     **\n\t");
    printf("**         [6] - Potenciacao                     **\n\t");
    printf("**                                               **\n\t");
    printf("***************************************************\n\n");
}

void menu() // menu principal onde a logica foi implementada.
{
    // Primeiro Numero
    

    printf("\n\tInsira o valor do primeiro numero: \t");

    scanf("%f", &numero1); // Função para pegar o valor digitado pelo usuario e validar se o numero é inteiro ou decimal.

    int aux = numero1;

    if (aux == numero1) // condição para saida do resultado para numero inteiro ou decimal.
    {
        printf("\n\tO primeiro valor escolhido eh %0.0f: inteiro \n\n\t", numero1);
    }
    else
    {
        printf("\n\tO primeiro valor escolhido eh %0.3f: decimal \n\n\t", numero1);
    }

    mostraMenu();

    // Operação
    printf("\tOperacao: ");
    scanf("%i", &operacao); // Função para pegar o valor digitado pelo usuario.
    
    printf("\n\tVoce selecionou a operacao: %0.0i \n\n\t", operacao);

    if (operacao > 6 || operacao < 1) // valida se a operação está entre as operações 1-6
    {
        printf("\n\tDigite apenas numeros entre as operacoes 1 e 6. \n\t");
        system("pause");
        system("cls"); // Limpa a tela
        menu();
    }

    // Segundo numero

    printf("Insira o valor do segundo numero: \t");

    scanf("%f", &numero2); // Função para pegar o valor digitado pelo usuario e validar se o numero é inteiro ou decimal.

    if (numero2 == 0 && operacao == 4) //  valida se o segundo numero não é 0 na opção de divisão.
    {
        printf("\n\tEscolha um numero diferente de 0 para divisao \n\t");
        system("pause");
        system("cls"); // Limpa a tela
        menu();
    }

    aux = numero2; // variavei auxiliar criada para
    if (aux == numero2)
    {
        printf("\n\tO segundo valor escolhido eh %0.0f: inteiro  \n\n\t", numero2);
    }
    else
    {
        printf("\n\tO segundo valor escolhido eh %0.0f: decimal  \n\n\t", numero2);
    }

    resultado = 0;

    system("cls");
    switch (operacao) // Função de switch para chamar as funções bases do menu principal.
    {
    case 1:
        
        printf("\n\tSegue a somatoria dos valores escolhidos.\n\n\t");
        resultado = adicao(numero1, numero2);
        strcpy (opc, "1 - Adicao");
        break;

    case 2:

        printf("\n\tSegue a subtracao dos valores escolhidos.\n\n\t");
        resultado = subtracao(numero1, numero2);
        strcpy(opc, "2 - Subtracao");
        break;
    case 3:

        printf("\n\tSegue a multiplicacao dos valores escolhidos.\n\n\t");
        resultado = multiplicacao(numero1, numero2);
        strcpy(opc, "3 - Multiplicacao");
        break;

    case 4:

        printf("\n\tSegue a divisao dos valores escolhidos.\n\n\t");
        resultado = divisao(numero1, numero2);
        strcpy(opc, "4 - Divisao");
        
        break;

    case 5:

        printf("\n\tSegue a porcentagem dos valores escolhidos.\n\n\t");
        resultado = porcentagem(numero1, numero2);
        strcpy(opc, "5 - Porcentagem");
        break;

    case 6:

        printf("\n\tSegue a potenciacao dos valores escolhidos.\n\n\t");
        resultado = potenciacao(numero1, numero2);
        strcpy(opc, "6 - Potenciacao"); 
        break;

    default:
        break;
    }

    


    printf("***************************************************\n\t");
    printf("** ,---.               |    |             |      **\n\t");
    printf("** |---',---.,---..   .|    |--- ,---.,---|,---. **\n\t");
    printf("** |  \\ |---'`---.|   ||    |    ,---||   ||   | **\n\t");
    printf("** `   ``---'`---'`---'`---'`---'`---^`---'`---' **\n\t");
    printf("***************************************************\n\n\t");

    aux = numero1;

    if (aux == numero1) // condição para saida do resultado para numero inteiro ou decimal.
    {
        printf("\tO primeiro valor: %0.0f numero inteiro \n\n\t", numero1);
    }
    else
    {
        printf("\tO primeiro valor: %0.3f numero decimal \n\n\t", numero1);
    }

    printf("\tA operacao escolhida: %s\n\n\t", opc);

    aux = numero2;

    if (aux == numero2) // condição para saida do resultado para numero inteiro ou decimal.
    {
        printf("\tO segundo valor: %0.0f numero inteiro \n\n\t", numero2);
    }
    else
    {
        printf("\tO segundo valor: %0.3f numero decimal \n\n\t", numero2);
    }

    int aux2 = resultado;

    if (aux2 == resultado) // condição para saida do resultado para numero inteiro ou decimal.
    {
        printf("\tO resultado eh: %0.0f numero inteiro \n\n\t ", resultado);
    }
    else
    {
        printf("\tO resultado eh: %0.3f numero decimal \n\n", resultado);
    }

        printf("***************************************************\n\n\t");
    system("pause");
    voltaMenu();
}

void voltaMenu()
{
    char op = '0';

    printf("\n\n\tDeseja retornar ao menu? [1] Sim | [2] Nao \n\t");

    op = getche(); // Função que lê a opção digitada pelo usuário sem necessidade de pressionar enter. Essa função só pode ser usada com tipo char

    if (op == '1')
    {
        system("cls");
        menu();
    }
    else if (op == '2')
    {
        printf("\nEncerrando...\n\t");
    }
    else
    { // Caso o usuário digite uma opção inválida, ele irá retornar ao menu após pressionar qualquer tecla.
        printf("\nOperacao invalida. Retornando ao menu...\n\t");
        system("pause");
        system("cls"); // Limpa a tela
        menu();
    }
}

int main(void)
{
    setlocale(LC_ALL, "pt-BR");
    printf("\t*******************************************************************************\n\t");
    printf("   ____           _                  _               _                         \n\t");
    printf("  / ___|   __ _  | |   ___   _   _  | |   __ _    __| |   ___    _ __    __ _ \n\t");
    printf(" | |      / _` | | |  / __| | | | | | |  / _` |  / _` |  / _ \\  | '__|  / _` | \n\t");
    printf(" | |___  | (_| | | | | (__  | |_| | | | | (_| | | (_| | | (_) | | |    | (_| | \n\t");
    printf("  \\____|  \\__,_| |_|  \\___|  \\__,_| |_|  \\__,_|  \\__,_|  \\___/  |_|     \\__,_| \n\t");
    printf("                                                                               \n\t");
    printf("*******************************************************************************\n\t");
    printf("\tDesenvolvida por: Alex, Cristiano, Felipe, Guilherme\n\t");
    printf("\tUniversidade do Vale do Itajai - HOW IV\n\n\n\t");

    menu();
    return 0;
}
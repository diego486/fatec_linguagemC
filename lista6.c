#include <stdio.h>
#include <stdlib.h>
#define ex8

struct dados{
    char c;
    unsigned char uc;
    int i;
    long li;
    float f;
    double d;
    unsigned int  ui;
    unsigned long ul;
};
typedef struct dados Dados;

struct cadastroInfo{
    int telefone;
    int cpf;
    int rg;
};

struct cadastro{
    char nome[10];
    char end[20];
    char cidade[15];
    char estado[15];
    int cep;

    struct cadastroInfo info;
};

struct cadastro pessoa[4];

struct atleta{
    char nome[20];
    char esporte[20];
    int idade;
    float altura;
};

#ifdef ex1
/*Escreva um programa que tem uma estrutura da dados com os membros abaixo e
inicialize-a com algum conteudo. Imprima estes conteudos no video.
            char, int, long, float, double
            unsigned char, unsigned int, unsigned long,*/
Dados vetor = {'a',10,2454,15.2,65.5,65,1456,545684};

main()
{
    while(1){
    system("cls");

    printf("Char = %c\nInt = %d\nLong = %ld\nFloat = %.2f\nDouble = %2.lf\n",vetor.c,vetor.i,vetor.li,vetor.f,vetor.d);
    printf("Unsigned Char = %c\nUnsigned Int = %u\nUnsigned Long = %lu",vetor.uc,vetor.ui,vetor.ul);

    sair();
    }
}
#endif // ex1

#ifdef ex2
/*Com a estrutura de dados do exercicio anterior, entre pelo teclado o
conteudo de cada um dos membros e imprima-os no video no seguinte
formato.
        10        20        30        40        50        60        70
1234567890123456789012345678901234567890123456789012345678901234567890
    char      int       long                float               double
          unsigned char       unsigned int        unsigned long*/
Dados tipo;

main()
{
    while(1){
    system("cls");

    printf("Digite um Char: ");
    scanf("%c",&tipo.c);
    printf("Digite um Int: ");
    scanf("%d",&tipo.i);
    printf("Digite um Long: ");
    scanf("%ld",&tipo.li);
    printf("Digite um Float: ");
    scanf("%f",&tipo.f);
    printf("Digite um Double: ");
    scanf("%lf",&tipo.d);
    printf("Digite um Unsigned Int: ");
    scanf("%u",&tipo.ui);
    printf("Digite um Unsigned Long: ");
    scanf("%lu",&tipo.ul);

    printf("Digite um Unsigned Char: ");
    scanf("%c",&tipo.uc);
    tipo.uc = getchar();


    printf("\n        10        20        30        40        50        60        70\n");
    printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
    printf("    %-2c        %-6d    %-11ld         %-10.2f          %-10.2lf\n",tipo.c,tipo.i,tipo.li,tipo.f,tipo.d);
    printf("          %-2c                  %-5u               %-10ld\n",tipo.uc,tipo.ui,tipo.ul);

    sair();
    }
}
#endif // ex2

#ifdef ex3
/*Escreva um programa que tem uma estrutura da dados com os membros abaixo
e inicialize-a com algum conteudo. Imprima estes conteudos no video.
             nome, end, cidade, estado, cep*/

struct cadastro pessoa = {"William","Tristeza","Santos","Sao Paulo",11333223};

main()
{
    while(1){
    system("cls");

    printf("Nome: %s\n",pessoa.nome);
    printf("Endereco: %s\n",pessoa.end);
    printf("Cidade: %s\n",pessoa.cidade);
    printf("Estado: %s\n",pessoa.estado);
    printf("CEP: %d\n",pessoa.cep);

    sair();
    }
}
#endif // ex3

#ifdef ex4
/*Crie outra estrutura de dados com os membros abaixo. Acrescente esta nova
estrutura a estrutura de dados do exercicio anterior (estrutura dentro de
outra estrutura) como mais um membro e receba via teclado todos os dados.
Declare a variavel como local e imprima estes conteudos no video.
        tel, cpf, rg*/

struct cadastro pessoa;

main()
{
    while(1){
    system("cls");

    printf("Digite o Nome: ");
    scanf("%s",&pessoa.nome);
    printf("Digite o Endereco: ");
    scanf("%s",&pessoa.end);
    printf("Digite a Cidade: ");
    scanf("%s",&pessoa.cidade);
    printf("Digite o Estado: ");
    scanf("%s",&pessoa.estado);
    printf("Digite o CEP: ");
    scanf("%d",&pessoa.cep);
    printf("Digite o Telefone: ");
    scanf("%d",&pessoa.info.telefone);
    printf("Digite o CEP: ");
    scanf("%d",&pessoa.info.cpf);
    printf("Digite o RG: ");
    scanf("%d",&pessoa.info.rg);

    printf("\nNome: %s\n",pessoa.nome);
    printf("Endereco: %s\n",pessoa.end);
    printf("Cidade: %s\n",pessoa.cidade);
    printf("Estado: %s\n",pessoa.estado);
    printf("CEP: %d\n",pessoa.cep);
    printf("Telefone: %d\n",pessoa.info.telefone);
    printf("CPF: %d\n",pessoa.info.cpf);
    printf("RG: %d\n",pessoa.info.rg);

    sair();
    }
}
#endif // ex4

#ifdef ex5
/*Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
de 4 elementos. Receba os dados pelo teclado e imprima-os no video. Faça um
menu. (vetor de estruturas)
		nome, end, cidade, estado, cep*/

main()
{
    while(1){
    system("cls");

    int i,num;

    for(i=0;i<4;i++){
    printf("Pessoa %d\n",i+1);
    printf("Digite o Nome: ");
    scanf("%s",&pessoa[i].nome);
    printf("Digite o Endereco: ");
    scanf("%s",&pessoa[i].end);
    printf("Digite a Cidade: ");
    scanf("%s",&pessoa[i].cidade);
    printf("Digite o Estado: ");
    scanf("%s",&pessoa[i].estado);
    printf("Digite o CEP: ");
    scanf("%d",&pessoa[i].cep);
    printf("\n");
    }
    do{
        do{
            printf("Digite o cadastro entre 1 e 4 a ser impresso ou 0 para finalizar: ");
            scanf("%d",&num);
        }while(num <1 && num >4);

    switch(num){
        case 1:
        {
            imprimir(num);
        }
        break;
        case 2:
        {
            imprimir(num);
        }
        break;
        case 3:
        {
            imprimir(num);
        }
        break;
        case 4:
        {
            imprimir(num);
        }
        break;
    }
    }while(num!=0);

    sair();
    }
}
#endif // ex5

#ifdef ex6
/*Crie uma estrutura para representar as coordenadas de um ponto no plano
(posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
distancia dele ate' a origem das coordenadas, isto é, posição (0, 0). Para
realizar o cálculo, utilize a fórmula a seguir:
        d = raiz quadrada de  (XB - XA)ao 2 + (YB -YA) ao 2
Em que:
d = distância entre os pontos A e B
X = coordenada X em um ponto
Y = coordenada Y em um ponto*/

struct coordenadas{
    int xa;
    int xb;
    int ya;
    int yb;
};

struct coordenadas pontos;

main()
{
    while(1){
    system("cls");

    float D;
    printf("Digite o Ponto XA: ");
    scanf("%d",&pontos.xa);
    printf("Digite o Ponto XB: ");
    scanf("%d",&pontos.xb);
    printf("Digite o Ponto YA: ");
    scanf("%d",&pontos.ya);
    printf("Digite o Ponto YB: ");
    scanf("%d",&pontos.yb);

    double raiz(); //apenas assim funcao executa, por vontade do CodeBlocks

    D = raiz(((pontos.xb - pontos.xa)*(pontos.xb - pontos.xa)) + ((pontos.yb - pontos.ya)*(pontos.yb - pontos.ya)));
    //com ^2 estava falhando, mas multiplicando por ele mesmo funciona???
    printf("Distancia entre os pontos = %.4f",D);
    sair();
    }
}
#endif // ex6

#ifdef ex7
/*Defina uma estrutura representando um atleta com os campos nome do
atleta, seu esporte, idade e altura. Escreva um programa que leia os
dados de cinco atletas. Exiba por ordem de idade, do mais velho para o
mais novo.*/

struct atleta atleta[5];
struct atleta aux;

main()
{
    while(1){
    system("cls");

    int i,x;

    for(i=0;i<5;i++){
    printf("Pessoa %d\n",i+1);
    printf("Digite o Nome: ");
    scanf("%s",&atleta[i].nome);
    printf("Digite o Endereco: ");
    scanf("%s",&atleta[i].esporte);
    printf("Digite a Idade: ");
    scanf("%d",&atleta[i].idade);
    printf("Digite a Altura: ");
    scanf("%f",&atleta[i].altura);
    printf("\n");
    }

    for(i=1;i<5;i++){
        aux = atleta[i];
        for(x=i; x>0 && aux.idade>atleta[x - 1].idade; x--)
            atleta[x] = atleta[x - 1];
            atleta[x] = aux;
        }

    for(i=0;i<5;i++){
        printf("\nNome: %s\n",atleta[i].nome);
        printf("Esporte: %s\n",atleta[i].esporte);
        printf("Idade: %d\n",atleta[i].idade);
        printf("Altura: %.2f\n", atleta[i].altura);
    }
    sair();
    }
}
#endif // ex7

#ifdef ex8
/*Escreva um programa que contenha uma estrutura representando uma data
valida. Essa estrutura deve conter os campos dia, mes e ano. Em seguida,
leia duas datas e armazene nessa estrutura. Calcule e exiba o numero de dias
que decorrem entre as duas datas.*/

struct calendario{
    int dia;
    int mes;
    int ano;
};

struct calendario data[2];

main()
{
    int i;
    for(i=0;i<2;i++){
        do{
        printf("Digite o Dia: ");
        scanf("%d",&data[i].dia);
        }while(data[i].dia<=0 || data[i].dia>=32);
        do{
        printf("Digite o Mes: ");
        scanf("%d",&data[i].mes);
        }while(data[i].mes<=0 || data[i].mes>12);
        do{
        printf("Digite o Ano: ");
        scanf("%d",&data[i].ano);
        }while(data[i].ano<=1899 || data[i].ano>2099);
    }
}
#endif // ex8

void sair()
{
    char resposta;

    while (1) {
        printf("\nDeseja continuar?(s/n): ");
        scanf(" %c",&resposta);

        switch (resposta) {

            case 's': return;
            case 'n': exit(0);

            default: continue;
        }
    }
}

double raiz(int n)
{
	double a = (double)n;
	double x = 1;
    int i;

	for(i=0;i<n;i++)
	{
		x = 0.5*(x+a/x);
	}
	return x;
}

void imprimir(int i)
{
    printf("\nNome: %s\n",pessoa[i].nome);
    printf("Endereco: %s\n",pessoa[i].end);
    printf("Cidade: %s\n",pessoa[i].cidade);
    printf("Estado: %s\n",pessoa[i].estado);
    printf("CEP: %d\n",pessoa[i].cep);
}

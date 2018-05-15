#define ex6
#include <stdio.h>
#include <stdlib.h>


/*
1 - Escreva um programa e inicialize as variaveis do tipo char, int, short,
    long, unsigned(char, int, short, long), float e double com seus valores
    limites e imprima-os no video. Utilize variaveis globais para os valores
    positivos e locais para os negativos.*/


#ifdef ex1
char c = '127';
short int shortInt = 32767;
long int longInt= 2147483647;
unsigned char uChar = '255';
unsigned short int uShortInt= 65535;
unsigned int uInt= 65535;
unsigned long int uLongInt= 4294967295;


int main()
{
    char nc = '127';
    short int nShortInt = -32768;
    long int nLongInt= -2147483648;
    unsigned char nUchar = '0';
    unsigned short int nUshortInt= 0;
    unsigned int nUint= 0;
    unsigned long int nUlongInt= 0;


    printf("\t\t****MAIORES VALORES****\t\t\n\n");
    printf("\tMaior valor tipo Char:              %c\n",c);
    printf("\tMaior valor short int:              %hd\n",shortInt);
    printf("\tMaior valor long int:               %ld\n",longInt);
    printf("\tMaior valor unsigned char:          %u%c\n",uChar);
    printf("\tMaior valor unsigned short int:     %hu\n",uShortInt);
    printf("\tMaior valor unsigned int:           %u\n",uInt);
    printf("\tMaior valor long int:               %ul\n\n",uLongInt);

    printf("\t\t****MENORES VALORES****\t\t\n\n");
    printf("\tMenor valor tipo Char:              %c\n",nc);
    printf("\tMenor valor short int:              %hd\n",nShortInt);
    printf("\tMenor valor long int:               %ld\n",nLongInt);
    printf("\tMenor valor unsigned char:          %u%c\n",nUchar);
    printf("\tMenor valor unsigned short int:     %hu\n",nUshortInt);
    printf("\tMenor valor unsigned int:           %u\n",nUint);
    printf("\tMenor valor long int:               %ul\n",nUlongInt);

}
#endif

/*2 - Escreva um programa que recebe via teclado os valores limites sem sinal para
    as variaveis do tipo char, int e long int e imprima-os no video.*/

#ifdef ex2
    main()

    {
    setlocale (LC_ALL,"Portuguese");

    unsigned char posunchar;
    unsigned char negunchar;
    unsigned int posunint;
    unsigned int negunint;
    unsigned long int posunlongint;
    unsigned long int negunlongint;

    printf ("Digite o valor limite positivo de char (+127):\n");
    scanf ("%u", &posunchar);
    printf ("Digite o valor limite negativo de char (-128):\n");
    scanf ("%u", &negunchar);
    printf ("Digite o valor limite positivo de int (+32767):\n");
    scanf ("%u", &posunint);
    printf ("Digite o valor limite negativo de int (-32768):\n");
    scanf ("%u", &negunint);
    printf ("Digite o valor limite positivo de long int (+2147483647):\n");
    scanf ("%lu", &posunlongint);
    printf ("Digite o valor limite negativo de long int (-2147483648):\n\n");
    scanf ("%lu", &negunlongint);

    printf ("\n\nValores digitados com unsigned: \n\n");

    printf ("Char: negativo %u | positivo %u \n", negunchar, posunchar);
    printf ("Int: negativo %u | positivo %u \n", negunint, posunint);
    printf ("Long Int: negativo %lu | positivo %lu \n\n", negunlongint, posunlongint);







    }
#endif

/*3 - Escreva um programa que receba dados via teclado para variaveie do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char*/

   #ifdef ex3

    main()

    {



    printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("    short               long                int\n");
    printf("              float               double              char\n");

    }

    #endif


/*4 - Acrescente ao exercicio anterior mais uma linha. Receba via teclado os valores
    sem sinal char, int e long int e escrevendo nas coluna 10, 30 e 50.*/


#ifdef ex4
main()

    {
        unsigned char c;
        int i;
        long int li;

    printf("digite um char sem sinal: ");
    scanf("%u%c",&c);
    printf("digite um inteiro: ");
    scanf("%d",&i);
    printf("digite um inteiro longo: ");
    scanf("%l%d",&li);


    printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("    short               long                int\n");
    printf("              float               double              char\n");

    printf("%9d",c);
    printf("%19d",i);
    printf("%29ld",li);

    }

    #endif

    /*
5 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar*/

    #ifdef ex5

    main()


{
    int a;
    int b;

    printf("entre com a primeira variavel: \n");
    scanf("%d",&a);
    printf("entre com a segunda variavel: \n");
    scanf("%d",&b);

    printf("%d%d\n",a,b);
    printf("%d%d\n",b,a);

}
#endif


/*6 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/

    #ifdef ex6

    main()

{
    int a,b,c;

    printf("entre com o inteiro:");
    scanf("%d",&a);
    printf("entre com o limite: ");
    scanf("%d",&b);

    c=b;

        do{
        b=b+1;
        }while(b%a!=0);


     printf("menor multipo de %d maior que %d e': %d",a,c,b);

}
#endif

/*
7 - Escreva um programa que receba via teclado um tempo em segundos e converta um
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/

#ifdef ex7
    int main()
    {



    int t;
    int h;
    int m;
    int s;

    printf("entre com o tempo em segundos: ");
    scanf("%d",&t);

    h = t/3600;

    m = (t%3600)/60;


    s = (t%3600)%60;

    printf("%d segundos equivale a %d hora(s),%d minuto(s),%d segundo(s)", t,h,m,s);

    }

    #endif

    /*8 - Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar
    outro número formado pelos dígitos invertidos do número lido.
    Ex:   NúmeroLido = 123
        NúmeroGerado = 321*/

    #ifdef ex8
        main()

        {

        int numL,x1,x2,x3;



        printf("entre com um valor de 3 digitos: ");
        scanf("%d",&numL);

       x1 = numL%10;
       x2 = (numL%100)/10;
       x3 = (numL%1000)/100;

       printf("o valor invertido e': %d%d%d",x1,x2,x3);


        }

        #endif

    #ifdef ex9
/*9 - O coração humano bate em media uma vez por segundo. Escrever um programa para
     calcular quantas vezes o coracao de uma pessoa baterá se viver X anos.
     Imprimir o resultado na tela*/


    main()

    {
    setlocale (LC_ALL, "Portuguese");
     int anos;
     long total,segundos = 31536000; // 1 dia = 24 horas = 86.400 segundos, 1 ano = 365 dias = 8.760 horas = 525.600 minutos = 31.536.000 segundos.

     printf ("\nDigite a quantidade de anos: ");
     scanf ("%d", &anos);

     total = anos * segundos;

     printf ("\nO coração baterá %ld vezes se viver %d ano(s)\n\n", total, anos);


    }
    #endif



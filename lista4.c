#include <stdio.h>
#include <stdlib.h>
#define ex8


/*
1 - Escreva um programa que receba via teclado 10 numeros inteiros, armazene em
    um vetor e exiba-os em ordem inversa daquela em que foram armazenados.*/

    #ifdef ex1

    int main()
    {
    int c;
            do{



        static int vet[10];
        int i;

        for(i =1; i<=10; i++)
        {
        printf("digite o termo %d do vetor: ",i);
        scanf("%d",&vet[i]);
        }

        for(i =10; i>=1; i--)
        {

        printf("%d, ",vet[i]);
        }
        printf("\n\nDeseja continuar? ");
        printf("\n 1 - Sim\n");
        printf("\n 2 - Nao\n");
        scanf("%d",&c);

        }while(c==1);


    }

    #endif

/*
2 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double*/

#ifdef ex2

main()
{
   int c;
            do{

    char str [5][9]= {"INT","LONG","UNSIGNED","FLOAT","DOUBLE"};
    int vetorInt[3],x,y;
    long vetorLong[3];
    unsigned vetorUnsigned[3];
    float vetorFloat[3];
    double vetorDouble[3];

    for(y=0;y<5;y++){
        for(x=0;x<3;x++){
            printf("digite o %d numero %s: ",x+1,str[y]);
            if(y==0){
                scanf("%d",&vetorInt[x]);
            } else if (y==1){
                scanf("%ld",&vetorLong[x]);
            } else if (y==2){
                scanf("%u",&vetorUnsigned[x]);
            } else if (y==3){
                scanf("%f",&vetorFloat[x]);
            } else {
                scanf("%lf",&vetorDouble[x]);
            }
        }
    }
    printf("\n        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");

    for(x=0;x<3;x++){
        printf("  %-6d              %-10ld          %-5u\n",vetorInt[x],vetorLong[x],vetorUnsigned[x]);
        printf("            %-8.1f            %-8.1lf\n",vetorFloat[x],vetorDouble[x]);
    }
   printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);

}
#endif // ex2

/*
3 - Um vetor é palíndromo se ele não se altera quando as posições dos componentes
    são invertidos. Por exemplo, o vetor v = {1, 3, 5, 2, 2, 5, 3, 1} é palíndromo.
    Escreva um programa que verifique se um vetor é palíndromo. Receba o vetor
    via teclado (tamanho 10)*/

    #ifdef ex3

    int main()
{

        static int vet[10];
        int i;
        int cont=0;
        int c;
        do{

        for(i=1; i<=10; i++)
        {
        printf("Entre com o valor da posicao %d do vetor: ",i);
        scanf("%d",&vet[i]);
        }

        printf("vetor digitado: \n");
        for(i=1; i<=10; i++)
        {
        printf("%d", vet[i]);
        }

        int aux=9;
        for(i=1; i<=5; i++)
            {
                if(vet[i] == vet[i+aux])
                {
                  cont++;
                  aux=aux-2;
                }
            }
        printf(" cont: %d",cont);
            if(cont==5)
            {
            printf(" palindromo");
            }
            else
            {
            printf(" nao palindromo");
            }
       printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);

        }

    #endif


/*
4 - Escreva um programa declarando um vetor multidimensional de 2x3x3 de n.
    inteiros e inicialize-o com "0". Receba via teclado novos valores para
    todos os elementos do vetor e imprima no video estes novos conteudos.*/

#ifdef ex4

    int main()
{

       static int vet[2][3][3]={
                                 {{0,0,0},
                                 {0,0,0},
                                 {0,0,0}},

                                 {{0,0,0},
                                 {0,0,0},
                                  {0,0,0}}};

       int pagina, linha, coluna;

        int c;
            do{

       for(pagina=0; pagina<=1; pagina++)

       {
         for(linha=0; linha<=2; linha++)
            {
             for(coluna = 0; coluna <=2; coluna++)
              {
                  printf("**Pagina %d**digite o valor na posicao [%d, %d]: ", pagina+1, linha+1, coluna+1);
                  scanf("%d", &vet[pagina][linha][coluna]);
              }
            }

       }

       for(pagina=0; pagina<=1; pagina++)

       {
         for(linha=0; linha<=2; linha++)
            {
             for(coluna =0; coluna <=2; coluna++)
              {
                  printf("%d ",vet[pagina][linha][coluna]);
              }


                printf("\n");
                }
                printf("\n");
       }

           printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);

    }

#endif

/*
5 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    multiplicacao "*", multiplique os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.*/

   #ifdef ex5

   int main()
{



        static int vetorA[2][3];
        static int vetorB[2][3];
        static int vetorC[2][3];
        int linha; int coluna;

        int c;
            do{


        for(linha=0;linha<=1;linha++)
        {
            for(coluna=0;coluna<=2;coluna++)
                {
                 printf("Digite o termo[%d,%d]do vetor A: ",linha+1, coluna+1);
                 scanf("%d",&vetorA[linha][coluna]);
               }
        }


        for(linha=0;linha<=1;linha++)
        {
            for(coluna=0;coluna<=2;coluna++)
                {
                 printf("Digite o termo[%d,%d]do vetor B: ",linha+1, coluna+1);
                 scanf("%d",&vetorB[linha][coluna]);
               }
        }

        for(linha=0;linha<=1;linha++)
        {
            for(coluna=0;coluna<=2;coluna++)
                {
                 vetorC[linha][coluna]= vetorA[linha][coluna]*vetorB[linha][coluna];
                }

        }

        for(linha=0;linha<=1;linha++)
        {
            for(coluna=0;coluna<=2;coluna++)
                {
                 printf("Valor na posicao[%d,%d]= %d\n",linha+1,coluna+1,vetorC[linha][coluna]);
                }
                printf("\n");
        }

        printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
    }
    #endif

/*
6 - Escreva um programa que receba um vetor e o decomponha em dois outros vetores,
    um contendo as componentes de ordem ímpar e o outro contendo as componentes
    de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
    o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}.*/

    #ifdef ex6

    int main()
{
    while(1){
    system("cls");
        int vet[10];
        int i,x,y;
        int vetpar[10];
        int vetimpar[10];
        int c;
            do{

        for(i = 0; i<10; i++)
            {
                printf("Entre com o termo %d do vetor: ", i+1);
                scanf("%d",&vet[i]);
            }
        x = 0;
        y = 0;

            for(i=0; i<10; i++)
            {

                if(i %2 == 0)
                    {
                        vetimpar[x]=vet[i];
                        x++;

                    }
                else
                    {
                    vetpar[y]=vet[i];
                    y++;

                    }
            }
            printf("\nVetor impar\n");
                for(i=0; i<x; i++)
                {
                    printf("%d\n",vetimpar[i]);
                }

            printf("\nVetor par\n");
                for(i = 0 ; i<y; i++)
                {
                    printf("%d\n",vetpar[i]);
                }

           printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
    }
}
    #endif

/*

7 - Escreva um programa que decomponha um vetor de inteiros em dois outros vetores,
    um contendo as componentes de valor ímpar e o outro contendo as componentes de
    valor par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2}.*/

  #ifdef ex7

  int main()
{

        static int vet[10];
        int i;
        static int vetpar[10];
        static int vetimpar[10];
        int c;
            do{


        for(i=1; i<=10; i++)
        {
        printf("Entre com o valor da posicao %d do vetor: ",i);
        scanf("%d",&vet[i]);
        }

        int j=0;
        int x=0;
        for(i=1; i<=10; i++)
        {
            if(vet[i]%2==0)
            {
             vetpar[j]=vet[i];
             j++;
            }
            else
            {
             vetimpar[x]=vet[i];
             x++;
            }
         }

         printf("vetor par: ");
         for(i=0; i<j; i++)
         {
         printf("%d|", vetpar[i]);
         }


         printf("vetor impar: ");
         for(i=0; i<=x; i++)
         {
         printf("%d|", vetimpar[i]);
         }
        printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
  }

  #endif




/*
8 - Receba via teclado dez valores numericos e ordene por ordem crescente estes
    valores, guardando-os num vetor. Ordene o valor assim que ele for digitado.
    Mostre ao final os valores em ordem.*/

    #ifdef ex8

    int main()
{

        static int vet[9];
        int i,j,aux;

        int c;
            do{

        for(i=0; i <=9; i++)

            {
                printf("digite o termo %d do vetor: ", i);
                scanf("%d",&vet[i]);

            }

            for(i=0; i <=8; i++)
            {
                for(j=i+1; j <=9; j++)
                    {
                        if(vet[i]>vet[j])
                            {
                                aux = vet[i];
                                vet[i]= vet[j];
                                vet[j] = aux;
                            }
                    }

            }

       printf("vetor ordenado:");
       for(i=0; i <=9; i++)
       {
       printf("%d|",vet[i]);
        }

printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
    }
    #endif


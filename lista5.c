#include <stdio.h>
#include <stdlib.h>
#define ex3


/*
1 - Receba uma palavra via teclado e imprima-a de tras-para-frente.*/

#ifdef ex1

int main()
{



    static char p[10];
    int i;
    int cont = 0;
    int c;
            do{



   printf("digite uma palavra: ");
   gets(p);

    for(i=0; i<10; i++)
    {
     if(p[i]!='\0')
     {
         cont++;

     }
     else{
        break;
     }
    }

    for(i=cont-1; i>=0; i--)
    {
        printf("%c",p[i]);
    }

printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);


}
#endif

/*

2 - Escreva um programa que calcula o comprimento de uma string recebida via
    teclado.*/


    #ifdef ex2

int main()
{


    char str[20];
	int numcaractere = 0;
	char c;

	do{
    printf("Digite uma palavra: ");
	gets(str);

	while(str[numcaractere] != '\0')
	{
		++numcaractere;
	}

	printf("A palavra %s possui %d caracteres.\n", str, numcaractere);

    printf("\n\nDeseja continuar? ");
    printf("\n 1 - Sim\n");
    printf("\n 2 - Nao\n");
    scanf("%d",&c);

        }while(c==1);


}
#endif

/*
3 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3*/

        #ifdef ex3

int main()
{


    char str[5][8];
    int x,y,t=0;
    int c;
            do{

    for(x=0;x<5;x++){
        do{
        t=0;
        printf("Digite o %d nome: ",x+1);
        scanf("%s",str[x]);
            for(y=0;str[x][y];y++){
                t++;
            }
            if(t>7){
                printf("Digite um nome de ate 7 caracteres!!\n");
            }
        }while(t>7);
    }
    printf("\n        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");
    printf("  %-8s                                %-8s\n",str[0],str[4]);
    printf("            %-8s            %-8s\n",str[1],str[3]);
    printf("                      %-8s\n",str[2]);

printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
}
#endif // ex3
   /*

/*4 - Escreva um programa para receber 3 strings de ate 10 caracteres cada via
    teclado e imprima-as no video no seguinte formato:
    (utilize vetores multidimensionais)

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        string1             string2             string3*/

#ifdef ex4

        int main()
{


    char str[3][11];
    int x,y,t=0;
    int c;
            do{

    for(x=0;x<3;x++){
        do{
        t=0;
        printf("Digite a %d palavra: ",x+1);
        scanf("%s",str[x]);
            for(y=0;str[x][y];y++){
                t++;
            }
            if(t>=11){
                printf("Digite uma palavra de ate 10 caracteres!!\n");
            }
        }while(t>=11);
    }
    printf("\n        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");
    printf("    %-11s         %-11s         %-11s\n",str[0],str[1],str[2]);

    printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
}
#endif // ex4


/*5 - Receba 2 string de ate 10 caracteres via teclado, compare-as mostrando como
    resultado se são GUAIS ou DIFERENTES.*/

    #ifdef ex5

    int main()

    {


        char str1[11];
        char str2[11];
        int i = 0;
        int c;
            do{

        printf("Digite a primeira String => ");

        scanf("%s",&str1);

        printf("Digite a segunda String => ");

        scanf("%s",&str2);


        while(str1[i] == str2[i] && str1[i]!= '\0' && str2[i]!= '\0')
        {
            i++;
        }


         if (str1[i]== '\0' && str2[i]== '\0')
            {
            printf("Strings Iguais!");
            }
        else
            {
            printf("Strings Diferentes!");
            }
        printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
    }

    #endif


    /*
/*
6 - Leia uma string (3 caracteres) via teclado que pode assumir os valores seg,
    ter, qua, qui, sex, sab, dom, e imprima as seguintes mensagens, respectivamente:
    segunda-feira, terca-feira, quarta-feira, quinta-feira, sexta-feira, sabado e
    domingo. Utilize o comando switch - case.*/


   #ifdef ex6

   char diasSemana[7][14]={"Domingo",
                    "Segunda-Feira",
                    "Terca-Feira",
                    "Quarta-Feira",
                    "Quinta-Feira",
                    "Sexta-Feira",
                    "Sabado",
                    };

    int main()
{


    char c[4];
    int num;
    int c;
            do{
    printf("Digite um dia da semana abreviado pelas suas 3 primeiras letras\n");
    printf("Ex: dom = Domingo");

    do{
        printf("\nDia abreviado: ");
        scanf("%s",&c[0]);
        if(c[0]=='d' && c[1]=='o' && c[2]=='m'){
            num=0;
        } else if(c[0]=='s' && c[1]=='e' && c[2]=='g'){
            num=1;
        } else if(c[0]=='t' && c[1]=='e' && c[2]=='r'){
            num=2;
        } else if(c[0]=='q' && c[1]=='u' && c[2]=='a'){
            num=3;
        } else if(c[0]=='q' && c[1]=='u' && c[2]=='i'){
            num=4;
        } else if(c[0]=='s' && c[1]=='e' && c[2]=='x'){
            num=5;
        } else if(c[0]=='s' && c[1]=='a' && c[2]=='b'){
            num=6;
        } else {
            num=7;
        }
    }while(num>=7);

    switch(num){
        case 0:
        {
            printf("\n%s\n",diasSemana[0]);
        }
        break;
        case 1:
        {
            printf("\n%s\n",diasSemana[1]);
        }
        break;
        case 2:
        {
            printf("\n%s\n",diasSemana[2]);
        }
        break;
        case 3:
        {
            printf("\n%s\n",diasSemana[3]);
        }
        break;
        case 4:
        {
            printf("\n%s",diasSemana[4]);
        }
        break;
        case 5:
        {
            printf("\n%s\n",diasSemana[5]);
        }
        break;
        case 6:
        {
            printf("\n%s\n",diasSemana[6]);
        }
        break;
    }

           printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
    }

    #endif

/*
7 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas*/

    #ifdef ex7

    int main()
{


       char str[11];
       int i;

        int c;
            do{

        printf("Digite 10 caracteres: ");
        scanf("%s",&str);


        for(i=0; str[i]!='\0'; i++)
            {

            if(str[i]>=97 && str[i]<=122)
                {
            str[i]= str[i]-32;
                }
            }

        printf("%s",str);


           printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
    }

 #endif // ex7

  /*
8 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas.*/

    #ifdef ex8

    int main()
{


       char str[11];
       int i;

        int c;
            do{

        printf("Digite 10 caracteres: ");
        scanf("%s",&str);


        for(i=0; str[i]!='\0'; i++)
            {
            if(str[i]>=65 && str[i]<=89)
                {
            str[i]= str[i]+32;
                }
        }

        printf("%s",str);

           printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
    }

 #endif


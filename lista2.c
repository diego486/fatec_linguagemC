#define ex5


#include <stdio.h>
#include <stdlib.h>



/*1 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores digitados.*/

#ifdef ex1
int main()
{
    int soma = 0;
    int num;
    int cont = 0;
    float media;

    while(num>0){
    printf("digite um numero: ");
    scanf("%d",&num);

        if(num>0){
        soma=soma+num;
        cont++;
        }
    }
    media = (float)soma/(float)cont;
    printf("a media dos numeros positivos 'e: %f", media);


    }
    #endif



/*

2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =,> ou < a cada pergunta. Utilize o
    comando if-else. */


    #ifdef ex2

    int main(){

    int min= 1;
    int max = 99;
    int n;
    char r;

    printf("-------pense em um Numero-------");
    printf("\n\n----use > caso seja maior----");
    printf("\n----use < caso seja menor----");
    printf("\n----use = caso seja o numero pensado----\n\n");




        while(r!='=')
            {
            printf("\no numero e' maior, menor ou igual a %d ?" , n=(max+min)/2);
            scanf("%c",&r);



            if(r=='>'){
            min = n;
            n=(max+min)/2;
            getchar();

            }
            else if(r=='<')
            {
            max= n;
            n=(max+min)/2;
            getchar();


            }
            }


        printf("o numero pensado e': %d\n",n);



    }
    #endif




    /*

3 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.*/

#ifdef ex3

int main()

{

int min= 1;
    int max = 99;
    int n;
    char r;

    printf("-------pense em um Numero-------");
    printf("\n\n----use > caso seja maior----");
    printf("\n----use < caso seja menor----");
    printf("\n----use = caso seja o numero pensado----\n\n");

    do{

          printf("\no numero e' maior, menor ou igual a %d ?" , n=(max+min)/2);
          scanf("%c",&r);

    switch(r)
            {
            case '>':
            {
             min = n;
             n=max+min/2;
             getchar();
             break;
            }


            case '<':
            {
            max = n;
            n=(max+min)/2;
            getchar();
            break;
            }

            case '=':
            {
            printf("o numero pensado e': %d",n);
            getchar();
            break;
            }

            default:
            {
            printf("\nopcao invalida");
            }


            }
            }while(r!='=');
}
#endif


/*
4 - De um modo geral, as ligações telefônicas são cobradas pelas suas durações.
    O sistema registra os instantes em que a ligação foi iniciada e concluída e
    é executado um programa que determina o intervalo de tempo decorrido entre
    aqueles dois instantes dados. Escreva um programa que recebe dois instantes
    dados em horas, minutos e segundo e determina o intervalo de tempo (em
    horas, minutos e segundos) decorrido entre eles.*/


    #ifdef ex4

    int main (){

    setlocale (LC_ALL, "Portuguese");
	int hrsinicio, hrsfinal, minuinicio, minfinal, segsinicio, segsfinal;
	int totalhora, totalminuto, totalsegundo;

	printf ("Digite a hora que foi feita a chamada: ");
	scanf ("%d", &hrsinicio);

	printf ("\nDigite o minuto: ");
	scanf ("%d", &minuinicio);

	printf ("\nDigite os segundos: ");
	scanf ("%d", &segsinicio);

    printf ("\nDigite a hora que foi finalizada a chamada: ");
	scanf ("%d", &hrsfinal);

	printf ("\nDigite o minuto: ");
	scanf ("%d", &minfinal);

	printf ("\nDigite os segundos: ");
	scanf ("%d", &segsfinal);

    totalhora =  hrsfinal - hrsinicio;
    totalminuto = minfinal - minuinicio;
    totalsegundo = segsfinal - segsinicio;

    if (totalminuto<60 && totalhora >= 1){
        totalhora = totalhora-1;
    }

    printf ("\n\n-------> Duração da ligação: %d:%d:%d", totalhora, totalminuto, totalsegundo);

	}



        #endif

/*5 - Escreva um programa que realize arredondamentos de números utilizando a
    seguinte regra:
    - se a parte fracionaria for menor ou igual a 0,24 o n. e' arredonda para 0
    - se a parte fracionaria for maior ou igual a 0,25 e menor ou igual a 0,74
      o numero e' arredondado para 0,5
    - se a parte fracionaria for maior ou igual a 0,75 o numero e' arredondado
      para o inteiro imediatamente superior*/


      #ifdef ex5

      int main()
        {

            float f,r,n,mod;
            int num,dem;

            printf("digite o numerador: ");
            scanf("%d",&num);

            printf("digite o denominador: ");
            scanf("%d",&dem);

            r=num/dem;
            mod=num%dem;
            f=mod/dem;

             printf("o inteiro é %.f, o resto é %f e a parte fracionario e %f\n",r,mod,f);

            if(f<=0.24)
                {
                 r = r+0.0;
                printf("O numero arrendondado e':%.1f",r);
                }
                    else if(f>=0.25 && f<=0.74)
                    {
                        r =r+0.5;
                    printf("O numero arrendondado e':%.2f",r);
                    }
                        else
                        {
                        n=r+1;
                        printf("O numero arrendondado e':%.f",n);
                        }

        }
        #endif



/*6 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     Álcool
         até 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
     gasolina é R$ 3,88 e o preço do litro do álcool é R$ 3,18.*/


     #ifdef ex6

     int main()
     {

         int l; /*quantidade a ser abastecido*/
         int tipo;
         float p,pag,d;/* p -preço sem desconto, pag - total a pagar com desconto, d - desconto dado */


         printf("Digite com quantos litros deseja abastecer: ");
         scanf("%d",&l);
         printf("****Digite 1 para gasolina ou 2 para Alcool**** \n");
         printf("Informe o tipo de Combustivel: ");
         scanf("%d",&tipo);
         getchar();

        printf("o tipo 'e: %d\n",tipo);

         switch(tipo)

            {
                case 1:

                    {
                        p = l * 3.88;
                        if(l<20){
                        pag = p - (l*0.04);
                        }
                        else{
                            pag = p - (l*0.06);
                            }

                    break;
                    }

              case 2:
                    {

                    p=l*3.18;
                        if(l<20){
                        pag = p - (l*0.03);
                        }
                        else{
                            pag = p - (l*0.05);

                                }

                    break;
                    }

                default:
                {
                printf ("\nA opcao escolhida e' invalida. \n");
                }
            }
         printf("Preco normal e' R$ %.2f: \n",p);
         printf("Valor com desconto e' R$ %.2f: \n",pag);
         printf("Seu desconto foi de R$ %.2f",d=p-pag);

     }
#endif


/*7 - Leia a distancia em Km e a quantidade de litros de gasolina consumidos
    por um carro em um percurso, calcule o consumo em Km/l e escreva uma
    mensagem de acordo com a tabela abaixo:
    CONSUMO (Km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!*/

    #ifdef ex7
   int main()
        {
            float d;
            float l;
            float c;

            printf("digite a distancia percorrida em km: " );
            scanf("%f",&d);

            printf("digite quantos litros foram consumidos: " );
            scanf("%f",&l);

            c=d/l;

            if(c<8){
            printf("venda o carro!");
            }
            else if(c>8 && c<14)
            {
             printf("economico");
            }
            else{
            printf("super economico");
            }


        }

        #endif

/*8 - Faca um programa que receba a altura e o sexo de uma pessoa, calcule e
    mostre seu peso ideal, utilizando as seguintes formulas (onde h corresponde
    a altura):
    Homens: (72.7 * h) - 58
    Mulheres: (62,1 * h) - 44,7*/


    #ifdef ex8
    int main()

    {

        char sexo;
        float h,p;

        printf("Informe seu sexo: m ou h.\n");
        scanf("%c",&sexo);

        switch(sexo)
            {
                case 'h':
                case 'H':
                {
                 printf("\ninforme sua altura: ");
                 scanf("%f",&h);

                 p = (72.7 * h ) - 58;
                 printf("Seu peso ideal é: %2.f", p);
                 break;
                }
                case 'm':
                case 'M':
                {
                 printf("\ninforme sua altura: ");
                 scanf("%f",&h);

                 p = (62.1 * h ) - 44.7;
                 printf("Seu peso ideal é: %2.f", p);
                 break;
                }
                default:
                {
                printf("*****\nOpcao invalida*****");
                }

            }
        }
        #endif


















#ifdef ex9

#include <stdio.h>
#include <stdlib.h>
int main()
{
  char nome[15][10];
  int cont = 0;
  while(cont < 10)
  {
    printf("Entre com o nome: ");
    scanf("%s", &nome[cont]);
    cont++;
  }
  for (cont=0;cont<10;cont++)
  {
      printf("%s\n",&nome[cont]);
  }
  system("PAUSE");
  return 0;
}

#endif

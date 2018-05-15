#include <stdio.h>
#include <stdlib.h>
#define ex1


/*
1 – Escreva um programa que converta uma velocidade expressa em km/h para m/s e vice versa.
 Crie um menu com as duas opções de conversão e com uma opção para finalizar o programa. O
  usuário poderá fazer quantas conversões desejar, sendo que o programa só será finalizado
  quando a opção de fim for escolhida.*/

  #ifdef ex1


  int main()

  {
     float velocidade;
     float resultado;
     int opcao;
     int sair;

     printf("*****Programa Conversao de Velocidade*****\n");
     printf("************ESCOLHA SUA OPCAO*************\n");


        while(sair!=3){

        printf("Digite 1 para converter de km/h para m/s\n");
        printf("Digite 2 para converter de m/s para km/h\n");
        printf("Digite 3 para sair\n");
        scanf("%d",&opcao);
        getchar();

         switch(opcao)
            {

            case 1:
                {
                printf("Informe a velocidade em km/h: ");
                scanf("%f",&velocidade);
                printf("A velocidade em convertida é: %.2f m/s\n" ,resultado = velocidade/3.6);
                printf("\n");
                break;

                }
            case 2:
                {
                printf("Informe a velocidade em m/s: ");
                scanf("%f",&velocidade);
                printf("A velocidade em convertida é: %.2f m/s\n" ,resultado = velocidade*3.6);
                printf("\n");
                break;
                }
             case 3:
                {
                 return 0;
                }
             default:
             {
                 printf("\n Opcao Invalida!");

             }

            }

        }
}
#endif


/*2 - Desenvolver um programa para calcular a conta de água para a SABESP. O custo da água varia
dependendo se o consumidor é residencial ou comercial. Depende também do consumo em metros cúbicos
consumidos conforme tabelas:

Residencial / Normal
faixa de consumo(m3)   agua      esgoto
         0 a 10  (minimo)   24,15     24,15
         11 a 20             3,37        3,37
         21 a 50             4,46        4,46
       acima de 50           6,04       6,04

Comercial / Normal
faixa de consumo(m3)   agua      esgoto
         0 a 10  (minimo)   48,50     48,50
       11 a 20               6,32      6,32
       21 a 50              13,80     13,80
     acima de 50            14,90     14,90

    A regra para calcular a conta de agua é:
    até 10 m3 valor minimo a ser pago.
    acima de 10 m3 multiplica-se o consumo pelo valor da tabela
    Nao esquecer que o esgoto é calculado multiplicando-se o consumo por 2
    Exemplo: consumo 30 m3. calculo: 24,15 + 10*3,37 + 10*4,46 = 62,31
             valor a pagar = 62,31*2 = 124,62

    O programa deverá ler consumo de água em metros cúbicos e o tipo de consumidor ( residencial ou comercial). Como resultado,
    imprima o calculo e o valor total a ser pago.
    Faça um loop infinito e defina uma saida.*/


    #ifdef ex2

    int main()

    {

        float consumo,pagamento;
        char opcao;

        float aguar1 = 24.15;
        float aguar2 = 3.37;
        float aguar3 = 4.46;
        float aguar4 = 6.04;

        float aguac1 = 48.50;
        float aguac2 = 6.32;
        float aguac3 = 13.80;
        float aguac4 = 14.90;

        float esgotor1 = 24.15;
        float esgotor2 = 3.37;
        float esgotor3 = 4.46;
        float esgotor4 = 6.04;

        float esgotoc1 = 48.50;
        float esgotoc2 = 6.32;
        float esgotoc3 = 13.80;
        float esgotoc4 = 14.90;


        while(opcao!= 3)
        {


        printf("Informe o tipo de consumidor\n");
        printf("Digite 1 para comercial\n");
        printf("Digite 2 para residencial\n");
        printf("Digite 3 para sair\n");
        scanf("%d",&opcao);
        getchar();


        switch(opcao)
        {


            case 1:


            {
            printf("Informe o total de consumo em metros cubicos: \n");
            scanf("%f",&consumo);

                if(consumo>0 && consumo<=10)
                    {
                     pagamento =  aguac1 + (esgotoc1*2);
                     printf("%.2f (consumo de agua)+ %.2f (esgoto) * 2 = %.2f a ser pago\n",aguac1,esgotoc1,pagamento);
                     }

                else if(consumo>=11 && consumo<=20)
                    {
                     pagamento =  (aguac2*consumo) + (consumo*esgotoc2*2);
                     printf("%.2f (consumo de agua)+ %.2f (esgoto) * 2 = %.2f a ser pago\n",aguac2,esgotoc2,pagamento);
                     }
                else if(consumo>=21 && consumo<=50)
                    {
                     pagamento =  (aguac3*consumo) + (consumo*esgotoc3*2);
                     printf("%.2f (consumo de agua)+ %.2f (esgoto) * 2 = %.2f a ser pago\n",aguac3,esgotoc3,pagamento);
                     }
               else
                    {
                     pagamento =  (aguac4*consumo) + (consumo*esgotoc4*2);
                     printf("%.2f (consumo de agua)+ %.2f (esgoto) * 2 = %.2f a ser pago\n",aguac4,esgotoc4,pagamento);
                     }
               break;
                }

            case 2:


            {
            printf("Informe o total de consumo em metros cubicos: \n");
            scanf("%f",&consumo);

                if(consumo>0 && consumo<=10)
                    {
                     pagamento =  aguar1 + (esgotor1*2);
                     printf("%.2f (consumo de agua)+ %.2f (esgoto) * 2 = %.2f a ser pago\n",aguar1,esgotor1,pagamento);
                     }

                else if(consumo>=11 && consumo<=20)
                    {
                     pagamento =  (aguar2*consumo) + (consumo*esgotor2*2);
                     printf("%.2f (consumo de agua)+ %.2f (esgoto) * 2 = %.2f a ser pago\n",aguar2,esgotor2,pagamento);
                     }
                else if(consumo>=21 && consumo<=50)
                    {
                     pagamento =  (aguar3*consumo) + (consumo*esgotor3*2);
                     printf("%.2f (consumo de agua)+ %.2f (esgoto) * 2 = %.2f a ser pago\n",aguar3,esgotor3,pagamento);
                     }
               else
                    {
                     pagamento =  (aguar4*consumo) + (consumo*esgotor4*2);
                     printf("%.2f (consumo de agua)+ %.2f (esgoto) * 2 = %.2f a ser pago\n",aguar4,esgotor4,pagamento);
                     }
                break;
                }

                case 3:

                {
                    return 0;
                }

               default:
             {
                 printf("\n Opcao Invalida!");

             }


        }
        }

    }

#endif








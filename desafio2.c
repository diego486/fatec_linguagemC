#include <stdio.h>
#include <stdlib.h>

#define ex2


/*1 – Faca uma funcao chamada ’simplifica’ que recebe como parametro o numerador e o denominador de uma fracao.
Esta funcao deve simplificar a fracao recebida dividindo o numerador e o denominador pelo maior fator possivel.
Por exemplo, a fracao 36/60 simplifica para 3/5 dividindo o numerador e o denominador por 12.
A funcao deve modificar as variaveis passadas como parametro. Faca uma funcao main
para testar esta funcao.
Dica: seja M o menor valor entre o numerador e o denominador. Para cada numero
primo de 2 ate M, divida o numerador e o denominador por este primo enquanto for
possivel.*/


#ifdef ex1

    int simplifica(int x, int y);


    int main()

    {

        int num; int dem;
        int c;
            do{

            printf("\nDigite o numerador: ");
            scanf("%d",&num);
            printf("\nDigite o denominador: ");
            scanf("%d",&dem);

            printf("a fracao e' %d/%d",num,dem);


           simplifica(num,dem);

           printf("\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);

    }
    int simplifica(int x, int y)

    {
            int resposta;
            int menor;
            int multiplo =0;
            int i;
            if(x<y)
            {
              menor =x;
            }
            else
            {
              menor = y;
            }
        for(i=1; i<=menor; i++)
        {
            if(x%i==0 && y%i==0)
            {
                multiplo = i;
            }
        }

        x=x/multiplo;
        y=y/multiplo;
        resposta = printf("\na fracao simplicada 'e: %d/%d",x,y);
        return(resposta);

    }


#endif // ex1


/*2 - Os dois digitos de verificacao do CPF (constituido de 9 digitos) sao calculados atraves
do algoritmo abaixo:
(a) Etapa 1: calculo de DV1
- Soma 1: soma dos produtos de cada digito por um peso de 2 a 10, na ordem inversa (do nono para o primeiro).
- Multiplique a soma 1 por 10 e calcule o resto da divisao do resultado por 11. Se  o resto for < 2  o DV1 será  zero,
caso contrario o DV1 e’ o proprio resto.
(b) Etapa 2: calculo de DV2
- Soma 2: soma dos produtos de cada digito por um peso de 3 a 11, tambem na ordem inversa.
- Adicione a Soma 2 o dobro do DV1, multiplique por 10 e calcule o resto da divisao do resultado por 11.
Se der 10, DV2 e’ zero, caso contrario o DV2 e’ o proprio resto.
(c) Etapa 3: Multiplique DV1 por 10, some com DV2 e voce tem o numero de controle
do CPF.

Exemplo: para o CPF 398 136 146, temos:
- Etapa 1: 2x6 + 3x4 + 4x1 + 5x6 + 6x3 + 7x1 + 8x8 + 9x9 + 10x3 = 258
2580 mod 11 = 6, portanto, DV1 = 6
- Etapa 2: 3x6 + 4x4 + 5x1 + 6x6 + 7x3 + 8x1 + 9x8 + 10x9 + 11x3 = 299
(299 + 6x2)x10 mod 11 = 3150 mod 11 = 8, portanto DV2 = 8.*/

#ifdef ex2
main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,dv1,dv2;
    int c;
    do{

    printf("Digite o seu CPF sem os 2 ultimos digitos!!\n");

    printf("digite o 1 digito : ");
    scanf("%d",&n1);
    printf("digite o 2 digito : ");
    scanf("%d",&n2);
    printf("digite o 3 digito : ");
    scanf("%d",&n3);
    printf("digite o 4 digito : ");
    scanf("%d",&n4);
    printf("digite o 5 digito : ");
    scanf("%d",&n5);
    printf("digite o 6 digito : ");
    scanf("%d",&n6);
    printf("digite o 7 digito : ");
    scanf("%d",&n7);
    printf("digite o 8 digito : ");
    scanf("%d",&n8);
    printf("digite o 9 digito : ");
    scanf("%d",&n9);

    dv1 = v1(n1,n2,n3,n4,n5,n6,n7,n8,n9);
    dv2 = v2(n1,n2,n3,n4,n5,n6,n7,n8,n9,dv1);

    printf("\nSeu CPF = %d%d%d%d%d%d%d%d%d%d%d\n",n1,n2,n3,n4,n5,n6,n7,n8,n9,dv1,dv2);
    printf("Digito verificador 1 = %d\n",dv1);
    printf("Digito verificador 2 = %d\n",dv2);

    printf("\nDeseja continuar? ");
    printf("\n 1 - Sim\n");
    printf("\n 2 - Nao\n");
    scanf("%d",&c);

    }while(c==1);



}

int v1(int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8,int n9)
{
    int r;

    n1 *= 1;
    n2 *= 2;
    n3 *= 3;
    n4 *= 4;
    n5 *= 5;
    n6 *= 6;
    n7 *= 7;
    n8 *= 8;
    n9 *= 9;

    r = (n1+n2+n3+n4+n5+n6+n7+n8+n9);
    r = r%11;

    if(r<2)
    {
        r=0;
    }

    return r;
}

int v2(int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8,int n9,int dv1)
{
    int r;

    n1 *= 0;
    n2 *= 1;
    n3 *= 2;
    n4 *= 3;
    n5 *= 4;
    n6 *= 5;
    n7 *= 6;
    n8 *= 7;
    n9 *= 8;
    dv1 = dv1*9;

    r = n1+n2+n3+n4+n5+n6+n7+n8+n9+dv1;
    r = r%11;

    if(r==10)
    {
        r=0;
    }
    return r;
}

#endif // ex2

//http://ghiorzi.org/DVnew.htm  ---> fórmula do CPF

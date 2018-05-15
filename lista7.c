#include <stdio.h>
#include <stdlib.h>

enum boolean {true = 1, false = 0};
typedef enum boolean bool;

#define ex3

/*1 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main().*/

    #ifdef ex1


    int soma(int a,int b);
    int subtrai(int a,int b);
    int multiplica(int a,int b);
    int divide(int a,int b);

    main()

    {
        int num1, num2;
        char c;


        do{
        printf("\ndigite o primeiro termo: ");
        scanf("%d",&num1);

        printf("\ndigite o segundo termo: ");
        scanf("%d",&num2);


        printf("\nresultado da soma e': %d",soma(num1, num2));
        printf("\nresultado da subtracao e': %d",subtrai(num1, num2));
        printf("\nresultado da multiplicacao e': %d",multiplica(num1, num2));
        printf("\nresultado da divisao e': %d",divide(num1, num2));

        printf("\n\nDeseja continuar?");
        printf("\n1 para sim");
        printf("\n2 para nao\n");
        scanf("%d",&c);
        }while(c==1);



    }

    int soma(int a,int b)
    {
        int r;
        r=a+b;
        return(r);
    }
    int subtrai(int a,int b)
    {
        int r;
        r=a-b;
        return(r);
    }
    int multiplica(int a,int b)
    {
        int r;
        r=a*b;
        return(r);
    }
    int divide(int a,int b)
    {
        int r;
        r=a/b;
        return(r);
    }
    #endif // ex1

/*2 - Reescreva o programa do exercicio anterior para receber via teclado n
    valores. Os n valores nao sao definidos previamente.*/
        #ifdef ex2


    main(){
    int x,y,z;
    while(1){
    printf("\nDigite o primeiro numero: ");
    scanf("%d",&x);
    printf("Digite o segundo numero: ");
    scanf("%d",&y);

    z=somar(x,y);
    printf("\n-----------\nSoma: %d\n",z);

    z=subtrair(x,y);
    printf("Subtracao: %d\n",z);

    z=multiplicar(x,y);
    printf("Multiplicacao: %d\n",z);

    z=dividir(x,y);
    printf("Divisao: %d\n",z);
    }
}

int somar(x,y){
    int z=x+y;
    return(z);
}

int subtrair(x,y){
    int z=x-y;
    return(z);
}

int multiplicar(x,y){
    int z=x*y;
    return(z);
}

int dividir(x,y){
    int z=x/y;
    return(z);
}




#endif // ex2

/*3 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch).*/


    #ifdef  ex3

    main(){
    int x,y,z;
    char c;

    while(1){

    printf("\nDigite: ");
    scanf("%d",&x);

    getchar();
    printf("Operador: ");
    scanf("%c",&c);

    printf("Digite: ");
    scanf("%d",&y);


    switch(c){
    case '+':
    z=somar(x,y);
    printf("\n-----------\nSoma: %d\n",z);
    break;

    case '-':
    z=subtrair(x,y);
    printf("Subtracao: %d\n",z);
    break;

    case '*':
    z=multiplicar(x,y);
    printf("Multiplicacao: %d\n",z);
    break;

    case '/':
    z=dividir(x,y);
    printf("Divisao: %d\n",z);
    break;

    default: printf("caractere invalido\n");
    break;
    }

  }

}

int somar(x,y){
    int z=x+y;
    return(z);
}

int subtrair(x,y){
    int z=x-y;
    return(z);
}

int multiplicar(x,y){
    int z=x*y;
    return(z);
}

int dividir(x,y){
    int z=x/y;
    return(z);
}




#endif // ex3



/*4 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return)

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/

   #ifdef ex4

    char vetor[]={'b','d','f','h','j','k','m','o','q','s','u','w','y'};
    char pesquisa(char b);

    int main()
    {
        char a;

        printf("Digite um caracater: ");
        scanf("%c",&a);
        getchar();

     pesquisa(a);
    }

    char pesquisa(char b)
    {
        char resposta;
        int i;
        int cont = 0;
        for(i=0; i<=13; i++)
        {
            if(vetor[i]==b)
                {
                cont++;
                }
        }
        if(cont>0)
        {
            resposta = printf("Caracter contido no vetor");
        }
        else
        {
            resposta = printf("Caracater nao contido no vetor");
        }

        return(resposta);
    }


    #endif // ex4


/*5 - Escreva um programa que receba na funcao main() 2 strings de ate' 10 caracteres.
    Escreva uma funcao que compare estas 2 strings e retorne se sao IGUAIS 1 ou
    DIFERENTES 0. Se forem DIFERENTES, retorne 2 se a 1. string for maior que a 2.
    e 3 se a 2. string for maior que a 1.. Declare as strings como variavel global. */

    #ifdef ex5


    #endif // ex5


/*6 - Escreva um programa que recebe 2 valores X e Z na função main(). Escreva uma
    função que receba por parametro os 2 valores X e Z, calcule e retorne o
    resultado de X exponencial Z para o programa principal.
    ATENCAO: nao utilize nenhuma funcao pronta de exponenciacao.*/


    #ifdef ex6

    int exponencial(int a, int b);

    main()

    {

        int num, exp;
        int c;
            do{


        printf("\nDigite o numero: ");
        scanf("%d",&num);

        printf("\nDigite o expoente: ");
        scanf("%d",&exp);

        printf("%d elevado a %d = %d",num,exp,exponencial(num,exp));
        printf("\n\nDeseja continuar? ");
        printf("\n 1 - Sim\n");
        printf("\n 2 - Nao\n");
        scanf("%d",&c);

        }while(c==1);

    }

    int exponencial(int a, int b)
    {
        int cont =0;
        int res;

        if(b == 0)
        {
            res=1;
        }
        else if(b ==1)
        {
            res=a;
        }
        else
        {
            while(cont<=b)
        {
        res = a*a;
        cont++;
        }
        }
        return(res);
    }

#endif // ex6


/*7 - Escreva um programa que receba tres valores (obrigatoriamente maiores que
    zero), representando as medidas dos tres lados de um triangulo.
    Elabore as seguintes funcoes:
     - Determine se esses valores formam um triangulo, sabendo-se que  um de
       seus lados deve ser maior que o valor absoluto (módulo) da diferença
       dos outros dois lados e menor que a soma dos outros dois lados.
       Veja o resumo da regra abaixo:
       | b - c | < a < b + c
       | a - c | < b < a + c
       | a - b | < c < a + b .
     - Determina se o triangulo e' equilatero (tem os 3 lados iguais).
     - Determina se o triangulo e' isosceles (tem 2 lados iguais).
     - Determina se o triangulo e' escaleno (tem os 3 lados diferentes).*/


     #ifdef ex7


         int triangulo(int x,int y,int z);


     main()
     {
        int a,b,c;
        int s;
            do{

        do{
            printf("\nInforme o primeiro lado: ");
            scanf("%d",&a);
        } while(a<=0);

        do{
            printf("\nInforme o segundo lado: ");
            scanf("%d",&b);
        } while(b<=0);

        do{
            printf("\nInforme o terceiro lado: ");
            scanf("%d",&c);
        } while(c<=0);


    triangulo(a,b,c);
    printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&s);

        }while(s==1);

     }

     int triangulo (int x,int y,int z)
     {
         char resposta;
         //char resposta2;

         //if(x<(y+z) && y<(x+z) && z<(x+y))
            //{
             //resposta = printf("e' triangulo ");
            //}
                if(x<(y+z) && y<(x+z) && z<(x+y) && x==y && y==z)
                {
                    resposta = printf("triangulo equilatero");
                }
                else if(x<(y+z) && y<(x+z) && z<(x+y) && x==y || x==z)
                {
                    resposta = printf("triangulo isosceles");
                }
                else if(x<(y+z) && y<(x+z) && z<(x+y))
                {
                    resposta = printf("triangulo escaleno");
                }

                else
                {
                 resposta =printf("nao e' triangulo");
                }

        return(resposta);
        //return(resposta2);



     }
     #endif // ex


/*8 - Escreva um programa que receba um numero N. Escreva uma função que
    retorne a soma dos algarismos de N!.
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos ´e 2 + 4 = 6.
*/

#ifdef ex8

int fatorial(int a);

main()
{
    int num;
    int c;
            do{


    printf("Digite um numero: ");
    scanf("%d", &num);

   // printf("a soma dos algarimos e' %d: ",fatorial(num));
    printf("a soma dos algarimos dos numeros fatoriais e' %d: ",fatorial(num));
    printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
}

int fatorial(int a)
{
    int fat=1;
    while(a!=1)
        {
         fat = fat*a;
         a--;
        }
     int soma =0;
     while (fat!=0){
        soma = soma + (fat%10);
        fat = fat/10;
     }

    return(soma);

}

#endif // ex

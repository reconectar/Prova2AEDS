#include <stdio.h>
#include <stdlib.h>

float H=0;

float q1Leitura(float nota){
    while(nota>100){
        printf("Insira uma nota menor ou igual a 100\n");
        system("pause");
        system("cls");
        printf("\nInsira a nota: ");
        scanf("%f", &nota);
    }

    return nota;
}
void q1Escrita(float totalR, float amp){
    printf("Media dos reprovados= %.2f\n" , totalR);
    printf("Amplitudo dos aprovados= %.2f\n", amp);

}

float q2a(int n){
    int i;
    float a=1, b=1, r=0;
    for(i=0;i<n;i++){
        r+=(a/b);
        b++;
        a=a+2;
    }

    return r;
}

void q2b(int n, float *r){
    int i;
    float a=1, b=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        *r+=(a/b);
        b++;
        a=a+2;
    }
}

void q2c(int n){
    int i;
    float a=1, b=1;
    for(i=0;i<n;i++){
        H+=(a/b);
        b++;
        a=a+2;
    }
}

int main()
{
    float nota,totalR=0,c=0,amp,maior,menor;
    int n;
    printf("\nINICIO Q1\n");
    printf("\nInsira a nota: ");
    scanf("%f", &nota);
    system("cls");
    if((nota>=60)&&(nota<=100)){
        maior=nota;
        menor=nota;
    }
    while(nota>0){
        nota=q1Leitura(nota);
        if((nota<60)&&(nota>=0)){
            totalR+=nota;
            c++;
        }
        if(nota>=60){
            if(nota>maior){
                maior=nota;
            }
            if((nota<menor)||(nota==60)){
                menor=nota;
            }
        }

        printf("\nInsira a nota: ");
        scanf("%f", &nota);
        system("cls");
    }
    totalR=totalR/c;
    amp=maior-menor;
    q1Escrita(totalR, amp);

    printf("\nFim Q1\n");
    system("pause");
    system("cls");


    //q2d

    printf("\nINICIO Q2\n");
    printf("\nINICIO Q2 letra a\n");
    float r=0;
    printf("\nInsira o numero de termos: ");
    scanf("%d",&n);
    r=q2a(n);
    printf("Resultado = %.2f",r);
    printf("\nFim Q2 letra a\n");
    system("pause");
    system("cls");

    printf("\nINICIO Q2 letra b\n");
    r=0;
    q2b(n,&r);
    printf("Resultado = %.2f",r);
    printf("\nFim Q2 letra b\n");
    system("pause");
    system("cls");

    printf("\nINICIO Q2 letra c\n");
    r=0;
    printf("\nInsira o numero de termos: ");
    scanf("%d",&n);
    q2c(n);
    printf("Resultado = %.2f",H);
    printf("\nFim Q2 letra c\n");
    system("pause");
    system("cls");

    return 0;
}

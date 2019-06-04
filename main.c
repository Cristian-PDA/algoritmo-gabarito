#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    //Declaracao
    char gab[10], resp[100];
    int i, nota, acmNota[10], len, cont = 0, cont2=0, cont3=0, cont4=0;

    //Inserir gabarito
    for(i=0; i<10; i++){
        printf("Digite a %ia respota do gabarito: \n", (i+1));
        scanf(" %c", &gab[i]);
        toupper(gab[i]);
    }
    while(cont<10){
        for(i=0; i<10; i++){
            printf("\nDigite as respostas do %io aluno: ", (cont+1));
            scanf(" %c", &resp[i]);
            toupper(resp[i]);
        }
        nota=0;
        for(i=0; i<10; i++){
            if(resp[i]==gab[i]){
               nota++;
            }
        acmNota[cont]=nota;
        }
        printf("\n==> RESPOSTA do %io Aluno:", (cont4+1));
        for(i=0; i<10; i++){
            printf(" %c", resp[i]);
        }
        printf("\n==> GABARITO do %io Aluno:", (cont4+1));
        for(i=0; i<10; i++){
            printf(" %c", gab[i]);
        }
        printf("\n==> Nota do %io aluno eh: %i \n", (cont2+1), acmNota[cont3]);
        cont4++;
        cont3++;
        cont2++;
        cont++;
        }
   return 0;
    }

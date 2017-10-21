#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "menu.h"
#include "vetor.h"



void aguarda_enter(){
    printf("\n\nDigite <enter> para continuar...");
    getchar();
    getchar();
}

void imprime_menu(){
    system("cls");

    printf("/_______________ TESTE DE ORDENA��O_______________\\\n");
    printf("|                                                  |\n");
    printf("|********************* OP��ES *********************|\n");
    printf("|                                                  |\n");
    printf("| 1 - Iniciar Teste                                |\n");
    printf("| 0 - Sair                                         |\n");
    printf("|                                                  |\n");
    printf("\\--------------------------------------------------/\n");
}

int solicita_opcao(){
    int opt, cont = 0;

    do{ //Roda do while at� digitar uma op��o v�lida.
        if(cont > 0){
            printf("\nOp��o inv�lida! Digite a op��o desejada: ");
            scanf("%d", &opt);
        }else{
            printf("\nDigite a op��o desejada: ");
            scanf("%d", &opt);
        }

        cont++;
    }while(opt < 0 || opt > 4);

    return opt;
}

void redireciona_para_opcao(int opt){
    int dados, i;
    int *vetor_desordenado;

    int *vetor_insertion_desordenado;

    switch(opt){ //Verifica qual op��o foi selecionada e redireciona para m�dulos respons�veis pela execu��o.
        case 1:
            system("cls");
            printf("/_______________ TESTE DE ORDENA��O_______________\\\n");
            printf("\n\nSelecione a quantidade de dados:");
            vetor_desordenado = gera_dados();
            vetor_insertion_desordenado = vetor_desordenado;
            vetor_insertion(vetor_insertion_desordenado);
            aguarda_enter();

        break;

    }
}

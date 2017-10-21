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

    printf("/_______________ TESTE DE ORDENAÇÃO_______________\\\n");
    printf("|                                                  |\n");
    printf("|********************* OPÇÕES *********************|\n");
    printf("|                                                  |\n");
    printf("| 1 - Iniciar Teste                                |\n");
    printf("| 0 - Sair                                         |\n");
    printf("|                                                  |\n");
    printf("\\--------------------------------------------------/\n");
}

int solicita_opcao(){
    int opt, cont = 0;

    do{ //Roda do while até digitar uma opção válida.
        if(cont > 0){
            printf("\nOpção inválida! Digite a opção desejada: ");
            scanf("%d", &opt);
        }else{
            printf("\nDigite a opção desejada: ");
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

    switch(opt){ //Verifica qual opção foi selecionada e redireciona para módulos responsáveis pela execução.
        case 1:
            system("cls");
            printf("/_______________ TESTE DE ORDENAÇÃO_______________\\\n");
            printf("\n\nSelecione a quantidade de dados:");
            vetor_desordenado = gera_dados();
            vetor_insertion_desordenado = vetor_desordenado;
            vetor_insertion(vetor_insertion_desordenado);
            aguarda_enter();

        break;

    }
}

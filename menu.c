#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "menu.h"
#include "insertionSort.c"



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
    int x;

    switch(opt){ //Verifica qual opção foi selecionada e redireciona para módulos responsáveis pela execução.
        case 1:
            system("cls");
            printf("/_______________ TESTE DE ORDENAÇÃO_______________\\\n");
            printf("\n\nSelecione a quantidade de dados:");
            gera_dados();
            Ordena_insertionSort(**ist, **dados);
            aguarda_enter();

        break;

    }
}
void insertionSort(int **dados){
    int *ist;
    ist = malloc(sizeof(int) *dados);
}

void gera_dados(){
    int i,num;

    printf("\n 1>> 1.000 \t 2>> 5.000 \t 3>> 10.000 \t 4>> 20.000 \t 5>> 50.000 \t 6>> 100.000 \t 0>> Voltar \n\n -> ");
    scanf("%d", &num);
    switch(num){

        case 1:
            num = 1000;
        break;
        case 2:
            num = 5000;
        break;
        case 3:
            num = 10000;
        break;
        case 4:
            num = 20000;
        break;
        case 5:
            num = 50000;
        break;
        case 6:
            num = 100000;
        break;
        default:
            printf("\n\n OPÇÃO INVÁLIDA!!!");
        break;

    }

    int *dados = malloc(sizeof(int) *num);
    for(i =0; i < num; i++){
        dados[i] = rand();
    }

}

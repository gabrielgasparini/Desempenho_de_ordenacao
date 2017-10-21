                        #include <stdio.h>
# include <stdlib.h>
# include <string.h>


int main (){

int opcao, opcao2;
int i, j, n=10, aux, intervalo=1, k=0;

//vetor a ser ordenado
int vetor[]={19,18,14,37,23,40,29,64,11,30};

//vetor que recebe ordenação
int troca[0];


    //laço de repetição do menu principal
	do{

			// Primeiro Menu para escolha de opушes
                printf("\n\t\t=================================\n");
				printf("\n\t\t\t\tMENU 1\n");
                printf("\n\n\t\t0.CONTINUAR\n");
    		    printf("\n\n\t\t1. SAIR\n");
    		    printf("\n\t\t=================================\n");
    		    scanf("%i", &opcao);

      if (opcao == 0){

		do {

            system("cls");
		 // Segundo Menu para escolha de opушes
			 printf("\n\n");
		     printf("\t=============MENU 2================\n");
             printf("\n\n");
		     printf("\tEXIBICAO DE DADOS DOS VETORES\n");
             printf("\n\n");
             printf("\t1 = EXIBIR VETOR DESORDENADO\n");
             printf("\t2 = EXIBIR NOVO VETOR ORDENADO\n");
             printf("\t3 = EXIBIR OS DOIS VETORES\n");
             printf("\t4 = VOLTAR AO MENU ANTERIOR\n");
             printf("\n");
			 printf("\t====================================\n");
		     scanf("%d", &opcao2);

		   // Variрvel de controle do Segundo Menu de opушes
        switch(opcao2){


			 case 1:
            printf("\tEXIBICAO DE DADOS DO VETOR DESORDENADO\n\n");
           // Exibição do vetor principal(desordenado)
            for(k=0;k<n;k++){
            printf("\t\tVETOR[%d]\n", vetor[k]);
            }
            system("pause");
            break;

            // Exibição do vetor ordenado
			case 2:
            printf("\tEXIBICAO DE DADOS DO VETOR ORDENADO\n\n");

            //ciclo de repetição do vetor
            while(intervalo < n){

            //aux2 define intervalo do vetor de 3 em 3
            intervalo = (3*intervalo)+1;
            }

            //ajuste do intervalo recebendo 1
            intervalo = (intervalo-1)/3;


            //ordenação com intervalo valendo 1 dentro do laço
            while(intervalo > 0) {
            for(j = intervalo;j<n;j++){
            (aux = troca[j]);

            //
            i = j - intervalo;

            //laço de ordenação
             while(i>=0 && aux <vetor[i]){
             vetor[i+intervalo] = vetor[i];
              i = i - intervalo;
                      }
               vetor[i+intervalo]=aux;
               }
                intervalo=(intervalo-1)/3;
          }//fechamento do 1ºwhile

       printf("\n\n");
       for(j=0;j<n;j++){
       printf("\tORDENADO[%d]\n", troca[j]);
       }
       system("pause");

       break;

             //Exibição do dois vetores (ordenado e desordenado)
			 case 3:
                 vetor[k]==0;
			     printf("\tEXIBICAO DE DADOS DO VETOR DESORDENADO\n\n");
			     for(k=0;k<n;k++){
                printf("\tVETOR[%d]\n", vetor[k]);
                }
                printf("\n");

                //ciclo de repetição do vetor
                while(intervalo < n){

                //aux2 define intervalo do vetor de 3 em 3

                intervalo = (3*intervalo)+1;  //intervalo = 4 neste momento

                }

                 intervalo = (intervalo-1)/3;

         while(intervalo > 0) {
                for(j = intervalo;j<n;j++){
                (aux = troca[j]);
                 i = j - intervalo;

             while(i>=0 && aux <vetor[i]){
                   vetor[i+intervalo] = vetor[i];
                  i = i - intervalo;
             }

               vetor[i+intervalo]=aux;
             }
              intervalo = (intervalo-1)/3;
      }
         printf("\t====================================\n");
         printf("\tEXIBICAO DE DADOS DO VETOR ORDENADO\n\n");
             for(j=0;j<n;j++){
             printf("\tORDENADO[%d]\n", troca[j]);
         }

            system("pause");
			 break;

			 //Opусo de Retorno ao Menu Principal
			 case 4:
			 system("cls");
             printf("\n");
		     printf("\t====================================");
	         printf("\n");
             printf("\n\tRETORNANDO AO MENU PRINCIPAL.......\n\n");
             system("pause");
             system("cls");
             break;


			 //Opусo de Alerta de que Nenhuma opусo do Segundo Menu foi escolhida
			 default:
             printf("Digite uma opcao valida\n");

		  }

         //Opсão de controle do primeiro Menu
		 }while (opcao2 != 4);

		}
		if(opcao == 1){
		system("cls");
		printf("\n");
		printf("\t====================================");
	    printf("\n");
	    printf("\n\t\tATE MAIS, SAINDO........\n");
		system("pause");
		break;

		}

	} while ((opcao >= 0)||(opcao <= 1));

}

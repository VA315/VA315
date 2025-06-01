#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main(){
int matriz [LINHAS][COLUNAS];

int soma = 0;

        for(int i = 0; i < LINHAS;i++){
        for(int J = 0; J < COLUNAS; J++){
    


  soma++;
  matriz[i] [J] = soma;
  printf("%d", matriz[i][J]);

}

printf("\n");
  
}      
return 0;

}





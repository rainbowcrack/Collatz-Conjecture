#include <stdio.h>
#include <stdlib.h>
#define MAX 500
// codigo para listar a conjectura de collatz
// utilizando o mesmo codigo do even or odd

void collatz(int num1, int vetor[], int *tamanho){

  while (num1 != 1) {
      
    vetor[*tamanho] = num1; // armazena o numero atual no vetor
    (*tamanho)++;
    
    // condicao par do even or odd
    if (num1 % 2 == 0) {
      
      // premissa do Collatz par
      num1 = num1 / 2;
    }
      
      // else nao precisa declarar impar
      // premissa do Collatz impar (3n+1)
    else {
      num1 = (3 * num1) + 1;
    }
  }
  vetor[*tamanho] = 1; // Adiciona o 1 ao vetor
  (*tamanho)++;  
}

// funcao para entrada
int input(){
  
  int num1 = 0;

  printf("\nDigite um número para a Conjectura de Collatz: ");
  scanf("%d", &num1);
  
  return num1;
}

int main(void) {
    // declarar variaveis e vetores
    int num1 = input();
    int vetor[MAX];
    int tamanho = 0;
    
    // chamar funcoes
    collatz(num1, vetor, &tamanho);
    
     // Exibe os resultados
    printf("Sequencia da Conjectura de Collatz: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d, ", vetor[i]);
    }
    
    // o intervalo eh tamanho -1, para saber a quantidade de operacoes
    printf("\n\nQuantidade de Operacoes: %d\n", tamanho-1);
    
  return 0;
}

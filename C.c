#include <stdio.h>
#include <stdlib.h>
// código para listar a conjectura de collatz
// utilizando o mesmo código do even or odd

int main(void) {
  // definição de variável "aberta" para input
  int num1;
  
  // entrada do user
  printf("Digite um número para a Conjectura de Collatz: ");
  scanf("%d", &num1);
  
  // loop para retornar o cálculo até o resultado for 1, sendo a condição diferente para o loop
  while (num1 != 1) {
    
    // condição par do even or odd
    if (num1 % 2 == 0) {
      
      // premissa do Collatz par
      num1 = num1 / 2;
    }
      
      // else não precisa declarar ímpar
      // premissa do Collatz ímpar
    else {
      num1 = 3 * num1 + 1;
    }
    
    // listagem dos números no loop
    printf("%d \n", num1);
  }
  return 0;
}

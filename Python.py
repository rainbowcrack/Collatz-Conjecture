# código para listar a conjectura de collatz, mas em python. 
n = int(input("Digite um número para a Conjectura de Collatz: "))
# loop
while n != 1:
    # condicional dentro do loop para o caso n/2 e 3n+1
    if n%2 == 0:
      n = n / 2
    else:
      n = 3 * n + 1  
    #listagem dos números no loop
    print(round(n,3))

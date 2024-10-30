def main():
    def collatz(num):
        vetor = []
        
        while num != 1:
            vetor.append(num)  # Armazena o número atual no vetor
            if num % 2 == 0:
                num = num // 2  # Número par
            else:
                num = 3 * num + 1  # Número ímpar (3n + 1)
        vetor.append(1)  # Adiciona o 1 ao vetor
        
        return vetor
    
    def input_numero():
        num = int(input("Digite um número para a Conjectura de Collatz: "))
        
        return num    
    
    num1 = input_numero()
    vetor = collatz(num1)
        
    # Exibe os resultados
    print("Sequência da Conjectura de Collatz:", ", ".join(map(str, vetor)))
    print("Quantidade de Operações:", len(vetor) - 1)

main()

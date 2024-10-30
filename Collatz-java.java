// importacao de libs de leitura, array e lista
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Collatz {
    public static List<Integer> collatz(int num) {
        List<Integer> vetor = new ArrayList<>();
        while (num != 1) {
            vetor.add(num);  // Armazena o numero atual no vetor
            if (num % 2 == 0) {
                num /= 2;  // Numero par
            } else {
                num = 3 * num + 1;  // Numero impar (3n + 1)
            }
        }
        vetor.add(1);  // Adiciona o 1 ao vetor
        return vetor;
    }
    
    // leitura do teclado
    public static int inputNumber() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite um numero para a Conjectura de Collatz: ");
        return scanner.nextInt();
    }

    public static void main(String[] args) {
        int num1 = inputNumber();
        List<Integer> vetor = collatz(num1);
        
        // Exibe os resultados
        System.out.println("Sequencia da Conjectura de Collatz: " + vetor);
        System.out.println("Quantidade de Operacoes: " + (vetor.size() - 1));
    }
}

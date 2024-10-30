#include <iostream>
#include <vector>
using namespace std;

vector<int> collatz(int num) {
    vector<int> vetor;
    while (num != 1) {
        vetor.push_back(num);  // Armazena o numero atual no vetor
        if (num % 2 == 0) {
            num /= 2;  // Numero par
        } else {
            num = 3 * num + 1;  // Numero impar (3n + 1)
        }
    }
    vetor.push_back(1);  // Adiciona o 1 ao vetor
    return vetor;
}

int inputNumber() {
    int num;
    cout << "Digite um numero para a Conjectura de Collatz: ";
    cin >> num;
    return num;
}

int main() {
    int num1 = inputNumber();
    vector<int> vetor = collatz(num1);
    
    // Exibe os resultados
    cout << "Sequencia da Conjectura de Collatz: ";
    for (int n : vetor) {
        cout << n << " ";
    }
    cout << "\nQuantidade de Operacoes: " << (vetor.size() - 1) << endl;
    
    return 0;
}

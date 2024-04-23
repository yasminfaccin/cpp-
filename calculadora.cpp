#include <iostream>
using namespace std;

int main(){
    int num1, num2, resultado, operacao;
    int num3 = 1;
    char repeat;

    do{
        cout << " digite 2 numeros na qual voce quer fazer uma operacao: ";
        cin >> num1 >> num2;
        cout << " digite 1 para somar, 2 para multiplicar, 3 para dividir e 4 para potência\n";
        cin >> operacao;

        switch (operacao){
            case 1:
                resultado = num1 + num2;
                cout << " o resultado da soma é: " << resultado;
                break;
            case 2:
                resultado = num1 * num2;
                cout << " o resultado da multiplicação é: " << resultado;
                break;
            case 3:
                if (num2 == 0) {
                    cout << "Erro: divisão por zero!\n";
                } else {
                    resultado = num1 / num2;
                    cout << " o resultado da divisão é: " << resultado;
                }
                break;
            case 4:
                resultado = num1;
                while (num3 < num2){
                    resultado = resultado * num1;
                    num3 = num3 + 1;
                }
                cout << " o resultado da potencia é: " << resultado;
                break;
            default:
                cout << "Operação inválida! Tente novamente.\n";
                break;
        }

        cout << "\nDeseja fazer uma nova operação? (s/n) ";
        cin >> repeat;

    } while (repeat == 's' || repeat == 'S');

    return 0;
}

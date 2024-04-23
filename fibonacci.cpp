#include <iostream>
using namespace std;

int main() {
  
  int num1, num2, num3, quantidadef, qntin;
  num1 = 1;
  num2 = 1;
  num3 = num1 + num2;
  qntin = num1;

    cout << " quantas vezes sera repetido?: \n";
    cin >> quantidadef;

    cout << num1 << "\n" << num1 << "\n";
      
  while (qntin <= quantidadef) {
    num3 = num1 + num2;
    cout << num3 << "\n";
    num2 = num1;
    num1 = num3;
    qntin = qntin + 1;
    
  }
}

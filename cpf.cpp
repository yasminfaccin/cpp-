#include <iostream>
using namespace std;

int main()
{
  int D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11;
  int Cpf;
    cout<< "Digite seu cpf sem os digitos verificadores: "; // pedindo os valores para a pessoa que sao validos
    cin>> Cpf;

    if (Cpf <= 9999999 ){
        cout<<"CPF invalido, numero de digitos irregular ";
    }else if (Cpf >= 1000000000){
       cout<<"CPF invalido, numero de digitos irregular ";
    }else {
      D1 = Cpf/100000000;  // separando os digitos do cpf
      D2 = (Cpf/10000000)% 10;
      D3 = (Cpf/1000000)% 10;
      D4 = (Cpf/100000)% 10;
      D5 = (Cpf/10000)% 10;
      D6 = (Cpf/1000)% 10;
      D7 = (Cpf/100)% 10;
      D8 = (Cpf/10)% 10;
      D9 = Cpf% 10;
      
      D10 = 11- ((D1*10 + D2*9 + D3*8 + D4*7 + D5*6 + D6*5 + D7*4 + D8*3 + D9*2)%11); //calculo para descobrir o primeiro numero vericifacor
      if(D10 < 2){
      D10 = 0;
      }
      if(D10 > 9){  
       D10 = 0;
      }  
      D11 = 11- ((D1*11 + D2*10 + D3*9 + D4*8 +D5*7 + D6*6 + D7*5 + D8*4 + D9*3 + D10*2 )%11); //calculo para descobrir o segundo digito verificador    

      if(D11 < 2){
        D11 = 0;
      }
      if(D11 > 9){
        D11 = 0;
      }
      cout<< Cpf << "-" << D10 << D11 << "\n"; //devolvendo o cpf com os digitos verificadores
    }
}  

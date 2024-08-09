#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {

  int opcao;
  int PosicaoCorreta = 0;
  int NumErrados = 0;
  int chance = 10;

  int num1 = rand() % 6 + 1; //gerador de numeros
  int num2 = rand() % 6 + 1;
  int num3 = rand() % 6 + 1;
  int num4 = rand() % 6 + 1;
  
  for(int add = 1; add < 2;){ // looping para o jogo funcionar ate selecionar para sair

    cout << "\n bem vindo ao jogo mastermind, selecione uma opção\n";
    cout << " 1 - sobre \n 2 - jogo \n 3 - sair\n";
    cin >> opcao;
    
    switch(opcao){ // selecionando o modo
      case 1: // sobre o jogo
        cout << "\n jogo desenvolvido por: Yasmin T Faccin\n maio/2024 \n professor: Rafael Ballottin Martins\n";
       
        add = 1;
      break;
      
      case 2: // jogo
        srand(time(0));
        while (num1 == num2 || num1 == num3 || num1 == num4){ //impedindo que sejam numeros iguais
            num1 = rand() % 6 + 1;
        }
        while (num2 == num3 || num2 == num4){
            num2 = rand() % 6 + 1;
        }
        while (num3 == num4){
             num3 = rand() % 6 + 1;
        }

        int palpite1, palpite2, palpite3, palpite4;

        while(chance > 0){ //determinando apenas 10 tentativas
          cout << "\n Digite os numeros de 4 números de 1 a 6 (separados por espaços): ";
          cin >> palpite1 >> palpite2 >> palpite3 >> palpite4;
          
          if(palpite1 == num1){ //verificando se os numeros estao corretos
              PosicaoCorreta++;

          }else if (palpite1 == num2 || palpite1 == num3 || palpite1 == num4) {
              NumErrados++;

          }
          if(palpite2 == num2){
              PosicaoCorreta++;

          }else if (palpite2 == num1 || palpite2 == num3 || palpite2 == num4){
              NumErrados++;

          }
          if(palpite3 == num3){
              PosicaoCorreta++;

          }else if (palpite3 == num1 || palpite3 == num2 || palpite3 == num4){
            NumErrados++;

          }
          if(palpite4 == num4){
            PosicaoCorreta++;
             }else if (palpite4 == num1 || palpite4 == num2 || palpite4 == num3) {
                NumErrados++;

            }
          cout << "\n numeros na posição correta: " << PosicaoCorreta << " \n números certos na posição errada " << NumErrados << "\n"; //devolvendo pro usuario acertos
          PosicaoCorreta = 0;// zerando os valores da variavel
          NumErrados = 0;

          if(num1 == palpite1 && num2 == palpite2 && num3 == palpite3 && num4 == palpite4){
            cout << "parabens, você ganhou \n"; // o jogo acaba antes de 10 tentativas se acertar a senha
            chance = 0;
          }
          chance --;
       }
        add=1;
      break;
        
      case 3: // sair

        add=3;
      break;
    }
  }
  cout << " obrigado por jogar";
}

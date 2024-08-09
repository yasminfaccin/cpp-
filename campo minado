#include <iostream>
#include <locale.h>
#include <cstdlib>  // Para srand() e rand()
#include <ctime>    // Para time()

using namespace std;

// definir o tamanho da matriz e quantidade de bombas
#define numl 3 
#define numc 4
#define numBombas numl * numc/2

int main() {
    int opcoes;
    do{   
        cout << "\nBem-vindo ao campo minado, selecione uma das Opções:\n1-jogar\n2-infos\n3-sair\n";
        cin >> opcoes;
        
        
        if(opcoes > 3 || opcoes < 0){ //impede o usuario de digitar uma opcao invalida
            do{
                cout << "opcao invalida, tente novamente ";
                cin >> opcoes;
            }while (opcoes > 3 || opcoes < 0);
        }
        switch(opcoes) {
            case 1: {
                srand(time(NULL));

                int mat[numl][numc] = {}, linha, coluna, total = numl * numc - numBombas, matb[numl][numc], palpite_linha, palpite_coluna, contador, linha2, coluna2, t = numl * numc, c_total = 0, l_total = 0, tentativas = 0;
                bool jogoTerminado = false;

                for (int i = 0; i < numBombas; i++) { // gera bombas aleatoriamente
                    do{
                        linha = rand() % numl;
                        coluna = rand() % numc;
                    } while (mat[linha][coluna] == 9); // Verifica se já tem bomba na posição
                    mat[linha][coluna] = 9; // as casas com bomba são representadas pelo valor 9
                }

                for (int i = 0; i < numl; i++) { //matriz que aparece para o jogador
                    for (int j = 0; j < numc; j++) {
                        matb[i][j] = -1;
                    }
                }
                cout<<"\033c";
                cout << endl << "Bem-vindo ao jogo, você está jogando em um campo com " << t << " casas, e possui " << numBombas << " bombas, será que você consegue encontrar todas as casas sem bombas? Boa sorte!" << endl;

                for (int i = 0; i < numc; i++) { //imprime cordenada linha
                    c_total += 1; 
                    cout << "\t" << c_total;
                }
                cout << endl;
                c_total = 0;

                for (int i = 0; i < numl; i++) { //imprime a matriz para o usuario
                    l_total += 1; //imprime coordenada coluna
                    cout << l_total << "\t";
                        for (int j = 0; j < numc; j++) {
                        cout << "x" << "\t";
                  }
                  cout << endl;
                }
                l_total = 0;

                while (!jogoTerminado) {
                    cout << "Digite uma coordenada, primieiro a linha de 1 a " << numl << ":" << endl;
                    cin >> palpite_linha; // usuário escolhe a coordenada
                    cout << "Agora digite a coluna de 1 a " << numc << ":" << endl;
                    cin >> palpite_coluna;
                    palpite_linha -= 1;
                    palpite_coluna -= 1;

                    if (palpite_linha < 0 || palpite_linha >= numl || palpite_coluna < 0 || palpite_coluna >= numc) { // verificando se o usuário gerou um número válido
                        cout << "Coordenada inválida, tente novamente. \n Escolha uma que seja de " << numl << " a " << numc << ":" << endl;
                        continue;
                    }

                    if (matb[palpite_linha][palpite_coluna] != -1) { // verifica se a coordenada já foi jogada
                        cout << "Coordenada já jogada, tente novamente." << endl;
                        continue;
                    }
                    cout<<"\033c";
                    
                    if (mat[palpite_linha][palpite_coluna] == 9) { // se o jogador acertar uma bomba
                        cout << "Você acertou uma bomba na sua tentativa de numero " << tentativas << "! Fim de jogo." << endl;
                        jogoTerminado = true;
                    } else {
                        contador = 0;
                        tentativas++;

                        for (int i = -1; i <= 1; i++) { // lógica para verificar bombas próximas
                            for (int j = -1; j <= 1; j++) {
                                linha2 = palpite_linha + i; //caminha pelas casas
                                coluna2 = palpite_coluna + j;

                                if (linha2 >= 0 && linha2 < numl && coluna2 >= 0 && coluna2 < numc) { //verifica se tem bomba
                                    if (mat[linha2][coluna2] == 9 && (linha2 != palpite_linha || coluna2 != palpite_coluna)) {
                                        contador++;
                                    }
                                }
                            }
                        }
                        matb[palpite_linha][palpite_coluna] = contador; //coloca o valor encontrado na matriz
                        total--;

                        for (int i = 0; i < numc; i++) {
                            c_total += 1;
                            cout << "\t" << c_total;
                        }
                        cout << endl;
                        c_total = 0;

                        for (int i = 0; i < numl; i++) { // devole a matriz para o jogador
                            l_total += 1;
                            cout << l_total << "\t";
                            for (int j = 0; j < numc; j++) {
                                if (matb[i][j] == -1) {
                                    cout << "x\t";
                                } else {
                                    cout << matb[i][j] << "\t";
                                }
                            }
                            cout << endl;
                        }
                        l_total = 0;

                        if (total == 0) {
                            cout << "Parabéns, você ganhou o jogo, com " << tentativas << " tentativas!" << endl;
                            jogoTerminado = true;
                        } else {
                            cout << "Possuem " << contador << " bombas próximas." << endl; // devolve pro usuário a quantidade de bombas
                        }
                    }
                }
                
                break;
            }
            case 2:
                cout<<"\033c";
                cout << "Informações do jogo:\n";
                cout << "Alunos:\n 1- Yasmin Tarnovski Faccin\n 2- Lucas Leandro Batista\n 3- Mohamed\n 4- Pyerre Lima Mattar\n 5- João Victor Serpa\n" << endl << " Professor: Rafael Martins Balotini" << endl;
                                 
                break;
            case 3:
                cout<<"\033c";
                cout << "Saindo do jogo... Obrigado por jogar!\n";
                
                break;
        }       
    } while (opcoes < 3);
    return 0;
}

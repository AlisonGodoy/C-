// Nome: Adivinhe.cpp 
// Descri��o: implementa��o de jogo de adivinha��o de n�meros
//
// Bibliotecas b�sicas utilizadas
//#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
// Espa�o de nomes utilizado
using namespace std;
//programa principal

int main()
{
	int numPalpite; // variavel para o usario declarar seu numero de tentaivas
	system("cls"); // comando para Limpar a tela
	
	// Comandos para Imprimir na tela as regras do jogo - Start
	cout << "Jogo de Adivinhacao" << endl;
	cout << endl;
	cout << "Escolha o numero de palpites que voce deseja:  ";
	cin >> numPalpite;
	cout << endl;
	cout << "O numero sorteado encontra-se no intervalo de [0, 10]." << endl;
	cout << endl;
	// Comandos para Imprimir na tela as regras do jogo - End
	
	// Inicializa o gerador de n�meros rand�micos - Start
	srand( (unsigned)time( NULL ) ); 		// Sortear um n�mero entre [0,10] e armazenar na vari�vel "numero_sorteado"
	int numeroSorteado = rand() % 10; 
	// Inicializa o gerador de n�meros rand�micos - End
	
	// Declara��o de variaveis e estrutura de repeti��o - Star
	int palpiteJogador = 0;   
	int i = palpiteJogador;
	int j;
	
	for(i = 0; i < numPalpite; i++){
		
	     cout << "Tentativa... Digite um numero: ";
	     cin >> palpiteJogador;
	     
	     if(palpiteJogador == numeroSorteado){
		
		cout << endl << "Parabens !!! Voce acertou o numero sorteado !" << endl;
		
	} else if(numeroSorteado < palpiteJogador){
		
		cout << "Voce errou, o numero sorteado eh menor que o seu palpite" << endl;
		
	} else
	 
       cout << "Voce errou, o numero sorteado eh maior que o seu palpite" << endl;
}
    // Declara��o de variaveis e estrutura de repeti��o - End
   
	// Testar se o palpite do jogador � igual ao n�mero sorteado
	if(palpiteJogador == numeroSorteado){
		
		cout << endl << "Parabens !!! Voce acertou o numero sorteado !" << endl;
		
	} else{
		
		cout << "Voce errou o numero sorteado" << endl;
	}
	
	system("pause");
	return 0;
}

#include "Rede.h"
#include "Pacote.h"
#include <iostream>
using namespace std;

unsigned int rede = 0;

void Transmitir(unsigned int NumPasso, unsigned int CorCaminhao, unsigned int PosAtual, unsigned int Vel, unsigned int EstadoPista)
{
	rede = Empacotar(NumPasso, CorCaminhao, PosAtual, Vel, EstadoPista);
}

unsigned int Receber()
{
	unsigned int pacote = rede;
	cout << "Recebendo Dados" << "Passo: " << Passo(pacote) << " Posição: "
		<< Posicao(pacote) << " Velocidade: " << Velocidade(pacote) << " Pista: " << Pista(pacote) << endl;
		
	return pacote;
}

unsigned int Processar(unsigned int pacote)
{
	unsigned int PosAtual = Posicao(pacote);

	unsigned int Vel = Velocidade(pacote);

	unsigned int Oleo = Pista(pacote);

	unsigned int NovaPosicao = PosAtual + Vel - Oleo;

	return NovaPosicao;
}


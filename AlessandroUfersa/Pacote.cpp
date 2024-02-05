#include "Pacote.h"

unsigned int Empacotar(unsigned int NumPasso, unsigned int CorCaminhao, unsigned int PosAtual, unsigned int Vel, unsigned int EstadoPista)
{
	return (NumPasso << 24) | (CorCaminhao << 16) | (PosAtual << 9) | (Vel << 5) | (EstadoPista << 4);
}

unsigned int Passo(unsigned int pacote)
{
	return (pacote >> 24);
}

unsigned int Cor(unsigned int pacote)
{
	return (pacote >> 16);
}

unsigned int Posicao(unsigned int pacote)
{
	return (pacote >> 9);
}

unsigned int Velocidade(unsigned int pacote)
{
	return (pacote >> 5);
}

unsigned int Pista(unsigned int pacote)
{
	return (pacote >> 4);
}
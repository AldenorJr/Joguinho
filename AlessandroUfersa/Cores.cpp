#include "Cores.h"
#include <iostream>
using namespace std;

void AjustarCor(int CorTexto, int CorFundo)
{
	cout << "\033[38;5m" << CorTexto << "\033[48;5m" << CorFundo;
}

void ResetCor()
{
	cout << "\033[0m";
}
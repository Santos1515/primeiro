#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float salario, sal_ajustado; // Sal�rio Atual, Sal�rio Ajustado
	cout <<"\n";
	cout << "			Calculadora de reajuste de sal�rio" <<"\n";
	cout <<"\n";
	cout <<"Digite o seu sal�rio atual R$: ";
	cin >> salario;
	if (salario <= 300)
	{
		sal_ajustado = salario * 1.35;
	}
	else
	 {
		sal_ajustado = salario * 1.15;	 
	 }
	cout <<"\n";
	cout <<"O SAL�RIO FOI AJUSTADO PARA R$: ";
	cout << sal_ajustado;
    return 0;       
}
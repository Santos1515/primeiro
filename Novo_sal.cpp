#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float salario, sal_ajustado; // Salário Atual, Salário Ajustado
	cout <<"\n";
	cout << "			Calculadora de reajuste de salário" <<"\n";
	cout <<"\n";
	cout <<"Digite o seu salário atual R$: ";
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
	cout <<"O SALÁRIO FOI AJUSTADO PARA R$: ";
	cout << sal_ajustado;
    return 0;       
}
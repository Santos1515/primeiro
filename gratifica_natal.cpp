#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double H, h0, h1, natal;

	cout << "					--------------------------------------------------"<<"\n";
	cout << "					--------------------------------------------------"<<"\n";
	cout << "					     Calculadora da GRATIFICAÇÃO NATALINA"<<"\n";
	cout << "					--------------------------------------------------"<<"\n";
	cout << "					--------------------------------------------------"<<"\n";
	cout <<"\n";
	cout <<"\n";
	

	cout <<" Digite o número de HORAS EXTRAS TRABALHADAS: ";
	cin >> h1;
	cout <<"\n";
	cout <<" Digite o número de HORAS DE FALTA: ";
	cin >> h0;	
	 
H = h1 - h0;

if(H < 600){
natal = 100; 
} else if (H >= 600 && H <= 1200){
natal = 200; 
} else if (H > 1200 && H <= 1800) {
natal = 300;
} else if (H > 1800 && H < 2400) {
natal = 400 ;
} else {
natal = 500; 
}
	cout <<"\n";
	cout <<"\n";
cout << " O valor da GRATIFICAÇÃO NATALINA é de R$: ";
cout << natal;

















}
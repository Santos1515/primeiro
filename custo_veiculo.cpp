#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");
double custo_fab,custo_cliente;
custo_fab=0;
custo_cliente=0;

cout << "			Calculadora do CUSTO FINAL de Ve�culos" <<"\n";
cout <<"\n";
cout << "DIGITE O PRE�O DE CUSTO DO VE�CULO R$: ";
cin >> custo_fab;
cout <<"\n";
if (custo_fab <= 12000){
	custo_cliente = custo_fab * 1.05;
} else if (custo_fab > 12000 && custo_fab <= 25000 ){
		custo_cliente = custo_fab * 1.25;
} else{
		custo_cliente = custo_fab * 1.35;
}
cout <<"\n";
cout << "O CUSTO FINAL DO VE�CULO PARA O CONSUMIDOR � DE R$: ";
cout << custo_cliente;

 
    return 0;       
}
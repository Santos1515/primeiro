#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	string (sair);
	int codigo, unidade;
	double ValorNota, ValorNotadesc,ValorUnitario;
setlocale(LC_ALL, "Portuguese");
cout << "Digite o c�digo do produto que deseja comprar: " <<"\n";
cin >> codigo;
cout <<"\n";
cout << "Digite quantas unidades do produto que deseja comprar: " <<"\n";
cin >> unidade;
cout <<"\n";

if (codigo >= 1 && codigo <=10) 
{
ValorUnitario = 10;
} else if (codigo >= 11 && codigo <=20) 
{
ValorUnitario = 15;
} else if (codigo >= 21 && codigo <=30) 
{
ValorUnitario = 20;
} else if (codigo >= 31 && codigo <=40) 
{
ValorUnitario = 30;
} else 
{
ValorUnitario = 0;
cout << "C�DIGO INV�LIDO      -      FIM DO PROGRAMA" <<"\n";
}


if (ValorUnitario !=0) 
{
cout <<"\n";
cout <<" O PRE�O POR UNIDADE DO PRODUTO ESCOLHIDO � R$: ";
cout << ValorUnitario;
cout <<"\n";
ValorNota = ValorUnitario * unidade;
cout <<" O PRE�O TOTAL DA NOTA � DE R$: " << ValorNota;
cout <<"\n";
cout <<" O PRE�O TOTAL COM DESCONTO � DE R$: ";
if (ValorNota <= 250) 
{
ValorNotadesc = (ValorNota * (1 - 0.05));
cout << ValorNotadesc;
} else if (ValorNota > 250 && ValorNota <= 500){
ValorNotadesc = (ValorNota * (1 - 0.1));
cout << ValorNotadesc;} else
{
ValorNotadesc = (ValorNota * (1 - 0.15));


cout << ValorNotadesc;
}
}

 
    return 0;       
}
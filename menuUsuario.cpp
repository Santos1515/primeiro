#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");	
double n1=0,n2=0,n3=0,p1=1, p2=1, p3=1, resultado=0;
int opc=0;
cout << " MENU DE OPÇÕES" <<"\n";
cout << " --------------" <<"\n";
cout << "(1) MÉDIA ARITMÉTICA"  <<"\n";
cout << "(2) MÉDIA PONDERADA"  <<"\n";
cout << "(3) SAIR"  <<"\n";
cout  <<"\n";
cout << "DIGITE A SUA OPÇÃO"  <<"\n";
cin >> opc;
switch(opc){
	
case 1:
cout <<"   " <<"\n";
cout << "VOCÊ ESCOLHEU 'MÉDIA ARITMÉTICA"  <<"\n";
cout <<"\n";
cout <<"Digite a primeira nota: "  <<"\n";
cin >> n1;
cout  <<"\n";
cout << "Digite a segunda nota: "  <<"\n";
cin >> n2;
resultado =(n1 + n2) / 2;
cout  <<"\n";
cout << "A MÉDIA ARITMÉTICA É: " << resultado;
break;
        case 2:        
cout << "VOCÊ ESCOLHEU 'MÉDIA PONDERADA' " << "\n";
        cout <<"\n";
        cout << "Digite a primeira nota: " <<"\n";
        cin >> n1;
		cout <<"\n";
        cout << "Digite o PESO da primeira nota: " <<"\n";
        cin >> p1;
        cout << "Digite a segunda nota: " <<"\n";
        cin >> n2;
        cout << "Digite o PESO da segunda nota: " <<"\n";
        cin >> p2;
        cout << "Digite a terceira nota: " <<"\n";
        cin >> n3;
        cout <<"Digite o PESO da terceira nota: " <<"\n";
        cin >> p3;
        resultado = (n1*p1 + n2*p2 + n3*p3) /  (p1+p2+p3) ;
        cout <<"\n";
        cout << "A MÉDIA PONDERADA É: " << resultado;
        break;

case 3:
cout << "Você escolheu sair! Obrigado por usar nosso programa!!!" << "\n";
break;
default:
cout << "OPÇÃO INVÁLIDA" << "\n";
cout <<"______________";
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
    return 0;       
}
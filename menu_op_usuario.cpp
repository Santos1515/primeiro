#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");
// Exerc�cio 5 da V�nia; Apresenta ao usu�rio 
// um menu com quatro op��es
// Aluno: Rafael Santos
int opc;
double media,resultado, num1, num2; 
cout << "                    ============================================================" <<"\n";
cout << "                                         Bem-vindo, usu�rio" <<"\n";
cout << "                    ============================================================" <<"\n";
cout << "" <<"\n";
cout << " Digite uma op��o" <<"\n";
cout << "" <<"\n";
cout << " [1] M�dia entre os n�meros digitados" <<"\n";
cout << " [2] Diferen�a do maior pelo menor" <<"\n";
cout << " [3] Produto entre os n�meros digitados" <<"\n";
cout << " [4] Divis�o do primeiro pelo segundo" <<"\n";
cout << "" <<"\n";
cin >> opc;
switch (opc)
{
case 1:
cout << "" <<"\n";
cout << "Voc� escolheu a op��o [1]: M�dia entre os n�meros digitados" << "\n";
cout << " " <<"\n";
cout << "Digite o primeiro n�mero: ";
cin >> num1;
cout << " " <<"\n";
cout << "Digite o segundo n�mero: ";
cin >> num2;
cout << " " <<"\n";
media=num1 + num2;
media/= 2;
cout << "A m�dia dos dois valores digitados �: " << media;
break;	
case 2:
cout << "" <<"\n";
cout << "Voc� escolheu a op��o [2]: Diferen�a do maior pelo menor" << "\n";
cout << " " <<"\n";
cout << "Digite o primeiro n�mero: ";
cin >> num1;
cout << " " <<"\n";
cout << "Digite o segundo n�mero: ";
cin >> num2;
cout << " " <<"\n";
if (num1 >= num2){
resultado = num1 - num2;
}
else {
resultado = num2 - num1;
}
cout << "Diferen�a do maior pelo menor �: " << resultado;
break;
case 3:
cout << "" <<"\n";
cout << "Voc� escolheu a op��o [3] Produto entre os n�meros digitados" << "\n";
cout << " " <<"\n";
cout << "Digite o primeiro n�mero: ";
cin >> num1;
cout << " " <<"\n";
cout << "Digite o segundo n�mero: ";
cin >> num2;
cout << " " <<"\n";
resultado=num1 * num2;
cout << "O produto dos dois valores digitados �: " << resultado;
break;
case 4:
cout << "" <<"\n";
cout << "Voc� escolheu a op��o [4] Divis�o do primeiro pelo segundo" << "\n";
cout << " " <<"\n";
cout << "Digite o primeiro n�mero: ";
cin >> num1;
cout << " " <<"\n";
cout << "Digite o segundo n�mero: ";
do {
cin >> num2;
cout << " " <<"\n";
if (num2 != 0){
resultado=num1 / num2;
cout << "A divis�o dos dois valores digitados �: " << resultado;
} else {
cout << "O DIVISOR N�O PODE SER 0 (ZERO)!!! Digite um valor maior que zero" << "\n";	
}
}
while (num2==0);

break;
default:
cout << " " <<"\n";
cout << " Op��o Inv�lida      -      Programa Terminado " <<"\n";
;
}
;





    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;       
    
}
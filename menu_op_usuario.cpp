#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");
// Exercício 5 da Vânia; Apresenta ao usuário 
// um menu com quatro opções
// Aluno: Rafael Santos
int opc;
double media,resultado, num1, num2; 
cout << "                    ============================================================" <<"\n";
cout << "                                         Bem-vindo, usuário" <<"\n";
cout << "                    ============================================================" <<"\n";
cout << "" <<"\n";
cout << " Digite uma opção" <<"\n";
cout << "" <<"\n";
cout << " [1] Média entre os números digitados" <<"\n";
cout << " [2] Diferença do maior pelo menor" <<"\n";
cout << " [3] Produto entre os números digitados" <<"\n";
cout << " [4] Divisão do primeiro pelo segundo" <<"\n";
cout << "" <<"\n";
cin >> opc;
switch (opc)
{
case 1:
cout << "" <<"\n";
cout << "Você escolheu a opção [1]: Média entre os números digitados" << "\n";
cout << " " <<"\n";
cout << "Digite o primeiro número: ";
cin >> num1;
cout << " " <<"\n";
cout << "Digite o segundo número: ";
cin >> num2;
cout << " " <<"\n";
media=num1 + num2;
media/= 2;
cout << "A média dos dois valores digitados é: " << media;
break;	
case 2:
cout << "" <<"\n";
cout << "Você escolheu a opção [2]: Diferença do maior pelo menor" << "\n";
cout << " " <<"\n";
cout << "Digite o primeiro número: ";
cin >> num1;
cout << " " <<"\n";
cout << "Digite o segundo número: ";
cin >> num2;
cout << " " <<"\n";
if (num1 >= num2){
resultado = num1 - num2;
}
else {
resultado = num2 - num1;
}
cout << "Diferença do maior pelo menor é: " << resultado;
break;
case 3:
cout << "" <<"\n";
cout << "Você escolheu a opção [3] Produto entre os números digitados" << "\n";
cout << " " <<"\n";
cout << "Digite o primeiro número: ";
cin >> num1;
cout << " " <<"\n";
cout << "Digite o segundo número: ";
cin >> num2;
cout << " " <<"\n";
resultado=num1 * num2;
cout << "O produto dos dois valores digitados é: " << resultado;
break;
case 4:
cout << "" <<"\n";
cout << "Você escolheu a opção [4] Divisão do primeiro pelo segundo" << "\n";
cout << " " <<"\n";
cout << "Digite o primeiro número: ";
cin >> num1;
cout << " " <<"\n";
cout << "Digite o segundo número: ";
do {
cin >> num2;
cout << " " <<"\n";
if (num2 != 0){
resultado=num1 / num2;
cout << "A divisão dos dois valores digitados é: " << resultado;
} else {
cout << "O DIVISOR NÃO PODE SER 0 (ZERO)!!! Digite um valor maior que zero" << "\n";	
}
}
while (num2==0);

break;
default:
cout << " " <<"\n";
cout << " Opção Inválida      -      Programa Terminado " <<"\n";
;
}
;





    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;       
    
}
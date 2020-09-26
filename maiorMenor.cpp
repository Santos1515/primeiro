#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");
int maior=0, menor=0, num=1, num2=1, add=0,contador=0;
cout << "Digite cinco números inteiros positivos para calcular o maior e o menor: " <<"\n";
while (num !=0 && contador < 3 && num2 != 0){
cin >> num;
cin >> num2;
if (num < 0){
cout << "VALOR IGNORADO! NÚMEROS NEGATIVOS NÃO SERÃO CALCULADOS!!!" <<"\n";
} else if (num >= maior) {
	maior = num;
} else if (num < maior){
	menor = num;
}
if (num2 < 0){
cout << "VALOR IGNORADO! NÚMEROS NEGATIVOS NÃO SERÃO CALCULADOS!!!" <<"\n";
} if (num2 >= maior) {
	maior = num2;
} else if (menor == 0 || num2 < menor){
	menor = num2;
}









cout << "\n";
cout << " O MAIOR É: " << maior <<"\n";
cout << " O MENOR É: " << menor <<"\n";
contador++;


}









cout << "O PROGRAMA TERMINOU!!!!! ";

    return 0;       
}
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");
// Programa Definidor de faixa et�ria
// criado em 23/09/2020, �s 18:51
// Rafael Santos
// Professora V�nia
// Vari�veis
double age, age1=0, age2=0, age3=0, age4=0, age5=0, allages=0, percent=0;
int i;
for (int i = 1; i <= 8; i++){
allages++;
cout << "Digite a " << i << "� Idade: " << "\n";
cin >> age;
if (age <= 15) {
	age1++;
} else if (age >= 16 && age <= 30){
	age2++;
}else if (age >=31 && age <=45){
	age3++;
}else if (age >= 46 && age <=60) {
	age4++;
} else {
	age5++;
}
}
 
cout <<"\n";
cout << "Existe(em) " << age1 <<" Pessoa(s) na 1� faixa et�ria (AT� 15 ANOS)" <<"\n";
cout << "Existe(em) " << age2 <<" Pessoa(s) na 2� faixa et�ria (DE 16 A 30 ANOS)" <<"\n";
cout << "Existe(em) " << age3 <<" Pessoa(s) na 3� faixa et�ria (DE 31 A 45 ANOS)" <<"\n";
cout << "Existe(em) " << age4 <<" Pessoa(s) na 4� faixa et�ria (DE 46 A 60 ANOS)" <<"\n";
cout << "Existe(em) " << age5 <<" Pessoa(s) na 5� faixa et�ria (ACIMA DE 60 ANOS)" <<"\n";
cout <<"\n";

percent= (age1 / allages) * 100;
cout << percent <<"% das Pessoas est�o na 1� faixa et�ria (AT� 15 ANOS)" <<"\n";
cout <<"\n";
percent= (age5 / allages) * 100;
cout << percent <<"% das Pessoas est�o na 5� faixa et�ria (ACIMA DE 60 ANOS)" <<"\n";




    return 0;       
}
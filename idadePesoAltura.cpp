#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");
// Programa Idade Peso e Altura
// criado em 23/09/2020, �s 19:43
// Rafael Santos
// Professora V�nia
// Vari�veis
double age=0, wt=0, ht=0;
double ppl50plus=0, meanht10and20=0, pplage10and20=0 , ppltotal=0;
double percpplwtless40=0;
int i=10;
for (i=1; i <= 5; i++){
	ppltotal++;
cout << "Digite a idade da " << i << "� pessoa" <<"\n";
cin >> age;
if (age > 50){
	ppl50plus++;
}
cout << "Digite o peso da " << i << "� pessoa" <<"\n";
cin >> wt;
if (wt < 40){
percpplwtless40++;	
}
cout << "Digite a altura da " << i << "� pessoa" <<"\n";
cin >>ht;
if (age >=10 && age <=20){
pplage10and20++;
meanht10and20 = meanht10and20 + ht;
}
}
cout << "Existe(m) " <<ppl50plus <<" pessoa(s) com mais de 50 anos" << "\n";
//calcula a m�dia das alturas das pessoas com idade entre 10 e 20 anos
meanht10and20 = meanht10and20 / pplage10and20;
cout << "A m�dia das alturas das pessoas com idade entre 10 e 20 anos � de: " << meanht10and20 << " cent�metros. " << "\n";
// Calcula a porcentagem das pessos com menos de 40 Kg entre todas as pessoas entrevistadas
percpplwtless40 = (percpplwtless40 / ppltotal) * 100;
cout << "a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas entrevistadas �: " << percpplwtless40 << "%" << "\n";
cout << pplage10and20  <<"\n";
cout << meanht10and20  <<"\n";





return 0;
}
#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");
//vari�veis
double totalyes=0, totalno=0, womenyes=0, percmenno=0;
int sex=0; 
char liked='x';
double generalmen=0;
for (int i=1;i < 11; i++){
system("cls");
cout << "Entrevistado " <<i <<" de 10" <<"\n";
	cout << "\n";
	cout << "\n";
	cout << "Qual � o seu g�nero? [digite 1 para homem ou 2 para mulher]: ";
cin >> sex;
cout << "Voc� gostou do novo produto? [digite S para SIM ou N para N�O]: ";
cin >> liked;
if (liked=='s' || liked=='S'){
totalyes++;
if (sex==2){
	womenyes++;
}	
} else if (liked=='n' || liked=='N'){
	totalno++;
}
if (sex==1){
	generalmen++;
	if (liked=='n' || liked=='N') {
		percmenno++;
	}
}
}

cout << " Resultados da pesquisa: " <<"\n";
cout <<"\n";
cout << "Pessoas que responderam SIM: " << totalyes << "\n";
cout << "Pessoas que responderam N�O: " << totalno << "\n";
cout << "MULHERES que responderam SIM: " << womenyes << "\n";
percmenno = (percmenno / generalmen) * 100;
cout << "Porcentagem de Homens que responderam N�O em rela��o ao total de homens: " << percmenno << "%" << "\n";



    return 0;       
}
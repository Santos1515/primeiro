#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
// Seção das estruturas
struct sector
{
	int sec;	
};
struct worker
{
	string name;
	int age;
	char gender;
	string cpf;
	string position;
	double wage;
	int day;
	string month;
	int year;
	int sec;
	
	
};
// Fim da seção das estruturas
int main()
{
	setlocale(LC_ALL, "Portuguese");
system ("cls");
// Variáveis
worker wk[50]; // cria o vetor para armazenar os trabalhadores;
int number = 0;
int op;
int gone = 10;
int search;
char search2;
// Fim variáveis	
do {
	cout << "1 - Cadastrar FUNCIONÁRIO" << "\n";
cout << "2 - Listar todos os FUNCIONÁRIOS" << "\n";
cout << "3 - Listar FUNCIONÁRIOS filtrando por SETOR" << "\n";
cout << "4   Listar FUNCIONÁRIOS filtrando por SEXO" <<"\n";
cout << "0   SAIR" "\n";
cout << "" << "\n";
cout << "Escolha sua opção: " <<"\n";
cin >> op;
switch (op)
{
	case 1:
	cout << "..." << "\n";	
	cout << " Digite cada informação solicitada sobre o FUNCIONÁRIO: " << "\n";
	cout << " " << "\n";
	cout << "Nome Completo: ";
	cin.ignore();
	getline(cin, wk[number].name);
	cout << " " << "\n";
	cout << "Idade: ";
	cin >> wk[number].age;
	cout << " " << "\n";
	cout << "Sexo (m  -  Masculino     f  -  Feminino): ";
	cin >> wk[number].gender;
	cout << " " << "\n";
	cout << "CPF: ";
	cin >> wk[number].cpf;
	cout << " " << "\n";
	cout << "Cargo: ";
	cin.ignore();
	getline(cin, wk[number].position);
	cout << " " << "\n";		
	cout << "Salário: ";
	cin >> wk[number].wage;
	cout << "... " << "\n";
	cout << "Dia de Nascimento: " ;
	cin >> wk[number].day;
	cout << "MÊS de nascimento: ";
 	cin >> wk[number].month;
	cout << "ANO de nascimento: ";
	cin >> wk[number].year;
	cout << "Código do SETOR: ";
	cin >> wk[number].sec;
	cout << " " << "\n";
	cout << "Cadastro realizado com sucesso!!!!" <<"\n";
	cout << " " << "\n";	
	number++;
			break;
	case 2:
		for (int i = 0; i <=number; i++)
		{
			cout << wk[i].name << "\n";
						
			
		}
		cout << "..." << "\n";
		break;

case 3:
	cout << "Digite o setor desejado para filtrar: ";
	cin >> search;
	
			for (int i = 0; i <=number; i++)
		{
			if (wk[i].sec == search)
			cout << wk[i].name << "\n";
						
			
		}
		cout << "..." << "\n";

	break;	
case 4:
	cout << "Digite o SEXO desejado para filtrar (m para masculino  |  f para feminino: ";
	cin >> search2;
	
			for (int i = 0; i <=number; i++)
		{
			if (wk[i].gender == search2)
			cout << wk[i].name << "\n";
						
			
		}
		cout << "..." << "\n";

	break;			
	

default:
	gone = 0;
}
	
} while (gone != 0);


	
return 0;
}
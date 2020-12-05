#include <iostream>
#include <locale.h>
#include <stdlib.h>
// Algor�tmo e estrutura de dados II
// Professor Ma�lson
// Passos, 04 de dezembro de de 2020, 19:05 (in�cio) 23:14 (finaliza��o)
// UEMG  -  PASSOS
// Instru��es
// Desenvolva um programa em C++ utilizando structs para cadastro de equipes para uma maratona de programa��o.
// Cada equipe � composta por um nome de identifica��o, n�vel da equipe(Iniciante ou Experiente), 
// 3 alunos titulares e um aluno reserva. Dos alunos, voc� deve salvar o nome, ano de nascimento, sexo e per�odo.
// Apresente um menu para:
// cadastrar as equipes com seus respectivos dados;
// Imprimir os dados das equipes cadastradas por n�vel.
using namespace std;
struct aluno
{
	string nome;
	int ano;
	char periodo; // coloque m para matutino ou v para vespertino
	char sexo;	 // coloque m para homem ou f para mulher
};
struct equipe
{
	string nome;
	int nivel;
	aluno titular1;
	aluno titular2;	
	aluno titular3;
    aluno reserva;	
};
int quant = 0;
	equipe equipe[101];
int op;
int sair = 1;
int i;
int main()
{
	setlocale(LC_ALL, "Portuguese");
do {
system ("cls");
	
cout << "1 - CADASTRAR UMA NOVA EQUIPE" << "\n";
cout << "2 - CONSULTAR EQUIPES POR N�VEL INICIANTE" << "\n";
cout << "3 - CONSULTAR EQUIPES POR N�VEL EXPERIENTE" << "\n";
cout << "Qualquer outra tecla para SAIR" <<"\n";
cout << "" << "\n";
cout << "Escolha sua op��o: " <<"\n";
cin >> op;
switch (op)
{
	case 1:
	cout << " Bem-vindo ao m�dulo de cadastro de equipes" << endl;
	cout << "" <<endl;
	cout << "DIGITE O NOME DA EQUIPE: " << endl;
	cin.ignore();
	getline (cin, equipe[quant].nome);
	cout << "" <<"\n";
	cout << "DIGITE O N�VEL DA EQUIPE [1  - iniciante      2  -  experiente]: " << endl;
	cin >>  equipe[quant].nivel;
	cout << "" <<"\n";
	cout << "DIGITE O NOME DO PRIMEIRO ALUNO TITULAR: " << "\n";
	cin.ignore();
	getline (cin, equipe[quant].titular1.nome);
	cout << "DIGITE O ANO DE NASCIMENTO DO PRIMEIRO ALUNO TITULAR: " << "\n";
	cin >> equipe[quant].titular1.ano;
	cout << "DIGITE O SEXO DO PRIMEIRO ALUNO TITULAR: " << "\n";
	cin >> equipe[quant].titular1.sexo;
	cout << "DIGITE O PER�ODO DO PRIMEIRO ALUNO TITULAR: " << "\n";
	cin >> equipe[quant].titular1.periodo;	
	system ("cls");
	
	
	cout << "DIGITE O NOME DO SEGUNDO ALUNO TITULAR: " << "\n";
	cin.ignore();
	getline (cin, equipe[quant].titular2.nome);
	cout << "DIGITE O ANO DE NASCIMENTO DO SEGUNDO ALUNO TITULAR: " << "\n";
	cin >> equipe[quant].titular2.ano;
	cout << "DIGITE O SEXO DO SEGUNDO ALUNO TITULAR: " << "\n";
	cin >> equipe[quant].titular2.sexo;
	cout << "DIGITE O PER�ODO DO SEGUNDO ALUNO TITULAR: " << "\n";
	cin >> equipe[quant].titular2.periodo;	
	system ("cls");	
	
	cout << "DIGITE O NOME DO TERCEIRO ALUNO TITULAR: " << "\n";
	cin.ignore();
	getline (cin, equipe[quant].titular3.nome);
	cout << "DIGITE O ANO DE NASCIMENTO DO TERCEIRO ALUNO TITULAR: " << "\n";
	cin >> equipe[quant].titular3.ano;
	cout << "DIGITE O SEXO DO TERCEIRO ALUNO TITULAR: " << "\n";
	cin >> equipe[quant].titular3.sexo;
	cout << "DIGITE O PER�ODO DO TERCEIRO ALUNO TITULAR: " << "\n";
	cin >> equipe[quant].titular3.periodo;
	system ("cls");
	
	cout << "DIGITE O NOME DO ALUNO RESERVA: " << "\n";
	cin.ignore();
	getline (cin, equipe[quant].reserva.nome);
	cout << "DIGITE O ANO DE NASCIMENTO DO ALUNO RESERVA: " << "\n";
	cin >> equipe[quant].reserva.ano;
	cout << "DIGITE O SEXO DO ALUNO RESERVA: " << "\n";
	cin >> equipe[quant].reserva.sexo;
	cout << "DIGITE O PER�ODO DO ALUNO RESERVA: " << "\n";
	cin >> equipe[quant].reserva.periodo;
	quant++;
		break;
	case 2:
		system("cls");
		cout << "Bem-vindo ao m�dulo de listagem de equipes por N�VEL" << "\n";
		cout <<"\n";
		cout << "Equipes de n�vel INICIANTE" << "\n";
		for (i = 0 ; i < quant; i++){
			if (equipe[i].nivel == 1);
			{
				cout << "Nome da equipe: " << equipe[i].nome << "\n";
				cout << "Titular 1: " << equipe[i].titular1.nome << "\n";
				cout << "Ano de Nascimento: " << equipe[i].titular1.ano << "\n";
				cout << "Sexo: " << equipe[i].titular1.sexo << "\n";
				cout << "Per�odo  : " << equipe[i].titular1.periodo << "\n";
				cout << "-----" <<"\n";
				cout << "Nome da equipe: " << equipe[i].nome << "\n";
				cout << "Titular 2: " << equipe[i].titular2.nome << "\n";
				cout << "Ano de Nascimento: " << equipe[i].titular2.ano << "\n";
				cout << "Sexo: " << equipe[i].titular2.sexo << "\n";
				cout << "Per�odo  : " << equipe[i].titular2.periodo << "\n";
				cout << "-----" <<"\n";
				cout << "Nome da equipe: " << equipe[i].nome << "\n";
				cout << "Titular 3: " << equipe[i].titular3.nome << "\n";
				cout << "Ano de Nascimento: " << equipe[i].titular3.ano << "\n";
				cout << "Sexo: " << equipe[i].titular3.sexo << "\n";
				cout << "Per�odo  : " << equipe[i].titular3.periodo << "\n";
				cout << "-----" <<"\n";
				cout << "Nome da equipe: " << equipe[i].nome << "\n";
				cout << "Reserva: " << equipe[i].reserva.nome << "\n";
				cout << "Ano de Nascimento: " << equipe[i].reserva.ano << "\n";
				cout << "Sexo: " << equipe[i].reserva.sexo << "\n";
				cout << "Per�odo  : " << equipe[i].reserva.periodo << "\n";
				cout << "-----" <<"\n";
			}
break;
case 3:
		system("cls");
		cout << "Bem-vindo ao m�dulo de listagem de equipes por N�VEL" << "\n";
		cout <<"\n";
		cout << "Equipes de n�vel EXPERIENTE" << "\n";					
					for (i = 0 ; i < quant; i++){
			if (equipe[i].nivel == 2);
			{
				cout << "Nome da equipe: " << equipe[i].nome << "\n";
				cout << "Titular 1: " << equipe[i].titular1.nome << "\n";
				cout << "Ano de Nascimento: " << equipe[i].titular1.ano << "\n";
				cout << "Sexo: " << equipe[i].titular1.sexo << "\n";
				cout << "Per�odo  : " << equipe[i].titular1.periodo << "\n";
				cout << "--------------------------------------------------------------------" <<"\n";
				cout << "Nome da equipe: " << equipe[i].nome << "\n";
				cout << "Titular 2: " << equipe[i].titular2.nome << "\n";
				cout << "Ano de Nascimento: " << equipe[i].titular2.ano << "\n";
				cout << "Sexo: " << equipe[i].titular2.sexo << "\n";
				cout << "Per�odo  : " << equipe[i].titular2.periodo << "\n";
				cout << "--------------------------------------------------------------------" <<"\n";
				cout << "Nome da equipe: " << equipe[i].nome << "\n";
				cout << "Titular 3: " << equipe[i].titular3.nome << "\n";
				cout << "Ano de Nascimento: " << equipe[i].titular3.ano << "\n";
				cout << "Sexo: " << equipe[i].titular3.sexo << "\n";
				cout << "Per�odo  : " << equipe[i].titular3.periodo << "\n";
				cout << "--------------------------------------------------------------------" <<"\n";
				cout << "Nome da equipe: " << equipe[i].nome << "\n";
				cout << "Reserva: " << equipe[i].reserva.nome << "\n";
				cout << "Ano de Nascimento: " << equipe[i].reserva.ano << "\n";
				cout << "Sexo: " << equipe[i].reserva.sexo << "\n";
				cout << "Per�odo  : " << equipe[i].reserva.periodo << "\n";
				cout << "--------------------------------------------------------------------" <<"\n";
	break;				
	
default:
sair = 0;
		
			};		
}
}
}
	
} while (sair != 0);	


		
	
	
	
	
	
	
	
return 0;
};
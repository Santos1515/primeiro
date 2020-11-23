#include <iostream>
#include <locale.h>
#include <stdlib.h>
// Algor�tmo e estrutura de dados II
// Professor Ma�lson
// Passos, 22 de Novembro de 2020, 18:15 (in�cio) 20:41 (finaliza��o)
//UEMG  -  PASSOS
// Instru��es
// Desenvolva um Sistema para Controle de Clientes descrito a seguir:
// Crie uma estrutura (Structs) chamada �Cliente� contendo nome, cpf, idade, cr�dito e sexo dos clientes.
// Crie uma vetor da Struct �Cliente�
// Cadastre os dados do cliente em uma Lista da Struct.
// Adicione uma op��o que mostre o nome dos clientes que possuem cr�dito maior ou igual ao valor digitado pelo usu�rio.
// Adicione uma op��o que filtre essa consulta a partir do sexo tamb�m.
using namespace std;

struct cliente // cria��o da estrutura CLIENTE com seus atributos
{
	string nome;
	int idade;
	float cpf;
	char sexo;
	float credito;	
};
int main()
{
	setlocale(LC_ALL, "Portuguese");
	cliente cliente[50]; // Cria��o de um vetor para a estrutura CLIENTE, com 50 aloca��es
	int ordem = 0; // Vari�vel de controle das posi��es onde h� cadastro de clientes
	int ctr = 0; // Vari�vel de controle de passos
	float valor = 0; // Vari�vel de entrada do Valor do cr�dito para filtrar pesquisa
	char genero; // Vari�vel de entrada do Valor do cr�dito para filtrar pesquisa
	do{
		cout << " " <<"\n";
		cout << " " <<"\n";
		cout << "1 - CADASTRAR NOVO CLIENTE " << endl;
		cout << " " <<"\n";
		cout << "2 - PESQUISAR CLIENTE POR VALOR DO CR�DITO " << endl;
		cout << " " <<"\n";
		cout << "3 - PESQUISAR CLIENTE POR SEXO " << endl;
		cout << " " <<"\n";
		cout << "4 - FINALIZAR"<<endl;
		cout << " " <<"\n";
		cout << "qual � a sua op��o?: ";
		cin >> ctr;
		switch(ctr)
		{
		case 1:
			cout << " " <<"\n";
			cout << "DIGITE O NOME DO CLIENTE: ";
			cin.ignore();
			getline(cin, cliente[ordem].nome);
			cout << " " <<"\n";
			cout << "DIGITE A IDADE DO CLIENTE:";
			cin >> cliente[ordem].idade;
			cout << " " <<"\n";			
			cout << "DIGITE O CPF DO CLIENTE: ";
			cin >> cliente[ordem].cpf;
			cout << " " <<"\n";
			cout << "DIGITE O SEXO DO CLIENTE (F (MULHER) ou M (HOMEM):";
			cin >> cliente[ordem].sexo;
			cout << " " <<"\n";
			cout << "DIGITE O VALOR DO CR�DITO DO CLIENTE:";
			cin >> cliente[ordem].credito;
			cout << " " <<"\n";
			cout << " " <<"\n";
			cout << " " <<"\n";
			system("cls");
			cout << "cadastrado com sucesso!!!" <<"\n";
			cout << " " <<"\n";
			ordem++;
			cout << "Total de clientes cadastrados: " << ordem << "\n";	
			cout << " " <<"\n";
			cout << " " <<"\n";
			cout << " " <<"\n";
			break;
		case 2:
			system("cls");
					cout << " " <<"\n";
			cout << " DIGITE O VALOR DO CR�DITO PARA PESQUISAR: " <<endl;
			cin >> valor;
			cout << " " <<"\n";			
			for(int i = 0; i < ordem; i++)
			{
				if (cliente[i].credito >= valor){
					cout << cliente[i].nome <<"\n";
				}		
			}
			break;
		case 3:
			cout << " " <<"\n";
			system("cls");
			cout << " DIGITE O SEXO QUE DESEJA PESQUISAR: " <<endl;
			cin >> genero;			
			for(int i = 0; i < ordem; i++)
			{
				if (cliente[i].sexo == genero){
					cout << cliente[i].nome <<"\n";
				}		
			}
			break;
		case 4:
			cout << "FIM DO PROGRAMA";
			break;		
		default:
			cout << "Essa op��o n�o existe!!";
			break;
		}
		
	}while(ctr != 4);
	
return 0;
}
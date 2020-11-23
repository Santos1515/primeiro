#include <iostream>
#include <locale.h>
#include <stdlib.h>
// Algorítmo e estrutura de dados II
// Professor Maílson
// Passos, 22 de Novembro de 2020, 18:15 (início) 20:41 (finalização)
//UEMG  -  PASSOS
// Instruções
// Desenvolva um Sistema para Controle de Clientes descrito a seguir:
// Crie uma estrutura (Structs) chamada “Cliente” contendo nome, cpf, idade, crédito e sexo dos clientes.
// Crie uma vetor da Struct “Cliente”
// Cadastre os dados do cliente em uma Lista da Struct.
// Adicione uma opção que mostre o nome dos clientes que possuem crédito maior ou igual ao valor digitado pelo usuário.
// Adicione uma opção que filtre essa consulta a partir do sexo também.
using namespace std;

struct cliente // criação da estrutura CLIENTE com seus atributos
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
	cliente cliente[50]; // Criação de um vetor para a estrutura CLIENTE, com 50 alocações
	int ordem = 0; // Variável de controle das posições onde há cadastro de clientes
	int ctr = 0; // Variável de controle de passos
	float valor = 0; // Variável de entrada do Valor do crédito para filtrar pesquisa
	char genero; // Variável de entrada do Valor do crédito para filtrar pesquisa
	do{
		cout << " " <<"\n";
		cout << " " <<"\n";
		cout << "1 - CADASTRAR NOVO CLIENTE " << endl;
		cout << " " <<"\n";
		cout << "2 - PESQUISAR CLIENTE POR VALOR DO CRÉDITO " << endl;
		cout << " " <<"\n";
		cout << "3 - PESQUISAR CLIENTE POR SEXO " << endl;
		cout << " " <<"\n";
		cout << "4 - FINALIZAR"<<endl;
		cout << " " <<"\n";
		cout << "qual é a sua opção?: ";
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
			cout << "DIGITE O VALOR DO CRÉDITO DO CLIENTE:";
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
			cout << " DIGITE O VALOR DO CRÉDITO PARA PESQUISAR: " <<endl;
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
			cout << "Essa opção não existe!!";
			break;
		}
		
	}while(ctr != 4);
	
return 0;
}
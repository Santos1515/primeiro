#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
// Algor�tmo e estrutura de dados II
// Professor Ma�lson
// Passos, 15 de Novembro de 2020, 14:45 (in�cio) 15:50 (finaliza��o)
// Instru��es
// Implemente um programa que leia o nome, a data de nascimento e o endere�o(Rua, Numero, Cidade, Estado) de uma pessoa e armazene os dados em uma estrutura.
// Postar o link do seu c�digo o o arquivo .
//UEMG  -  PASSOS


struct ender
{
	string rua;
	int numero;
	string cidade;
	string estado;
	
};
struct cliente
{
	string nome;
	string nascimento;
	struct ender ende;
	
	
};
int main()
{
setlocale(LC_ALL, "Portuguese");
cliente c001;
cout << "Digite o NOME do cliente: " << "\n";
cin >> c001.nome;
cout << "Digite a DATA DE NASCIMENTO do cliente: " << "\n";
cin >> c001.nascimento;
cout << "Digite ENDERE�O (RUA) do cliente: " << "\n";
cin >> c001.ende.rua;
cout << "Digite ENDERE�O (N�MERO) do cliente: " << "\n";
cin >> c001.ende.numero;
cout << "Digite ENDERE�O (CIDADE) do cliente: " << "\n";
cin >> c001.ende.cidade;
cout << "Digite ENDERE�O (ESTADO) do cliente: " << "\n";
cin >> c001.ende.estado;
cout <<"\n";
	
cout << "----------------------------------------------------------------" <<"\n";
cout << "Dados do Cliente: " <<"\n";
cout << "\n";
cout << "Nome: " << c001.nome <<"\n";
cout << "Data de Nascimento: " << c001.nascimento <<"\n";
cout << "Rua: " << c001.ende.rua <<"\n";
cout << "N�mero: " << c001.ende.numero <<"\n";
cout << "Cidade: " << c001.ende.cidade <<"\n";
cout << "Estado (UF): " << c001.ende.estado <<"\n";
	

    return 0;       
}
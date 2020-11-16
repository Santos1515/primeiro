#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
// Algorítmo e estrutura de dados II
// Professor Maílson
// Passos, 15 de Novembro de 2020, 14:45 (início) 15:50 (finalização)
// Instruções
// Implemente um programa que leia o nome, a data de nascimento e o endereço(Rua, Numero, Cidade, Estado) de uma pessoa e armazene os dados em uma estrutura.
// Postar o link do seu código o o arquivo .
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
cout << "Digite ENDEREÇO (RUA) do cliente: " << "\n";
cin >> c001.ende.rua;
cout << "Digite ENDEREÇO (NÚMERO) do cliente: " << "\n";
cin >> c001.ende.numero;
cout << "Digite ENDEREÇO (CIDADE) do cliente: " << "\n";
cin >> c001.ende.cidade;
cout << "Digite ENDEREÇO (ESTADO) do cliente: " << "\n";
cin >> c001.ende.estado;
cout <<"\n";
	
cout << "----------------------------------------------------------------" <<"\n";
cout << "Dados do Cliente: " <<"\n";
cout << "\n";
cout << "Nome: " << c001.nome <<"\n";
cout << "Data de Nascimento: " << c001.nascimento <<"\n";
cout << "Rua: " << c001.ende.rua <<"\n";
cout << "Número: " << c001.ende.numero <<"\n";
cout << "Cidade: " << c001.ende.cidade <<"\n";
cout << "Estado (UF): " << c001.ende.estado <<"\n";
	

    return 0;       
}
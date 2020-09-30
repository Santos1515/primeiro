#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <cmath>
// Trabalho prático II
// Curso de Sistemas de Informação  | Algorítmo e Estruturas de Dados
// Professora Vânia  |  Grupo: Rafael e E. Helena
// Passos, Minas Gerais  | Setembro de 2020
using namespace std;

int main()
{

setlocale(LC_ALL, "Portuguese"); // Configura a exibição de caracteres de língua portuguesa
// SEÇÃO ESPECIAL PARA DECLARAÇÃO DAS VARIÁVEIS
int participantes = 0, op = 0, ctr = 0, i = 0, i2 = 0;
float item[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
double conta1, conta2, conta3, conta4 ;
//
do {
cout << " GERENCIADOR DE EVENTOS  -  CHURRASCO SI 1º PERÍODO" << "\n";
cout << "   " << "\n";
cout << "MENU DE OPÇÕES" << "\n";
cout << "   " << "\n";
cout << " Participantes [Digite 1] "<< "\n";
cout << " Produtos do churrasco [Digite 2]" << "\n";
cout << " Cálculos [Digite 3]" << "\n";
cout << "   " << "\n";
cout << "Digite a sua opção: ";
	cin >> op; // Faz a leitura da opção escolhida no menu
	switch (op) {
case 1:
	system("cls");
	cout << " Digite a quantidade de participantes: ";
	cin >> participantes;
	cout << "   " << "\n";
	cout << "Quantidade de " << participantes << " participantes cadastrada com sucesso. Continue nas próximas opções!!!" << "\n";
	break;
case 2:
for (i = 0; i < 16; i++){
	system("cls");
	cout << "Digite os preços para os produtos abaixo na ordem correta: " << "\n";
cout << "1º cerveja (unidade)                            9º vinagre (unidade)       " << "\n";
cout << "2º refrigerante normal (Litro)                 10º limão (Kg)         " << "\n";
cout << "3º refrigerante diet (Litro)                   11º pão (unidade)           " << "\n";
cout << "4º carne (Kg)                                  12º carvão (unidade / saco)        " << "\n";
cout << "5º linguiça toscana (Kg)                       13º sal grosso (unidade)    " << "\n";
cout << "6º linguiça de frango (Kg)                     14º detergente (unidade)    " << "\n";
cout << "7º tomate (vinagrete) (Kg)                     15º esponja de pia (unidade)" << "\n";
cout << "8º ceboal (vinagrete) (Kg)                     16º papel higiênico (unidade)" << "\n";
cout << "   " << "\n";
i2++;
	cout << "Digite o preço do " << i2 << "º produto: " << "\n";
	cin >> item[i];


}
	break;
case 3:
    cout << "A quantidade de pessoas que irão ao churrasco, é de: "<< participantes<<" pessoas."<<endl;
    cout << "Quantidade de cerveja: "<< participantes*3 <<endl;
    cout << "A quantidade de litros ao total de refrigerante normal, é de: "<< participantes*0.8<<" Litros. "<<endl;
    cout << "A quantidade de litros ao total de refrigerante diet, é de: "<< participantes*0.2<<" Litros."<<endl;
    cout << "A quantidade total em Kg de carne, é de: "<< participantes*0.250 <<" Kg."<<endl;
    cout << "A quantidade total em Kg de linguiça toscana, é de: "<< participantes*0.050<<" Kg."<<endl;
    cout << "A quantidade total em Kg de linguiça de frango, é de: "<<participantes*0.050<<" Kg."<<endl;
    cout << "A quantidade total de tomate em kg, é de: "<<participantes*0.050<<" Kg."<<endl;
    cout << "Vinagre será apenas um para todas as pessoas."<<endl;
    cout << "A quantidade total em Kg de limão, é de: "<<participantes*0.050<<" Kg."<<endl;
    cout << "A quantidade total de pães, é de: "<<participantes*3<<" pães."<<endl;
    cout << "A quantidade total de sacos de carvães, é de: "<<participantes*0.05<<" sacos."<<endl;
    cout << "A quantidade total de sacos de sal grosso, é de: "<<participantes*0.02<<" sacos."<<endl;
    cout << "O detergente será apenas uma unidade."<<endl;
    cout << "A esponja de pia será apenas uma unidade."<<endl;
    cout << "A quantidade de papel higiênico, é de: "<<participantes*0.025<<" unidades."<<endl;
    cout<<" "<<endl;
    cout <<"______________________________________"<<endl;
    cout<<" "<<endl;
    conta1 = item[0]*3;
    conta2 = item[10]*3;
    conta3= ((conta1 + conta2 + item[1] + item[2]+ item [3] + item [4] + item[5]+ item [6]+ item[7]+ item[9]+ item[11]+ item[12]+ item[15])*40)+ (item[8]+item[13]+item[14]);
    conta4 = ((conta3*5)/100)+conta3;
    cout <<" O valor total que será gasto no churrasco, é de: R$"<<conta3<<endl;
    cout <<" O Valor que será pago por pessoa, é de: R$"<< conta3/40<<endl;
    cout <<" Para a prevenção de imprevistos, será adicionado um valor de 5% do total nas despesas, resultando em um valor de: R$"<<conta4<<endl;
    cout <<" O Valor que será pago por pessoa com o acrescimo de 5% no valor total da despesa, é de: R$"<<conta4/40<<endl;
    ctr=1;
	break;
default:
;
} // fim do comando switch
}  // fim do comando do
while (ctr != 1); // Condição para finalizar


    return 0;
}
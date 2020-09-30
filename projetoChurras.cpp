#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <cmath>
// Trabalho pr�tico II
// Curso de Sistemas de Informa��o  | Algor�tmo e Estruturas de Dados
// Professora V�nia  |  Grupo: Rafael e E. Helena
// Passos, Minas Gerais  | Setembro de 2020
using namespace std;

int main()
{

setlocale(LC_ALL, "Portuguese"); // Configura a exibi��o de caracteres de l�ngua portuguesa
// SE��O ESPECIAL PARA DECLARA��O DAS VARI�VEIS
int participantes = 0, op = 0, ctr = 0, i = 0, i2 = 0;
float item[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
double conta1, conta2, conta3, conta4 ;
//
do {
cout << " GERENCIADOR DE EVENTOS  -  CHURRASCO SI 1� PER�ODO" << "\n";
cout << "   " << "\n";
cout << "MENU DE OP��ES" << "\n";
cout << "   " << "\n";
cout << " Participantes [Digite 1] "<< "\n";
cout << " Produtos do churrasco [Digite 2]" << "\n";
cout << " C�lculos [Digite 3]" << "\n";
cout << "   " << "\n";
cout << "Digite a sua op��o: ";
	cin >> op; // Faz a leitura da op��o escolhida no menu
	switch (op) {
case 1:
	system("cls");
	cout << " Digite a quantidade de participantes: ";
	cin >> participantes;
	cout << "   " << "\n";
	cout << "Quantidade de " << participantes << " participantes cadastrada com sucesso. Continue nas pr�ximas op��es!!!" << "\n";
	break;
case 2:
for (i = 0; i < 16; i++){
	system("cls");
	cout << "Digite os pre�os para os produtos abaixo na ordem correta: " << "\n";
cout << "1� cerveja (unidade)                            9� vinagre (unidade)       " << "\n";
cout << "2� refrigerante normal (Litro)                 10� lim�o (Kg)         " << "\n";
cout << "3� refrigerante diet (Litro)                   11� p�o (unidade)           " << "\n";
cout << "4� carne (Kg)                                  12� carv�o (unidade / saco)        " << "\n";
cout << "5� lingui�a toscana (Kg)                       13� sal grosso (unidade)    " << "\n";
cout << "6� lingui�a de frango (Kg)                     14� detergente (unidade)    " << "\n";
cout << "7� tomate (vinagrete) (Kg)                     15� esponja de pia (unidade)" << "\n";
cout << "8� ceboal (vinagrete) (Kg)                     16� papel higi�nico (unidade)" << "\n";
cout << "   " << "\n";
i2++;
	cout << "Digite o pre�o do " << i2 << "� produto: " << "\n";
	cin >> item[i];


}
	break;
case 3:
    cout << "A quantidade de pessoas que ir�o ao churrasco, � de: "<< participantes<<" pessoas."<<endl;
    cout << "Quantidade de cerveja: "<< participantes*3 <<endl;
    cout << "A quantidade de litros ao total de refrigerante normal, � de: "<< participantes*0.8<<" Litros. "<<endl;
    cout << "A quantidade de litros ao total de refrigerante diet, � de: "<< participantes*0.2<<" Litros."<<endl;
    cout << "A quantidade total em Kg de carne, � de: "<< participantes*0.250 <<" Kg."<<endl;
    cout << "A quantidade total em Kg de lingui�a toscana, � de: "<< participantes*0.050<<" Kg."<<endl;
    cout << "A quantidade total em Kg de lingui�a de frango, � de: "<<participantes*0.050<<" Kg."<<endl;
    cout << "A quantidade total de tomate em kg, � de: "<<participantes*0.050<<" Kg."<<endl;
    cout << "Vinagre ser� apenas um para todas as pessoas."<<endl;
    cout << "A quantidade total em Kg de lim�o, � de: "<<participantes*0.050<<" Kg."<<endl;
    cout << "A quantidade total de p�es, � de: "<<participantes*3<<" p�es."<<endl;
    cout << "A quantidade total de sacos de carv�es, � de: "<<participantes*0.05<<" sacos."<<endl;
    cout << "A quantidade total de sacos de sal grosso, � de: "<<participantes*0.02<<" sacos."<<endl;
    cout << "O detergente ser� apenas uma unidade."<<endl;
    cout << "A esponja de pia ser� apenas uma unidade."<<endl;
    cout << "A quantidade de papel higi�nico, � de: "<<participantes*0.025<<" unidades."<<endl;
    cout<<" "<<endl;
    cout <<"______________________________________"<<endl;
    cout<<" "<<endl;
    conta1 = item[0]*3;
    conta2 = item[10]*3;
    conta3= ((conta1 + conta2 + item[1] + item[2]+ item [3] + item [4] + item[5]+ item [6]+ item[7]+ item[9]+ item[11]+ item[12]+ item[15])*40)+ (item[8]+item[13]+item[14]);
    conta4 = ((conta3*5)/100)+conta3;
    cout <<" O valor total que ser� gasto no churrasco, � de: R$"<<conta3<<endl;
    cout <<" O Valor que ser� pago por pessoa, � de: R$"<< conta3/40<<endl;
    cout <<" Para a preven��o de imprevistos, ser� adicionado um valor de 5% do total nas despesas, resultando em um valor de: R$"<<conta4<<endl;
    cout <<" O Valor que ser� pago por pessoa com o acrescimo de 5% no valor total da despesa, � de: R$"<<conta4/40<<endl;
    ctr=1;
	break;
default:
;
} // fim do comando switch
}  // fim do comando do
while (ctr != 1); // Condi��o para finalizar


    return 0;
}
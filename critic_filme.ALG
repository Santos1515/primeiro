Algoritmo "cR�TICA DE FILME"

Var
idade, opn, controle,i: inteiro
med_id_otimo:real
num_pessoas_otimo:inteiro
qnt_pessoas_reg:inteiro
porc_pessoas_bom: real
Inicio
qnt_pessoas_reg <-0
porc_pessoas_bom <-0
controle <-1
limpatela
para i de 1 ate 15 faca
escreval("-------------------------------------------")
escreval("-------------------------------------------")
escreval("Avalia��o do filme")
escreval("")
escreval("-------------------------------------------")
escreval("-------------------------------------------")
escreval("Avaliador N� ", i)
escreval("")
escreval("Digite sua Idade: ")
leia(idade)
escreval("")
escreval("Digite sua opini�o em rela��o ao filme")
escreval(" (3) �TIMO  | (2) BOM  |  (3) REGULAR")
escreval("")
leia(opn)
se (opn=3) ou (opn=2) ou (opn=1) entao
controle <-2
fimse
enquanto (controle=1) faca
escreval("")
escreval ("Op��o inv�lida")
escreval("")
escreval("Digite sua opini�o em rela��o ao filme")
escreval(" (3) �TIMO  | (2) BOM  |  (3) REGULAR")
escreval("")
leia(opn)
se (opn=3) ou (opn=2) ou (opn=1) entao
controle <-2
senao
controle <-1
fimse
fimenquanto
se (opn=3) entao
num_pessoas_otimo <- (num_pessoas_otimo + 1)
med_id_otimo <- (med_id_otimo + idade)
fimse
se (opn=1) entao
qnt_pessoas_reg <- (qnt_pessoas_reg + 1)
fimse
se (opn=2) entao
porc_pessoas_bom <- (porc_pessoas_bom + 1)
fimse
fimpara
limpatela
escreval("-------------------------------------------")
escreval("Avalia��o do filme")
escreval("")
escreval("-------------------------------------------")
escreval("-------------------------------------------")
se (num_pessoas_otimo >0) entao
Escreval ("A m�dia das idades das pessoas que responderam �timo � de: ")
med_id_otimo <- (med_id_otimo / num_pessoas_otimo)
escreval (med_id_otimo, " Anos")
senao
escreval ("N�o houve nenhuma avalia��o �TIMA")
FIMSE
ESCREVAL ("")
Escreval (QNT_PESSOAS_REG, " Responderam REGULAR")
ESCREVAL ("")
PORC_PESSOAS_BOM <- ((PORC_PESSOAS_BOM / 15)*100)
Escreval (PORC_PESSOAS_BOM, " % das pessoas Responderam BOM")
Fimalgoritmo
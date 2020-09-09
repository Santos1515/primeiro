Algoritmo "MÉDIA DE IDADES"
Var
idd, soma_idd, ctd_idd: inteiro
media_idd:real
Inicio
idd <- 1
ctd_idd <-0
soma_idd <-0
enquanto (idd >0) faca
escreval ("Digite uma idade: ( OU DIGITE 0 PARA ENCERRAR ")
escreval ("")
leia (idd)
se (idd > 0) entao
ctd_idd <- (ctd_idd + 1)
soma_idd <- (soma_idd + idd)
escreval ("")
media_idd <- (soma_idd / ctd_idd)
escreval ("Foram digitadas ", ctd_idd, "  idades")
escreval ("")
escreval ("A MÉDIA de idade é: ", media_idd, " ANOS")
escreval ("")
senao
escreval (" Você escolheu sair")
escreval (" FIM DO PROGRAMA")
fimse
fimenquanto
Fimalgoritmo
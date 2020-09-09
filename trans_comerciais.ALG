Algoritmo "Transacoes comerciais"
// Algorítmo e estrutura de dados 
// Vania 
Var
cod:caractere
i: inteiro
VD,VtV, VtP,VTc, VpP:real
ctr:inteiro
Inicio
VtV <-0
VtP <-0
VTc <-0
i <-0
para i de 1 ate 15 faca
ctr <- 2
Escreval ("Digite o código da ", i, "ª Transação: ")
leia (cod)
se (cod="v") ou (cod="V") ou (cod="p") ou (cod="P") entao
ctr <- 1
fimse
enquanto (ctr > 1) faca
Escreval ("                                       ")
Escreval ("Opção inválida")
Escreval ("                                       ")
Escreval ("Digite o código da ", i, "ª Transação: (v) à vista | (P) à Prazo ")
leia (cod)
se (cod="v") ou (cod="V") ou (cod="p") ou (cod="P") entao
ctr <- 1
fimse
fimenquanto
escreval ("Digite o Valor da transação: ")
se (cod="v") ou (cod="V") entao
   Vd <-0
   leia(vd)
   vtv <- (vtv + vd)
   senao
        se (cod="p") ou (cod="P") entao
        Vd <-0
        leia(vd)
        vtp <- (vtp + vd)
             fimse
        fimse
fimpara
limpatela
vtc <- (vtp + vtv)
vpp <- (vtp / 3)
Escreval ("---------------------------------------------")
Escreval (" Você efetuou R$ ",vtc, " em compras, sendo:")
Escreval ("                                            ")
Escreval ("Compras à Vista: ", vtv, " Reais")
Escreval ("                                             ")
Escreval ("Compras à Prazo: ", vtp, " Reais")
Escreval ("                                             ")
Escreval ("Val. da prim. parc. das compras totais à prazo: ",vpp, " Reais")
Fimalgoritmo
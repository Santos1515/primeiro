Algoritmo "MENU DE OP��ES"
Var
n1,n2,n3,p1, p2, p3, resultado:real
opc:caractere
Inicio
p1 <-1
p2 <-1
p3 <-1
Escreval ("MENU DE OP��ES")
escreval ("--------------")
escreval ("(1) M�DIA ARITM�TICA")
escreval ("(2) M�DIA PONDERADA")
escreval ("(3) SAIR")
escreval ("")
escreval ("DIGITE A SUA OP��O")
leia (opc)
escolha (opc)
caso "1"
Escreval ("")
Escreval ("VOC� ESCOLHEU 'M�DIA ARITM�TICA'")
Escreval ("")
Escreval ("Digite a primeira nota: ")
leia (n1)
Escreval ("")
Escreval ("Digite a segunda nota: ")
leia (n2)
resultado <- ((n1 + n2) / 2)
Escreval ("")
escreva (" A M�DIA ARITM�TICA �: ",resultado)
        caso "2"
        Escreval ("VOC� ESCOLHEU 'M�DIA PONDERADA'")
        Escreval ("")
        Escreval ("Digite a primeira nota: ")
        leia (n1)
        Escreval ("")
        Escreval ("Digite o PESO da primeira nota: ")
        leia (p1)
        Escreval ("Digite a segunda nota: ")
        leia (n2)
        Escreval ("Digite o PESO da segunda nota: ")
        leia (p2)
        Escreval ("Digite a terceira nota: ")
        leia (n3)
        Escreval ("Digite o PESO da terceira nota: ")
        leia (p3)
        RESULTADO <- (((n1*p1)+(n2*p2)+(n3*p3)) /  (p1+p2+p3) )
        Escreval ("")
        escreva (" A M�DIA PONDERADA �: ",resultado)

caso "3"
escreval ("eeeeeeeeeeeeeeee")
outrocaso
escreval ("OP��O INV�LIDA")
escreval ("______________")
fimescolha
Fimalgoritmo
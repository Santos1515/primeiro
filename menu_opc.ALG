Algoritmo "MENU DE OPÇÕES"
Var
n1,n2,n3,p1, p2, p3, resultado:real
opc:caractere
Inicio
p1 <-1
p2 <-1
p3 <-1
Escreval ("MENU DE OPÇÕES")
escreval ("--------------")
escreval ("(1) MÉDIA ARITMÉTICA")
escreval ("(2) MÉDIA PONDERADA")
escreval ("(3) SAIR")
escreval ("")
escreval ("DIGITE A SUA OPÇÃO")
leia (opc)
escolha (opc)
caso "1"
Escreval ("")
Escreval ("VOCÊ ESCOLHEU 'MÉDIA ARITMÉTICA'")
Escreval ("")
Escreval ("Digite a primeira nota: ")
leia (n1)
Escreval ("")
Escreval ("Digite a segunda nota: ")
leia (n2)
resultado <- ((n1 + n2) / 2)
Escreval ("")
escreva (" A MÉDIA ARITMÉTICA É: ",resultado)
        caso "2"
        Escreval ("VOCÊ ESCOLHEU 'MÉDIA PONDERADA'")
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
        escreva (" A MÉDIA PONDERADA É: ",resultado)

caso "3"
escreval ("eeeeeeeeeeeeeeee")
outrocaso
escreval ("OPÇÃO INVÁLIDA")
escreval ("______________")
fimescolha
Fimalgoritmo
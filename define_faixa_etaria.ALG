Algoritmo "Definidor de Faixa Et�ria"
Var
idade, i,f1, f2, f3, f4, f5:inteiro
 reg: real
Inicio
para i de 1 ate 8 faca
escreval ("Digite a idade da ", i, "� pessoa")
leia (idade)
se (idade <= 15) entao
f1 <- (f1 + 1)
senao
     se (idade >= 16) e (idade <= 30) entao
     f2 <- (f2 + 1)
     senao
          se (idade >= 31) e (idade <= 45) entao
          f3 <- (f3 + 1)
          senao
               se (idade >= 46) e (idade <= 60) entao
               f4 <- (f4 + 1)
               senao
                    f5 <- (f5 + 1)
                    fimse
               fimse
          fimse
     fimse

fimpara
escreval ("Resultados")
escreval ("1� Faixa Et�ria (      At� 15 anos): ", f1, " Pessoa(s)")
escreval ("2� Faixa Et�ria (  De 16 a 30 anos): ", f2, " Pessoa(s)")
escreval ("3� Faixa Et�ria (  De 31 a 45 anos): ", f3, " Pessoa(s)")
escreval ("4� Faixa Et�ria (  De 46 a 60 anos): ", f4, " Pessoa(s)")
escreval ("5� Faixa Et�ria ( Acima de 60 anos): ", f5, " Pessoa(s)")
reg <- ((f1/8) * 100)
Escreval (reg, " % das pessoas est�o na primeira faixa et�ria")
reg <- ((f5/8) * 100)
Escreval (reg, " % das pessoas est�o na �ltima faixa et�ria")
Fimalgoritmo
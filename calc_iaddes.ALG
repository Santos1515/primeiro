Algoritmo "semnome"
Var
idade, Altura, peso, i, idade_a, peso_a, cont_altura:inteiro
med_altura, porc_peso:real
Inicio
limpatela
Escreval ("----------------------------------------")
Escreval (" Calculadora especial")
Escreval ("----------------------------------------")
para i de 1 ate 5 faca
Escreva ("Digite a idade da ", i, "ª pessoa:   ")
leia (idade)
se (idade >50) entao
idade_a <-( idade_a + 1)
fimse
Escreval ("----------------------------------------")
Escreva ("Digite a altura da ", i, "ª pessoa:  ")
leia (altura)
se (idade >=10) ou (idade <=20) entao
cont_altura <- (cont_altura + 1)
med_altura <- (med_altura + altura)
FIMSE
Escreval ("----------------------------------------")
Escreva ("Digite o peso da ", i, "ª pessoa:   ")
leia (peso)
se (peso <40) entao
peso_a <- (peso_a + 1)
fimse
Escreval ("----------------------------------------")
Escreval ("----------------------------------------")
FIMPARA
LIMPATELA
Escreval (" Calculadora especial")
Escreval ("                                        ")
Escreval ("Existe(s)", idade_a, " Pessoa(s) maiores de 50 anos")
Escreval ("--------------------------------------------------")
Escreval ("                                        ")
med_altura <- (med_altura / cont_altura)
Escreval (" Entre as pessoas de 10 a 20 anos, a média de altura é de: ")
Escreval (med_altura, " Centímetros")
Escreval ("--------------------------------------------------")
Escreval ("                                        ")
se (peso_a >0) entao
porc_peso <- (5 / peso_a)
Escreval (porc_peso, "% das pessoas estão abaixo de quarenta quilogramas")
senao
Escreval (" Nenhuma pessoa ( 0%) está abaixo de 40 Kg")
fimse
Fimalgoritmo
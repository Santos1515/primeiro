Algoritmo "novo salario"
Var
op,meses,controle:inteiro
salario, nv_salario:real
Inicio
repita
controle <-1
escreval ("------------------------------")
escreval ("        MENU DE OPÇÕES")
escreval ("")
escreval ("1. NOVO SALÁRIO")
escreval ("")
escreval ("2. FÉRIAS")
escreval ("")
escreval ("3. DÉCIMO TERCEIRO")
escreval ("")
escreval ("4. SAIR")
escreval ("digite sua opção: ")
leia(op)
escolha (op)
caso 1
limpatela
escreva ("Digite o valor do salário: R$: ")
leia (salario)
se (salario <=210) entao
nv_salario <- salario * 1.15)
escreval ("")
escreval (" O novo salário é ", nv_salario, " reais")
senao
se (salario >210) ou (salario <=600) entao
nv_salario <- salario * 1.1)
escreval ("")
escreval (" O novo salário é ", nv_salario, " reais")
senao
nv_salario <- salario * 1.05)
escreval ("")
escreval (" O novo salário é ", nv_salario, " reais")
fimse
fimse
caso 2
limpatela
escreval (" Digite o valor do salário para cálculo das férias: ")
leia (salario)
escreval ("Valor das férias: ")
nv_salario <- (salario * (1/3) + salario)
escreval ("R$ ", nv_salario)
escreval ("")
caso 3
limpatela
escreval ("----------------------------------------")
escreval ("      Calculadora do DÉCIMO TERCEIRO    ")
escreval ("----------------------------------------")
escreval ("")
escreva (" Digite o valor do salário mensal R$ ")
leia (salario)
escreval ("")
escreval ("Digite o número de meses trabalhados (de 1 até 12 MESES")
escreval ("")
leia (meses)
enquanto (meses <1) ou (meses >12) faca
escreval (" Número de meses INVÁLIDOS")
escreval ("Digite o número de meses trabalhados (de 1 até 12 MESES")
leia (meses)
fimenquanto
nv_salario <- ((salario / 12) * meses)
escreval ("")
escreval ("O DÉCIMO TERCEIRO SERÁ DE: ", nv_salario, " reais")
escreva ("")
caso 4
escreva ("")
escreval ("VOCÊ ESCOLHEU SAIR")
controle <-0
outrocaso
limpatela
escreval ("++++++++++++++++++++++++++++++++++++++++++")
escrevaL ("OPÇÃO INVÁLIDA")
fimescolha
ate (controle=0)
fimalgoritmo
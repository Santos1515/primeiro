Algoritmo "novo salario"
Var
op,meses,controle:inteiro
salario, nv_salario:real
Inicio
repita
controle <-1
escreval ("------------------------------")
escreval ("        MENU DE OP��ES")
escreval ("")
escreval ("1. NOVO SAL�RIO")
escreval ("")
escreval ("2. F�RIAS")
escreval ("")
escreval ("3. D�CIMO TERCEIRO")
escreval ("")
escreval ("4. SAIR")
escreval ("digite sua op��o: ")
leia(op)
escolha (op)
caso 1
limpatela
escreva ("Digite o valor do sal�rio: R$: ")
leia (salario)
se (salario <=210) entao
nv_salario <- salario * 1.15)
escreval ("")
escreval (" O novo sal�rio � ", nv_salario, " reais")
senao
se (salario >210) ou (salario <=600) entao
nv_salario <- salario * 1.1)
escreval ("")
escreval (" O novo sal�rio � ", nv_salario, " reais")
senao
nv_salario <- salario * 1.05)
escreval ("")
escreval (" O novo sal�rio � ", nv_salario, " reais")
fimse
fimse
caso 2
limpatela
escreval (" Digite o valor do sal�rio para c�lculo das f�rias: ")
leia (salario)
escreval ("Valor das f�rias: ")
nv_salario <- (salario * (1/3) + salario)
escreval ("R$ ", nv_salario)
escreval ("")
caso 3
limpatela
escreval ("----------------------------------------")
escreval ("      Calculadora do D�CIMO TERCEIRO    ")
escreval ("----------------------------------------")
escreval ("")
escreva (" Digite o valor do sal�rio mensal R$ ")
leia (salario)
escreval ("")
escreval ("Digite o n�mero de meses trabalhados (de 1 at� 12 MESES")
escreval ("")
leia (meses)
enquanto (meses <1) ou (meses >12) faca
escreval (" N�mero de meses INV�LIDOS")
escreval ("Digite o n�mero de meses trabalhados (de 1 at� 12 MESES")
leia (meses)
fimenquanto
nv_salario <- ((salario / 12) * meses)
escreval ("")
escreval ("O D�CIMO TERCEIRO SER� DE: ", nv_salario, " reais")
escreva ("")
caso 4
escreva ("")
escreval ("VOC� ESCOLHEU SAIR")
controle <-0
outrocaso
limpatela
escreval ("++++++++++++++++++++++++++++++++++++++++++")
escrevaL ("OP��O INV�LIDA")
fimescolha
ate (controle=0)
fimalgoritmo
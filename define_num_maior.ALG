Algoritmo "24-Define o n�mero maior"
Var
i,n1,n2,n3,n4,n5,maior,menor:inteiro
Inicio
escreval ("Digite cinco n�meros")
leia(n1)
leia(n2)
leia(n3)
leia(n4)
leia(n5)
se (n1>0) entao
maior <-n1
senao
escreval (n1, " � Negativo e n�o entrar� no c�lculo")
fimse

se (n2>0) entao
se (n2>n1) entao
maior <-n2
menor <-n1
senao
menor <-n2
fimse
senao
escreval (n2, " � Negativo e n�o entrar� no c�lculo")
fimse
se (n3>0) entao
se (n3>maior) entao
maior <-n3
senao
se (n3<n2) entao
menor <-n3
fimse
fimse
senao
escreval (n3, " � Negativo e n�o entrar� no c�lculo")
fimse

se (n4>0) entao
se (n4>maior) entao
maior <-n4
senao
se (n4<menor) entao
menor <-n4)
fimse
fimse
senao
escreval (n4, " � Negativo e n�o entrar� no c�lculo")
fimse

se (n5>0) entao
se (n5>maior) entao
maior <-n5
senao
se (n5<menor) entao
menor <-n5
fimse
fimse
senao
escreval (n5, " � Negativo e n�o entrar� no c�lculo")
fimse
Escreval (maior, " � o MAIOR n�mero")
se (menor<=0) entao
escreval ("N�o h� nenhum n�mero menor positivo maior que zero")
senao
Escreval (menor, " � o MENOR n�mero")
fimse

Fimalgoritmo
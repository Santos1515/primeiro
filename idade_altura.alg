Algoritmo "Idade e Altura"
Var
idd,altura, soma_altura, ctd_idd50: inteiro
media_altura:real
Inicio
idd <- 1
ctd_idd50 <-0
soma_altura <-0
enquanto (idd >0) faca
escreval ("Digite uma idade: ( OU DIGITE 0 PARA ENCERRAR ")
escreval ("")
leia (idd)
se (idd > 0) entao
	escreval ("Digite a ALTURA (cent�metros): ")
	escreval ("")
	leia (altura)
	se (idd>50) entao
	ctd_idd50 <- (ctd_idd50 + 1)
	soma_altura <- (soma_altura + altura)
	escreval ("")
	media_altura <- (soma_altura / ctd_idd50)
   fimse
	limpatela
escreval ("*******************************************")
escreval ("Foram digitadas ", ctd_idd50, "  idades maiores de 50 anos")
escreval ("")
escreval ("")
escreval ("A M�DIA das alturas das pessoas com mais de 50 anos �: ", media_altura, " cent�metros")
escreval ("")
senao
escreval (" Voc� escolheu sair")
escreval (" FIM DO PROGRAMA")
fimse
fimenquanto
Fimalgoritmo
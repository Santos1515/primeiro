Algoritmo "pesquisa NOVO PRODUTO"
Var
genero, ctd_mulher_sim, ctd_homem_nao, ctd_nao, ctd_sim, ctd_homem_total:inteiro
pc_hm_nao:real
i:inteiro
resposta: caractere
Inicio
para i de 1 ate 5 faca
Escreval (i, "º Avaliador: Digite o seu sexo: ")
ESCREVAL ("                                ")
escreval ("")
escreval (" (1) MASCULINO  |  (2) FEMININO ")
escreval ("                                ")
LEIA (genero)
escreval ("                                 ")
escreval ("                                 ")
escreval (" Você gostou de nosso novo produto? ")
escreval ("                                ")
escreval (" (S) SIM  |  (N) não ")
escreval ("                                 ")
leia (resposta)
se (resposta="s") entao
ctd_sim <- (ctd_sim + 1)
senao
ctd_nao <- (ctd_nao +1)
fimse
se (genero=2) entao
ctd_mulher_sim <- (ctd_mulher_sim + 1)
fimse
se (genero=1) Entao
se (resposta="n") entao
ctd_homem_nao <- (ctd_homem_nao + 1)
fimse
fimse
se (genero=1) entao
ctd_homem_total <- (ctd_homem_total + 1)
pc_hm_nao <- ((ctd_homem_nao / ctd_homem_total) *100)
fimse
escreval ("                                ")
fimpara
escreval (ctd_sim, " Pessoas responderam SIM")
ESCREVAL ("")
ESCREVAL (ctd_nao, " Pessoas responderam NÃO")
escreval ("")
escreval (ctd_mulher_sim, " Mulheres responderam SIM")
ESCREVAL ("")
ESCREVAL (pc_hm_nao, "% Dos homens responderam NÃO")
Fimalgoritmo
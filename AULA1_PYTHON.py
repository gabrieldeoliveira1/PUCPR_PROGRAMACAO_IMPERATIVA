#var = 'xuxu'
#print(var)
#print(type(var))

#var = 5
#print(var)
#print(type(var))

#var = 5.3
#print(var)
#print(type(var))

#var = False
#print(var)
#print(type(var))

#receber o input do usuario
#fazer um cast pra conseguir transformar a string para int

var = int(input("Digite um valor: "))
result = var * 2
#no modo padrao, para controlar a quantidade de casas decimais basta coloca o .nf
print("Para o valor %d, o resultado e igual a %d" % (var, result))
#outra maneira: usando format -> estrutura de formatacao do proprio python
#da para usar o var= que printa var= o valor de var.
#usar um :.nf para controlar a quantidade de casas decimais -> n eh o numero de casas decimais4
print(f"Para o valor {var}, o resultado e igual a {result}")

teste = 0.7 - 0.3
print(f"Teste = {teste:.20f}")
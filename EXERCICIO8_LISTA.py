
escolha = -1
contador = 0

while escolha != 0:
     escolha = int(input("Digite um número inteiro -> (0 para sair): "))
     if escolha >= 100 and escolha <= 200:
        contador += 1

print(f"O numero de vezes que o valor digitado é maior que 100 e menor que 200 é de: {contador}")

num = int(input("Digite o valor: "))

#and = &&; or = ||; not = !

if num > 0 and num < 51:
    print("O valor esta no intervalo 1")
elif num > 51 and num < 101:
    print("O valor esta no intervalo 2")
else :
    print("O valor esta fora dos intervalos 1 e 2")

#OUTRA MANEIRA:

if 0 < num < 51 :
    print("O valor esta no intervalo 1")
elif 51 < num < 101:
    print("O valor esta no intervalo 2")
else :
    print("O valor esta no intervalo 3")
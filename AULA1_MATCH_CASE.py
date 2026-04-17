numero = int(input("Digite um numero: "))

match numero:
    case 1 | 2:
        print("Selecionou o conjunto 1")
    case 3 | 4:
        print("Selecionou o conjunto 2")
    case _: #equivalente ao default
        print("Selecionou errado")

ddd = int(input("Digite o DDD de discagem: "))

match ddd:
    case 61:
        print("Brasília")
    case 71:
        print("Salvador")
    case 11:
        print("São Paulo")
    case 21:
        print("Rio de Janeiro")
    case 32:
        print("Juiz de Fora")
    case 19:
        print("Campinas")
    case 27:
        print("Vitória")
    case 31:
        print("Belo Horizonte")
    case _: #equivalente ao default
        print("DDD não cadastrado.")
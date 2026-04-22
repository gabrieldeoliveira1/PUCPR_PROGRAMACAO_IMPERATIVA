N = int(input("Digite o numero de minutos Ed: "))
A = int(input("Digite o tempo de confecção do presente A: "))
B = int(input("Digite o tempo de confecção do presente B: "))

tempo_confeccao = A + B

if tempo_confeccao > N:
    print("Deixar para amanhã.")
else:
    print("Farei hoje!")
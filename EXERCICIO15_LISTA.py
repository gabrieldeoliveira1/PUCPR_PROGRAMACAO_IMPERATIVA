hora_inicial = int(input("Digite a hora inicial do jogo: "))
hora_final = int(input("Digite a hora final do jogo: "))
minuto_inicial = int(input("Digite o minuto inicial do jogo: "))
minuto_final = int(input("Digite o minuto final do jogo: "))

teste_inicial = minuto_final - minuto_inicial


if minuto_final < minuto_inicial:
    minuto_inicial = 60 - minuto_inicial
    minuto_total = minuto_final + minuto_inicial
else:
    minuto_total = minuto_final - minuto_inicial


if hora_final < hora_inicial:
    hora_total = hora_inicial + hora_final
else: 
    hora_total = hora_final - hora_inicial

print(f"O jogo durou {hora_total} horas e {minuto_total} minutos.")

#TEM QUE TERMINARRRRRRRRRRRRRRRRRRRRR!
hora_inicial = int(input("Digite a hora inicial do jogo: "))
hora_final = int(input("Digite a hora final do jogo: "))
minuto_inicial = int(input("Digite o minuto inicial do jogo: "))
minuto_final = int(input("Digite o minuto final do jogo: "))

minutos_inicio = (hora_inicial * 60) + minuto_inicial
minutos_final = (hora_final * 60) + minuto_final

duracao = minutos_final - minutos_inicio

if duracao <= 0:
    duracao += 1440

hora_total = duracao // 60
minuto_total = duracao % 60

print(f"O jogo durou {hora_total} horas e {minuto_total} minutos.")
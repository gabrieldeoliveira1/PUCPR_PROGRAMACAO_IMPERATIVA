num_vendas = int(input("Digite o numero de vendas: "))
valor_vendas = float(input("Digite o valor total das vendas: "))

valor_vendas = ((valor_vendas * 0.20) + valor_vendas) + 5 * num_vendas

print(f"A renda total eh de {valor_vendas:.2f}")
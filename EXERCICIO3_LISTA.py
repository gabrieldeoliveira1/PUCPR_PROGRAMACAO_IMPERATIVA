valor_troco = float(input("Digite o valor do troco: "))
centavos = int(valor_troco * 100)

real = centavos // 100;
centavos = centavos - (real * 100)
if real > 0 :
    print(f"O numero de moedas de 1 real eh de: {real}")

cinquenta = centavos // 50
centavos = centavos - (cinquenta * 50)
if cinquenta > 0 :
    print(f"O numero de moedas de 0.50 real eh de: {cinquenta}")

vinte_cinco = centavos // 25
centavos = centavos - (vinte_cinco * 25)
if vinte_cinco > 0 :
    print(f"O numero de moedas de 0.25 real eh de: {vinte_cinco}")

dez = centavos // 10
centavos = centavos - (dez * 10)
if dez > 0 :
    print(f"O numero de moedas de 0.10 real eh de: {dez}")

cinco = centavos // 5
centavos = centavos - (cinco * 5)
if cinco > 0 :
    print(f"O numero de moedas de 0.05 real eh de: {cinco}")

um = centavos // 1
centavos = centavos - (um * 1)
if um > 0 :
    print(f"O numero de moedas de 0.01 real eh de: {um}")

print(f"O valor do troco final eh de: {centavos}")
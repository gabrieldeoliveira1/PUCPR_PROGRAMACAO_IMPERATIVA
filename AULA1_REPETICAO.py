#nao existe o do-while, apenas o while e o for

contador = 0

'''
#break quebra o codigo no momento que chegar em sua respectiva linha
while contador < 11:
    print(f"Contador = {contador}")
    contador += 1
    if contador == 5:
        break
'''

#for <variavel> in <objeto_controle> :

for i in range(0,11) :

    print(f"Contador = {i}")
    i += 1

print("----------------")

for i in range(11) :
    print(f"Contador = {i}")
    i += 1

print("----------------")

for i in range(2,11) :

    print(f"Contador = {i}")
    i += 1

print("----------------")

#(1,10,3) 1 -> primeiro valor; 10 -> ultimo valor -> 3 -> de tres em tres vezes eh atualizado
for i in range(1,10,3) :
    print(f"Contador = {i}")
    i += 1


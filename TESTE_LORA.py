import serial
import time

# Configurações da porta serial
porta_lora = '/dev/ttyS0'  # Se usar adaptador USB, mude para '/dev/ttyUSB0'
baud_rate = 9600

try:
    # Abre a porta serial
    radio = serial.Serial(porta_lora, baud_rate, timeout=1)
    print(f"Rádio LoRa aberto com sucesso na porta {porta_lora}!")
    print("Iniciando transmissão de teste... (Pressione Ctrl+C para parar)")
    
    contador = 1
    
    while True:
        # Monta a mensagem de texto simples
        mensagem = f"Oi do Raspberry! Teste numero {contador}\n"
        
        # O rádio transmite em bytes, então precisamos codificar a string (encode)
        radio.write(mensagem.encode('utf-8'))
        
        print(f"Enviado para o ar: {mensagem.strip()}")
        
        contador += 1
        time.sleep(2)  # Espera 2 segundos antes de mandar o próximo

except serial.SerialException as e:
    print(f"Erro: Não consegui abrir a porta serial. Detalhe: {e}")
    print("Dica: Você ativou a porta serial no 'sudo raspi-config'?")
except KeyboardInterrupt:
    print("\nTeste finalizado.")
finally:
    if 'radio' in locals() and radio.is_open:
        radio.close()
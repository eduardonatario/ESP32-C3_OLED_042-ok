Informações Gerais

Arquivos de “Hello World!” do ESP32-C3 SuperMini com OLED de 0.42” integrado: 

- Placa:
https://s.click.aliexpress.com/e/_mMGpZU1

- Sobre esta placa:
Placa de desenvolvimento ESP32-C3 SuperMini com módulo OLED de 0.42 polegadas, com 4M de  memória flash integrada, antena cerâmica wifi, bluetooth. Baseada no design e produção ESP32C3FN4/FH4, marca SZYTF. Para fazer upload dos códigos na placa use um cabo USB-C e a IDE do Arduino.


- Aqui estão três códigos para fazer funcionar a tela de 0.42 desta placa:

1) OK-DISPLAY_OLED_ESP32.ino
Exibe linha horizontal e vertical e a inscrição “72x40” (resolução da tela).

2) OK_DISPLAY_OLED_ESP32-Hello_World_txt.ino
Exibe a mensagem “Hello World!” (centralizado e em duas linhas).

3) OK_Just_Led_Blink_ESP32_OLED.ino
Apenas pisca o LED azul da placa.



- Bibliotecas usadas pelo display desta placa:
  
U8g2lib.h → biblioteca que controla displays OLED/LED gráficos (SSD1306, SH1106 etc.)

Wire.h → biblioteca que controla o barramento I²C, necessário para comunicar com o OLED


- Variáveis de tamanho e deslocamento dentro do display:
  
int width = 72;
int height = 40;
int xOffset = 30; // = (132-w)/2
int yOffset = 12; // = (64-h)/2
width e height → tamanho real do seu OLED (72×40)

xOffset e yOffset → deslocamento para centralizar o display 72×40 dentro do buffer maior 128×64

xOffset = (128 - 72) / 2 = 28 (aqui foi ajustado para 30)

yOffset = (64 - 40) / 2 = 12

Isso garante que tudo que você desenhar seja centralizado na tela visível.


- Fórum com mais testes e informações sobre esta placa e display:
https://electronics.stackexchange.com/questions/725871/how-to-use-onboard-0-42-inch-oled-for-esp32-c3-oled-development-board-with-micro

- Estes códigos podem não funcionar corretamente em todas as placas ESP32-C3 SuperMini com OLED de 0.42” integrado, devido a diversidade de fabricantes e especificações de display.




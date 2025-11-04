// Código Blink para o LED azul do ESP32-C3 SuperMini

// O LED azul geralmente está no pino GPIO8
#define LED_PIN 8

void setup() {
  pinMode(LED_PIN, OUTPUT); // Define o pino como saída
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Acende o LED
  delay(500);                  // Espera 0,5 segundo
  digitalWrite(LED_PIN, LOW);  // Apaga o LED
  delay(500);                  // Espera 0,5 segundo
}

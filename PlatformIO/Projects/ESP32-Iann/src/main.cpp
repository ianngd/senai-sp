#include <Arduino.h>

int pinoLED1 = 5;
int pinoLED2 = 2;
int pinoLED3 = 21;
int pinoBotao = 23;

// Lista com os pinos dos LEDs para facilitar o acesso aleatório
int leds[] = {pinoLED1, pinoLED2, pinoLED3};

void setup() {
  pinMode(pinoLED1, OUTPUT);
  pinMode(pinoLED2, OUTPUT);
  pinMode(pinoLED3, OUTPUT);

  pinMode(pinoBotao, INPUT_PULLUP);
  
  // Para garantir que o gerador aleatório não repita sempre a mesma sequência
  randomSeed(analogRead(0));

  Serial.begin(115200);
}

void loop() {
  int estado = digitalRead(pinoBotao);

  if (estado == LOW) { // Botão pressionado
    digitalWrite(pinoLED1, LOW);
    digitalWrite(pinoLED2, LOW);
    digitalWrite(pinoLED3, LOW);

    // Sorteia um índice aleatório entre 0 e 2.. pra randomizar a luz que vai acender.
    int ledSorteado = random(0, 3);

    // Acende o LED sorteado
    digitalWrite(leds[ledSorteado], HIGH);
    Serial.println("LED aceso na porta: " + String(leds[ledSorteado]));
    delay(300); 
  } else {
    // Apaga todos os LEDs quando o botão não estiver pressionado
    digitalWrite(pinoLED1, LOW);
    digitalWrite(pinoLED2, LOW);
    digitalWrite(pinoLED3, LOW);
  }
}
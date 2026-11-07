#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Endereço do modulo LCD, número de colunas e linhas

void setup() {
  lcd.init(); // Inicializa o LCD
  lcd.backlight(); // Liga a luz de fundo do LCD
  lcd.setCursor(0, 0); // Define o cursor na primeira coluna da primeira linha
  lcd.print("Eae SENAI!"); // Exibe a mensagem no LCD

  lcd.setCursor(0,2); // Define o cursor na primeira coluna da primeira linha
  lcd.print("ESP32 + LCD"); // Exibe a mensagem no LCD
}
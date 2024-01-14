int buzzer = 1; // definiramo vhod zvocnika

void setup() {
  pinMode(buzzer,OUTPUT);
}
void loop() {
  tone(buzzer, 400); // frekvenca, ki jo zvocnik predvaja
  delay(1000);       // 1 sekunda premora
  noTone(buzzer);    // zvocnik se ugasne 
  delay(1000);       // 1 sekunda premora
}


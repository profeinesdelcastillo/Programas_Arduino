void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000); // espera 1000 milisegundos
  digitalWrite(13, LOW);
  delay(1000); // espera 1000 milisegundos

}

void setup() {
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000); // espera 1000 milisegundos
  digitalWrite(13, LOW);
  delay(1000); // espera 1000 milisegundos
  digitalWrite(8, HIGH);
  delay(1000); // espera 1000 milisegundos
  digitalWrite(8, LOW);
  delay(1000); // espera 1000 milisegundos
  digitalWrite(7, HIGH);
  delay(1000); // espera 1000 milisegundos
  digitalWrite(7, LOW);
  delay(1000); // espera 1000 milisegundos

}

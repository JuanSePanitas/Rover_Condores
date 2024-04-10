int infrarojo = 6 ;
int valor = 6 ;
void setup() {
  Serial.begin(9600);
  pinMode(infrarojo,INPUT);
}
void loop() {
  valor = digitalRead(infrarojo);

if (valor == LOW) {
  Serial.println("obstaculo detectato");
}
  delay(500);
}

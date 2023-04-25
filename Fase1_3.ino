int ledPin1 = 3;  // pin digital utilizado para el primer LED
int ledPin2 = 4; 
int ledPin3 = 5;  
int ledPin4 = 6;
int ledPin5 = 7;  
int buttonPin = 2;  // pin digital utilizado para el botón

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  // el botón se configura con resistencia pull-up
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {  // si el botón está presionado
    digitalWrite(ledPin1, HIGH);  // encender el primer LED
    delay(100);  // esperar 100 milisegundos
    digitalWrite(ledPin1, LOW);  // apagar el primer LED
    digitalWrite(ledPin2, HIGH);  // encender el segundo LED
    delay(100);  // esperar 100 milisegundos
    digitalWrite(ledPin2, LOW);  // apagar el segundo LED
    digitalWrite(ledPin3, HIGH);  // encender el tercer LED
    delay(100);  // esperar 100 milisegundos
    digitalWrite(ledPin3, LOW);  // apagar el tercer LED
    digitalWrite(ledPin4, HIGH);  // encender el cuarto LED
    delay(100);  // esperar 100 milisegundos
    digitalWrite(ledPin4, LOW);  // apagar el cuarto LED
    digitalWrite(ledPin5, HIGH);  // encender el quinto LED
    delay(100);  // esperar 100 milisegundos
    digitalWrite(ledPin5, LOW);  // apagar el quinto LED
  }
}
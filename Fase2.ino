float temperatura;            // aquí almacenaremos el valor leído
int pinentrada = 0;           // utilizaremos el pin A

void setup() {
 Serial.begin(9600); // se habre el puerto serial a 9600bps
}

void loop() {
    temperatura = analogRead(pinentrada);                    // lectura del pin A0
    temperatura = (temperatura / 1023 * 5 / 0.01);         // "traduce" el valor leído a grados
    Serial.print(temperatura);                                         // escribe el valor de la temperatura por el puerto serial
    Serial.print(" grados centigrados \n");                       // escribe las unidades
    delay(1000);
}
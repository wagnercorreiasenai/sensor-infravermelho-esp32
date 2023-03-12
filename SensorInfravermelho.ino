//Declaração de variáveis
int ledStatus = 2;
int pinoSensor = 18;

void setup() {
  //Ativando saída serial
  Serial.begin(9600);

  //Ativando principais portas
   pinMode(pinoSensor, INPUT);

  //Informação de Placa ligada
  pinMode(ledStatus, OUTPUT);
  digitalWrite(ledStatus, LOW);
  digitalWrite(ledStatus, HIGH);
}

void loop() {
  
  if(digitalRead(pinoSensor) == LOW){ //SE A LEITURA DO PINO FOR IGUAL A LOW, FAZ
     Serial.println("Objeto Detectado");
  }

  delay(250);
}

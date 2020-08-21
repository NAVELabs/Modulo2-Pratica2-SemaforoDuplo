int ledVerde1 = 3;
int ledAmarelo1 = 4;
int ledVermelho1 = 5;

int ledVerde2 = 8;
int ledAmarelo2 = 9;
int ledVermelho2 = 10;

void setup()
{
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledAmarelo1, OUTPUT);
  pinMode(ledVermelho1, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
  pinMode(ledAmarelo2, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
}

void loop()
{
  
  digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledAmarelo1, LOW);
  digitalWrite(ledVermelho1, LOW);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho2, HIGH);
  delay(2000); // Aguardar por 2000 milisegundos = 2 segundos
  
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledAmarelo1, HIGH);
  //digitalWrite(ledVermelho1, LOW);
  //digitalWrite(ledVerde2, LOW);
  //digitalWrite(ledAmarelo2, LOW);
  //digitalWrite(ledVermelho2, HIGH);
  delay(1000); // Aguardar por 2000 milisegundos = 1 segundos
  
  //digitalWrite(ledVerde1, LOW);
  digitalWrite(ledAmarelo1, LOW);
  digitalWrite(ledVermelho1, HIGH);
  //digitalWrite(ledVerde2, LOW);
  //digitalWrite(ledAmarelo2, LOW);
  //digitalWrite(ledVermelho2, HIGH);
  delay(2000); // Aguardar por 2000 milisegundos = 2 segundos
  
  //digitalWrite(ledVerde1, LOW);
  //digitalWrite(ledAmarelo1, LOW);
  //digitalWrite(ledVermelho1, HIGH);
  digitalWrite(ledVerde2, HIGH);
  //digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho2, LOW);
  delay(2000); // Aguardar por 2000 milisegundos = 2 segundos

  //digitalWrite(ledVerde1, LOW);
  //digitalWrite(ledAmarelo1, LOW);
  //digitalWrite(ledVermelho1, HIGH);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo2, HIGH);
  //digitalWrite(ledVermelho2, LOW);
  delay(1000); // Aguardar por 1000 milisegundo = 1 segundo
  
  //digitalWrite(ledVerde1, LOW);
  //digitalWrite(ledAmarelo1, LOW);
  //digitalWrite(ledVermelho1, HIGH);
  //digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho2, HIGH);
  delay(2000); // Aguardar por 2000 milisegundos = 2 segundos
  
  
}
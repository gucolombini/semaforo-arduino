const byte RED = 10; // Pino luz vermelha
const byte YELLOW = 9; // Pino luz amarela
const byte GREEN = 8; // Pino luz verde

const int REDDELAY = 6000; // Tempo de luz vermelha (em milissegundos)
const int YELLOWDELAY = 2000; //Tempo de luz amarela (em milissegundos)
const int GREENDELAY = 4000; // Tempo de luz verde (em milissegundos)

void setup(){
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop(){
  digitalWrite(RED, HIGH); // Luz vermelha!
  delay(REDDELAY);
  digitalWrite(RED, LOW);

  digitalWrite(YELLOW, HIGH); // Luz amarela!
  delay(YELLOWDELAY);
  digitalWrite(YELLOW, LOW);

  digitalWrite(GREEN, HIGH); // Luz verde!
  delay(GREENDELAY);
  digitalWrite(GREEN, LOW);

  digitalWrite(YELLOW, HIGH); // Luz amarela!
  delay(YELLOWDELAY);
  digitalWrite(YELLOW, LOW);
}
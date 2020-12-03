int white = 13;
int red = 12;
int yel = 11;
int green = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(white,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(yel,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH);
  digitalWrite(white, HIGH);
  digitalWrite(green, LOW);
  delay(5000);
  digitalWrite(yel, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(white, LOW);
  delay(1000);
  digitalWrite(green, HIGH);
  digitalWrite(yel, LOW);
  delay(4000);
}

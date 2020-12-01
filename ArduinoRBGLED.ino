//Define a variable for each pin used on the board.

int redPin = 11;
int greenPin = 10;
int bluePin = 9;

//Define each pin as a digital output, allowing it to be a source of current.

void setup () {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

void loop() {
  //Serial.print("Test");
  for(int n = 0; n < 6; n++) {
    //Serial.print("Test");
    if(n % 2 == 0) {
      for(int k = 0; k < 256; k++) {
        //Serial.print("Test");
        if(n == 0) {
          setColor(255,k,0);
          delay(10);
          //Serial.print("Test");
        } else if(n == 2) {
          //Serial.print("Test");
          setColor(0,255,k);
          delay(10);
        } else if(n == 4) {
          setColor(k,0,255);
          delay(10);
        }
      }
      //k = 0;
    } else {
      for(int t = 254; t > 0; t--) {
        //Serial.print("Test");
        if(n == 1) {
          setColor(t,255,0);
          delay(10);
        } else if(n == 3) {
          setColor(0,t,255);
          delay(10);
        } else if(n == 5) {
          setColor(255,0,t);
          delay(10);
        }
      }
      //t = 254;
    }
  }
}

/*
void loop() {
  setColor(255,0,0);
  delay(1000);
  setColor(0,255,0);
  delay(1000);
  setColor(0,0,255);
  delay(1000);
  setColor(255,255,0);
  delay(1000);
  setColor(80,0,80);
  delay(1000);
  setColor(0,255,255);
  delay(1000);
}
*/

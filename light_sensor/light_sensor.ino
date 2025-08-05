int incomingByte;
int value;

void setup() {
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  Serial.println("Please enter A for Analog or D for Digital:");
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    if (incomingByte == 'A') {
      while (Serial.available() == 0) {
        analog();
      }
    }
    else if (incomingByte == 'D') {
      while (Serial.available() == 0) {
        digital();
      }
    }
    else {
      Serial.println("Unknown command");
    }
  }
}

void analog() {
  value = analogRead(A0);
  Serial.print(value);
  Serial.print("\t");
  // int analogValue = map(value, 400, 1023, 0, 255);
  int freq = map(value, 400, 1023, 100, 1000); 
  // analogWrite(11, analogValue);
  tone(11,freq,100);
  //Serial.println(analogValue);
  Serial.println(freq);


}

void digital() {
  value = analogRead(A0);
  Serial.print(value);
  Serial.print("\t");
  boolean digitalValue = map(value, 0, 600, HIGH, LOW);
  digitalWrite(11, digitalValue);
  Serial.println(digitalValue);
}

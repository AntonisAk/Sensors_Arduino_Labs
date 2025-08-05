int green_pin = 2;
int orange_pin = 3;
int red_pin = 4;
int tempPin = A0;

void setup()
{
  pinMode(green_pin, OUTPUT);
  pinMode(orange_pin, OUTPUT);
  pinMode(red_pin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int tempValue = analogRead(tempPin);
  float temp = tempValue * 5000.0 / 1024.0;
  float temp_C = (temp - 500) / 10;
  Serial.println(tempValue);
  Serial.print("Temp = ");
  Serial.print(temp_C);
  Serial.println("C");
  if (temp_C <= 25)  {
    digitalWrite(green_pin, HIGH);
    digitalWrite(orange_pin, LOW);
    digitalWrite(red_pin, LOW);
  }
  else if (temp_C > 25 && temp_C <= 35) {
    digitalWrite(green_pin,HIGH);
    digitalWrite(orange_pin, HIGH);
    digitalWrite(red_pin, LOW);
  }
  else {
    digitalWrite(green_pin, HIGH);
    digitalWrite(orange_pin, HIGH);
    digitalWrite(red_pin, HIGH);
  }
  delay(1000);
}

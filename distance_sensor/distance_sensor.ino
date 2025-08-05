#include <dht.h>

#define buzz 4
#define trigPin 9
#define echoPin 10
#define DHT11_PIN 2

float duration, distance;
float sound_speed;
float temp, hmdt;

dht DHT;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(DHT11_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  int chk = DHT.read11(DHT11_PIN);
  temp = DHT.temperature;
  hmdt = DHT.humidity;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  sound_speed = 331.4 + (0.606 * temp) + (0.0124 +0.000058* hmdt)*temp;
  // sound_speed = 340.0;
  distance = (duration / 2) * (sound_speed / 10000);

  if(distance < 20){
    tone(buzz,5000,100);
  }

  if (distance < 400 || distance > 2) {
    Serial.print(distance);
    Serial.println(" cm");
  }
  else {
    Serial.println("Out of range");
  }
  Serial.print(temp);
  Serial.println(" C");
  Serial.print(hmdt);
  Serial.println(" %");
  Serial.println("===========");
  
  delay(50*distance);
}

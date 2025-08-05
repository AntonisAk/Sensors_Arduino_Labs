#define green_pin 3

int pin = A0;         //Pin εισόδου αισθητήρα Hall
int vcc = 5000;       //Τάση τροφοδοσίας αισθητήρα Hall σε mV

int value;            //Μεταβλητή τιμής στο εύρος 0-1023
int voltage;          //Μεταβλητή τάσης στο εύρος 0-Vcc
int field;            //Μεταβλητή τιμής πεδίου σε mT
int brightness;       // analog pin control

void setup() {
  pinMode(green_pin, OUTPUT);
  Serial.begin(9600); //Έναρξη σειριακής επικοινωνίας
}

void loop() {
  value = analogRead(pin); //Ανάγνωση τιμής του αισθητήρα Hall
  voltage = value * (vcc / 1024.0); //Μετατροπή σε τιμή τάσης (mV)
  field = map(voltage, 1000, 4000, -100, 100); //Υπολογισμός μαγνητικού πεδίου (mT)
  field +=1;          //offset

  brightness = map(abs(field), 5,120, 0,255); //map 0-255


  if(abs(field) > 5){
    //digitalWrite(green_pin,HIGH);
    analogWrite(green_pin,brightness); 
  }  
  else{
    digitalWrite(green_pin,LOW);
  }
  
  //Εμφάνιση αποτελεσμάτων
  Serial.print("Value: ");
  Serial.print(value);
  Serial.print("\t");
  Serial.print(voltage);
  Serial.println(" mV");
  Serial.print("Magnetic Field: ");
  Serial.print(field);
  Serial.println(" mT");
  //Serial.print("Brightness: ");
  //Serial.print(brightness);
  Serial.println("==========================");
  delay(100); //Λήψη νέας τιμής κάθε 100ms 
}

const int analogPin = A0;
const unsigned int sampleCount = 200; 
const float referenceVoltage = 5.0;   

void setup() {
  Serial.begin(9600);
}

void loop() {
  unsigned int signalMax = 0;
  unsigned int signalMin = 1023;

  for (int i = 0; i < sampleCount; i++) {
    int sample = analogRead(analogPin);
    if (sample > signalMax) signalMax = sample;
    if (sample < signalMin) signalMin = sample;
    delayMicroseconds(10); // ~100 kHz sampling rate (10 us per sample)
  }

  // Convert to millivolts
  unsigned int peakToPeak = signalMax - signalMin;
  float voltage = (peakToPeak * referenceVoltage * 1000.0) / 1023.0;

  Serial.print("Peak-to-Peak Voltage: ");
  Serial.print(voltage,0);
  Serial.println(" mV");

  // New value every 3 sec
  delay(3000); 
}
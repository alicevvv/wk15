

void setup() {

// initialize serial communications at 9600 bps:

Serial.begin(9600);}

void loop() {

int sensorRead = analogRead(A0);

  if(sensorRead< 135){ sensorRead=135;}
  else if(sensorRead > 186){sensorRead=186;}
  int ledDimming = map(sensorRead, 135, 186, 1, 255);
  analogWrite(3, ledDimming);
  Serial.println(ledDimming);
  delay(3000);


}

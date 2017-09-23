//Stupid simple camera trigger.
//Hookup the output pin to a RELAY
//Hookup the COLLECTOR and NO on the RELAY to the trigger/ground on the camera

#define tPause 250  //how long to hold trigger
#define tTrigger 5000  //how many milliseconds between triggers 1000=1sec
#define tOutput A0  //Set to output pin going to relay

void setup() {
  pinMode(tOutput, OUTPUT);
  digitalWrite(tOutput,LOW);
}

void loop() {
  delay(tTrigger);
  Serial.println("waiting");
  digitalWrite(tOutput,HIGH);
  delay(tPause);
  digitalWrite(tOutput,LOW);
}

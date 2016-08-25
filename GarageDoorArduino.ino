// For reading in a serial character
int inByte = 0;

// The pin that controls the transistor
int transistorPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(transistorPin, OUTPUT);
}

void loop() {
  // Continually check for any serial text
  if (Serial.available() > 0) {
    // get incoming byte:
    inByte = Serial.read();

    // If we get the serial value for 1, click the button
    if(inByte == 49){
      digitalWrite(transistorPin, HIGH);
      delay(500);
      digitalWrite(transistorPin, LOW);
    }

    // Add code here for listening for the serial code for "s"
    // to check status of the door
  }

}

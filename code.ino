int count = 0;
bool lastButtonState = HIGH;  // because we utilise INPUT_PULLUP 
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);     // red LED
  pinMode(12, OUTPUT);     // blue LED
  pinMode(11, OUTPUT);     // green LED
  pinMode(2, INPUT_PULLUP);       // button with integrated Pullup
   Serial.begin(9600);
}

void loop() {
    bool buttonState = digitalRead(2);
  // put your main code here, to run repeatedly:
  if(count == 1){                               // LED light mode
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
  if(count == 2){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
  }
  if(count == 3){
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
  }
  if(count == 4){
    count = 1;
  }    
  if(lastButtonState == HIGH && buttonState == LOW) {     // counter
    count++;
    Serial.print("Gedrückt: ");
    Serial.println(count);
    delay(50);  // einfache Entprellung
  }

  lastButtonState = buttonState;
}

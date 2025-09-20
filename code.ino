int trigPin = 10; 
int echoPin = 11; 
int buzzer = 12; 
int battery = 2; // Switch input pin 
 
void setup() { 
  Serial.begin(9600); 
  pinMode(buzzer, OUTPUT); 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  //pinMode(switchPin, INPUT_PULLUP); // Use the internal pull-up resistor for the switch 
} 
 
void loop() { 
  long duration, distance; 
  //boolean switchState = digitalRead(switchPin); 
 
 //if (switchState == LOW) { 
    // Switch is pressed, perform distance measurement 
    digitalWrite(trigPin, HIGH); 
    delayMicroseconds(1000); 
    digitalWrite(trigPin, LOW); 
    duration = pulseIn(echoPin, HIGH); 
    distance = (duration / 2) / 29.1; 
 
    Serial.print("Distance: "); 
    Serial.print(distance); 
    Serial.println(" cm"); 
 
    if (distance <= 20) { 
      digitalWrite(buzzer, HIGH); 
    } else { 
      digitalWrite(buzzer, LOW); 
    } 
 
    delay(10); 
  } 
//}
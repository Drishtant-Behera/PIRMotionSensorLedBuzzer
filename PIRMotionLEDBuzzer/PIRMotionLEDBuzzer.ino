//Not all code made by me some code is taken form the web

int led = 13;
int sensor = 8;
int buzzer = 12;
int state = LOW;
int val = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  val = digitalRead(sensor);
  if (val == HIGH) {
    digitalWrite(9, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    delay(3000);
    
    if (state == LOW) {
      Serial.println("Motion detected!"); 
      state = HIGH;
    }
  } 
  else {
      digitalWrite(11, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(12, LOW);
      delay(20);

      if (state == HIGH){
        Serial.println("Motion stopped!");
        state = LOW;
    }
  }
}

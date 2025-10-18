void setup() {
  pinMode(3,OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(2) ==  LOW){
    Serial.println("Co khi gas");
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
  } else {
    Serial.println("OK");
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
  }
  
}

const int sag_i = 4; 
const int sag_g = 5;
const int sol_i = 7;
const int sol_g = 6;
String data;
void setup() {
  Serial.begin(9600);
  pinMode(sag_i, OUTPUT); 
  pinMode(sag_g, OUTPUT);
  pinMode(sol_i, OUTPUT);
  pinMode(sol_g, OUTPUT);
}

void loop() {
while (Serial.available()) {
    delay(3);  
    char c = Serial.read();
    data += c; 

}
delay(100);
if(data=="FORW"){
  digitalWrite(sag_i, HIGH);
    digitalWrite(sag_g, LOW);
    digitalWrite(sol_i, HIGH);
    digitalWrite(sol_g, LOW);
  }
  if(data=="LEFT"){
  digitalWrite(sag_i, HIGH);
    digitalWrite(sag_g, LOW);
    digitalWrite(sol_i, LOW);
    digitalWrite(sol_g, LOW);
  }
  if(data=="BACK"){
  digitalWrite(sag_i, LOW);
    digitalWrite(sag_g, HIGH);
    digitalWrite(sol_i, LOW);
    digitalWrite(sol_g, HIGH);
  }
  if(data=="RIGHT"){
  digitalWrite(sag_i, LOW);
    digitalWrite(sag_g, LOW);
    digitalWrite(sol_i, HIGH);
    digitalWrite(sol_g, LOW);
  }
  if(data=="STOP"){
  digitalWrite(sag_i, LOW);
    digitalWrite(sag_g, LOW);
    digitalWrite(sol_i, LOW);
    digitalWrite(sol_g, LOW);
  }
delay(100);
Serial.print(data);
data="";
}

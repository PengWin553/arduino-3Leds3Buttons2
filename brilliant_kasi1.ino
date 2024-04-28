int btn1=8;
int btn2=9;
int btn3=10;
int led1=11;
int led2=12;
int led3=13; 
int btn1State;
int btn2State;
int btn3State;
int btn1CircuitState = LOW;
int btn2CircuitState = LOW;
int btn3CircuitState = LOW;
void setup()
{
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(btn3,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  btn1State = digitalRead(btn1);
  btn2State = digitalRead(btn2);
  btn3State = digitalRead(btn3);
  //part one
  if(btn1State == LOW){
    Serial.println("Button 1 is pressed.");
    if(btn1CircuitState == LOW);
     btn1CircuitState = HIGH;
    }else{
     btn1CircuitState = LOW;
    }
   if(btn2State == LOW){
     Serial.println("Button 2 is pressed.");
    if(btn2CircuitState == LOW);
     btn2CircuitState = HIGH;
    }else{
     btn2CircuitState = LOW;
    }
  if(btn3State == LOW){
    Serial.println("Button 3 is pressed.");
    if(btn3CircuitState == LOW);
     btn3CircuitState = HIGH;
    }else{
     btn3CircuitState = LOW;
    }
  //part2
  if(btn1CircuitState == HIGH){
    Serial.println("Button one is on. Others are off.");
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
  else if(btn2CircuitState == HIGH){
    Serial.println("Button two is on. Others are off.");
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  }
  else if(btn3CircuitState == HIGH){
 Serial.println("Button three is on. Others are off.");
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
  }    
  //IF YOU WANT THE LEDS TO ONLY ILLUMINATE BRIEFLY, use this for part 2
 /*  if(btn1CircuitState == LOW)
   {
     digitalWrite(led1, LOW)
   }
   else{
     digitalWrite(led1, HIGH);
   }
   if(btn2CircuitState == LOW)
   {
     digitalWrite(led2, LOW);
   }
   else{
     digitalWrite(led2, HIGH);
   }
   if(btn3CircuitState == LOW)
   {
     digitalWrite(led3, LOW);
   }
   else{
     digitalWrite(led3, HIGH);
   }
   */          
}
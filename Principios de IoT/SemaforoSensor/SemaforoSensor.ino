
const int PIRPin = D4;
int pirState = LOW;
int val = 0;
int counter;

void setup()
{
pinMode(D1, OUTPUT);
pinMode(D2, OUTPUT);
pinMode(D3, OUTPUT);
pinMode(D5, OUTPUT);
pinMode(PIRPin, INPUT);
Serial.begin(9600);
}
void loop()
{
        digitalWrite(D3,LOW);
        digitalWrite(D2, LOW);
        digitalWrite(D1, LOW);
        
      digitalWrite(D1, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(D1, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
      
      digitalWrite(D2, HIGH);
      delay(500); // Wait for 1000 millisecond(s)
        for (counter = 0; counter < 3; ++counter) 
        {
          digitalWrite(D2, LOW);
          delay(500); // Wait for 1000 millisecond(s)
          digitalWrite(D2, HIGH);
          delay(500); // Wait for 1000 millisecond(s)
        }
        digitalWrite(D2, LOW);
      digitalWrite(D3, HIGH);
      delay(1000); // Wait for 5000 millisecond(s)
      digitalWrite(D3, LOW);

      
  val = digitalRead(PIRPin);
  if (val == HIGH)
    {
      digitalWrite(D5,HIGH);
    
        digitalWrite(D3,HIGH);
        digitalWrite(D2, HIGH);
        digitalWrite(D1, HIGH);
        for (counter = 0; counter < 3; ++counter) 
        {
          digitalWrite(D3, LOW);
          digitalWrite(D2, LOW);
          digitalWrite(D1, LOW);
          delay(500); // Wait for 1000 millisecond(s)
          digitalWrite(D3, HIGH);
          digitalWrite(D2, HIGH);
          digitalWrite(D1, HIGH);
          delay(500); // Wait for 1000 millisecond(s)
         }
    }

    else
    {
      digitalWrite(D5,LOW);
    
        digitalWrite(D3,LOW);
        digitalWrite(D2, LOW);
        digitalWrite(D1, LOW);
    }
    
}
      
      
      

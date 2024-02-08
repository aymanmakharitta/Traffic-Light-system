// C++ code
//
int a=10;
int b=9;
int c=8;

void setup()
{
pinMode(a,OUTPUT);pinMode(b,OUTPUT);pinMode(c,OUTPUT);
}

void loop()
{
 digitalWrite(a,HIGH);
  delay(1000);
   digitalWrite(a,HIGH); digitalWrite(b,HIGH);
  delay(1000);
   digitalWrite(a,HIGH); digitalWrite(b,LOW);
    delay(1000);
 digitalWrite(a,HIGH); digitalWrite(b,HIGH);
  delay(1000);
   digitalWrite(a,HIGH); digitalWrite(b,LOW);
    delay(1000);
  digitalWrite(a,HIGH); digitalWrite(b,HIGH);
  delay(1000);
   digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,HIGH);
  delay(1000);
  digitalWrite(a,LOW); digitalWrite(b,LOW); digitalWrite(c,LOW);
  delay(1000);
}
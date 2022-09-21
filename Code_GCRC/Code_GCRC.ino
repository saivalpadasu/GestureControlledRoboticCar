void setup() {
  // initialize the serial communications:
  Serial.begin(9600);
  pinMode(rf1,OUTPUT);
  pinMode(rf2,OUTPUT);
  pinMode(rf3,OUTPUT);
  pinMode(rf4,OUTPUT);
  
  
  digitalWrite(rf1, LOW);
  digitalWrite(rf2, LOW);
  digitalWrite(rf3, LOW);
  digitalWrite(rf4, LOW);
  
  
}

void loop() {
 
  // print the sensor values:
  int a,b,c;
  a=analogRead(xpin);
  b=analogRead(ypin);
  Serial.print("\t");
  c=analogRead(zpin);
if(a<=290)
{
  
  
  Serial.print("back");
  digitalWrite(rf1, LOW);
  digitalWrite(rf2, HIGH);
  digitalWrite(rf3, LOW);
  digitalWrite(rf4, LOW);
   delay(100);

 
}
else if(a>=380)
{
  
  
  Serial.print("front");
 
  
 digitalWrite(rf1, HIGH);
  digitalWrite(rf2, LOW);
  digitalWrite(rf3, LOW);
  digitalWrite(rf4, LOW);
  delay(100);
}
else if(b<=283)
{
  

  Serial.print("left");
  
  
 digitalWrite(rf1, LOW);
  digitalWrite(rf2, LOW);
  digitalWrite(rf3, LOW);
  digitalWrite(rf4, HIGH);
    delay(100);

}
else if(b>=397)
{
  
  
  Serial.print("right");
  
  
digitalWrite(rf1, LOW);
  digitalWrite(rf2, LOW);
  digitalWrite(rf3, HIGH);
  digitalWrite(rf4, LOW);
  delay(100);

}
else if(c>=380)
{
Serial.print("stop");
  digitalWrite(rf1, LOW);
  digitalWrite(rf2, LOW);
  digitalWrite(rf3, LOW);
  digitalWrite(rf4, LOW);
  delay(100);
  
 delay(10);
}
}

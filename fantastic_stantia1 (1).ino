int green = 1;
int yellow = 2;
int red = 3;

int on = HIGH;
int off = LOW;

//================================

void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(green, on);
  delay(100);
  digitalWrite(green, off);
  
  digitalWrite(yellow, on);
  delay(100);
  digitalWrite(yellow, off);
  
  digitalWrite(red, on);
  delay(100);
  digitalWrite(red, off);
}
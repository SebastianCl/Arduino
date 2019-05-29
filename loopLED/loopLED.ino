int red = 12;
int mls = 100;

void setup ()
{
  pinMode(red, OUTPUT);
}

void loop ()
{
 digitalWrite(red, HIGH);
 delay(mls);
 digitalWrite(red, LOW);
 delay(mls);
}

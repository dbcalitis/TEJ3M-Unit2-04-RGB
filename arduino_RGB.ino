/*

  Created by: Daria Bernice Calitis

  Created on: Feb 2022



  Turns an LED on for one second, then off for one second, repeatedly.

*/

int red = 13;
int blue = 12;
int green = 11;


void setup()
{
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
}



void loop()
{
  // Red
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  // Green
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(red, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  // Blue
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(red, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  

  // Yellow
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  // Purple
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  // Cyan
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(red, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  // White
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(red, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)

}

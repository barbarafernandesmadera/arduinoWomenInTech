/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 2; //LED_BUILTIN
int led_2 = 4;
int led_3 = 8;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);   
  pinMode(led_2, OUTPUT);  
  pinMode(led_3, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led_2,LOW);
  digitalWrite(led_3, HIGH);
  delay(500); //delay(1000) default              // wait for a second- instruçoes vazias para visualiar melhor as luzes
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  delay(200);         //delay(1000) default      // wait for a second
}

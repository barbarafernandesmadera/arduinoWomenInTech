/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int porta_botao = 2; //LED_BUILTIN

// the setup routine runs once when you press reset:
void setup() { 
  pinMode(porta_botao, INPUT);               
  // initialize the digital pin as an output.
  Serial.begin(9600);
}


// the loop routine runs over and over again forever:
void loop() {
  if(digitalRead(porta_botao)){
    Serial.println("Apertei o botao =)");  
  }
    Serial.println("Nao apertei o botao =(");
  delay(500);  
}

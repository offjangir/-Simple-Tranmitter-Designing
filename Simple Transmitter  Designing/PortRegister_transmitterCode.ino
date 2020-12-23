//Transmitter will be using 3 pins in arduino 
//pin 5 - on/off max232
// pins 3-4 Tin and Tout
//PORT REGISTER CODE FOR TRANSRECIEVER 
//PINS USED - ACTIVATION OF MAX232 5
//PINS USED - DIGITAL BURST 3,4 

void setup() {
     DDRD |= B00111000;  // Sets D3, D4, D5 outputs
}

void loop() {
  PORTD |= B00100000; //Set pin 5 high to start the circuit
      //sending a burst
  //1
  PORTD |= B00001000;   //D3 HIGH
  PORTD &= B11101111;   //D4 LOW
  delayMicroseconds(12);//12us so around 40KHz. Freq = 1/2*12us
  PORTD &= B11110111;   //D3 LOW
  PORTD |= B00010000;   //D4 HIGH
  delayMicroseconds(12);
  //2
  PORTD |= B00001000;   //D3 HIGH
  PORTD &= B11101111;   //D4 LOW
  delayMicroseconds(12);
  PORTD &= B11110111;   //D3 LOW
  PORTD |= B00010000;   //D4 HIGH
  delayMicroseconds(12);
  //3
  PORTD |= B00001000;   //D3 HIGH
  PORTD &= B11101111;   //D4 LOW
  delayMicroseconds(12);
  PORTD &= B11110111;   //D3 LOW
  PORTD |= B00010000;   //D4 HIGH
  delayMicroseconds(12);
  //4
  PORTD |= B00001000;   //D3 HIGH
  PORTD &= B11101111;   //D4 LOW
  delayMicroseconds(12);
  PORTD &= B11110111;   //D3 LOW
  PORTD |= B00010000;   //D4 HIGH
  delayMicroseconds(12);
  //5
  PORTD |= B00001000;   //D3 HIGH
  PORTD &= B11101111;   //D4 LOW
  delayMicroseconds(12);
  PORTD &= B11110111;   //D3 LOW
  PORTD |= B00010000;   //D4 HIGH
  delayMicroseconds(12);
  //6
  PORTD |= B00001000;   //D3 HIGH
  PORTD &= B11101111;   //D4 LOW
  delayMicroseconds(12);
  PORTD &= B11110111;   //D3 LOW
  PORTD |= B00010000;   //D4 HIGH
  delayMicroseconds(12);
  //7
  PORTD |= B00001000;   //D3 HIGH
  PORTD &= B11101111;   //D4 LOW
  delayMicroseconds(12);
  PORTD &= B11110111;   //D3 LOW
  PORTD |= B00010000;   //D4 HIGH
  delayMicroseconds(12);
  //8
  PORTD |= B00001000;   //D3 HIGH
  PORTD &= B11101111;   //D4 LOW
  delayMicroseconds(12);
  PORTD &= B11110111;   //D3 LOW
  PORTD |= B00010000;   //D4 HIGH
  delayMicroseconds(12);
   
   PORTD &= B11101111; //deactivate the circuit and setting everthing low
  delayMicroseconds(25);
 
}

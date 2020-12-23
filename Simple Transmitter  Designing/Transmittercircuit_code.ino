//Transmitter will be using 3 pins in arduino 
//pin 7 - on/off max232
// pins 5-6 Tin and Tout
int transmitterPin[] = {7,5,6};

void setup() {
//initializing the pins 
  for(int a=0; a<3 ; a++)
  { pinMode(transmitterPin[a],OUTPUT);
    }
}

void loop() {
  digitalWrite(transmitterPin[0],HIGH);//activate the circuit
  //sending a burst
  for(int a=0 ; a<8 ; a++){
    if(a%2 == 0)
      { digitalWrite(transmitterPin[1],HIGH);
        digitalWrite(transmitterPin[2],LOW);}
    else 
      { digitalWrite(transmitterPin[1],LOW);
        digitalWrite(transmitterPin[2],HIGH);}
    delayMicroseconds(12.5);
    }
  digitalWrite(transmitterPin[0],LOW);//deactivate the circuit
  delayMicroseconds(25);
}

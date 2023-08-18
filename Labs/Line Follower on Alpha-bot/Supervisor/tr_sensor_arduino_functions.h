#define cs 2
#define miso 3
#define mosi 4
#define clk 5

#define Clock     13
#define Address   12
#define DataOut   11
#define CS        10

#define numSensors 5
unsigned long sensorvalues[numSensors + 1];

#include <avr/io.h>
#include <util/delay.h>

void tr_config(void){
    DDRB |= ((1<<cs) | (1<<mosi) | (1<<clk));
    DDRB &= ~(1<<miso);
    PORTB |= (1<<miso);
}

unsigned long tr_update(char j){
  unsigned long value = 0;
  digitalWrite(CS,LOW);
    for(char i = 0;i < 10;i++)
    {
      //0 to 4 clock transfer channel address
      if((i < 4) && (j >> (3 - i) & 0x01))
      digitalWrite(Address,HIGH);
      else
      digitalWrite(Address,LOW);

      //0 to 10 clock receives the previous conversion result
      value <<= 1;
      if(digitalRead(DataOut)) 
      value |= 0x01;
      digitalWrite(Clock,HIGH);
      digitalWrite(Clock,LOW);
    }
    //sent 11 to 16 clock 
    for(char i = 0;i < 6;i++)
    {
      digitalWrite(Clock,HIGH);
      digitalWrite(Clock,LOW);
    }
    digitalWrite(CS,HIGH);
  return value;
}
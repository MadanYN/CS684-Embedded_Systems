#define cs PB2
#define miso PB3
#define mosi PB4
#define clk PB5

#define numSensors 5
unsigned long sensorvalues[numSensors];

#include <avr/io.h>
#include <util/delay.h>

void tr_config(void){
    DDRB |= ((1<<cs) | (1<<mosi) | (1<<clk));
    DDRB &= ~(1<<miso);
    PORTB |= (1<<miso);
}

unsigned long tr_update(char j){
  //digitalWrite(CS,LOW);
  unsigned long value=0;
  PORTB &= ~(1<<cs);
    for(char i = 0;i < 10;i++)
    {
      //0 to 4 clock transfer channel address
      if((i < 4) && (j >> (3 - i) & 0x01))
      //digitalWrite(Address,HIGH);
        PORTB |= (1<<mosi);
      else
      //digitalWrite(Address,LOW);
        PORTB &= ~(1<<mosi);

      //0 to 10 clock receives the previous conversion result
      value <<= 1;
      //if(digitalRead(DataOut)) 
      if(PINB & (1<<miso))
        value |= 0x01;
      //digitalWrite(Clock,HIGH);
      PORTB |= (1<<clk);
      //digitalWrite(Clock,LOW);
      PORTB &= ~(1<<clk);
    }
    //sent 11 to 16 clock 
    for(char i = 0;i < 6;i++)
    {
      //digitalWrite(Clock,HIGH);
      PORTB |= (1<<clk);
      //digitalWrite(Clock,LOW);
      PORTB &= ~(1<<clk);
    }
    //digitalWrite(CS,HIGH);
   PORTB |= (1<<cs);
  return value;
}
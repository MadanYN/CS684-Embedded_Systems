#include <stdio.h>
#include <stdint.h>
#include <avr/io.h>

#define Clock     PB5
#define Address   PB4
#define DataOut   PB3
#define CS        PB2

#define NUM_SENSORS 5
uint16_t sensorValues[NUM_SENSORS];

void setup() {
  Serial.begin(115200);
  Serial.println("TRSensor example");
  DDRB |= (1 << Clock) | (1 << Address) | (1 << CS);
  DDRB &= ~(1 << DataOut);
  PORTB |= (1 << DataOut);
}

void loop() {
  char i, j;
  uint16_t channel = 0;
  uint16_t values[] = {0,0,0,0,0,0};

  for(j = 0; j < NUM_SENSORS + 1; j++) {
    PORTB &= ~(1 << CS);
    for(i = 0; i < 10; i++) {
      // 0 to 4 clock transfer channel address
      if((i < 4) && (j >> (3 - i) & 0x01)) {
        PORTB |= (1 << Address);
      } else {
        PORTB &= ~(1 << Address);
      }

      // 0 to 10 clock receives the previous conversion result
      values[j] <<= 1;
      if(PINB & (1 << DataOut)) {
        values[j] |= 0x01;
      }
      PORTB |= (1 << Clock);
      PORTB &= ~(1 << Clock);
    }
    // sent 11 to 16 clock
    for(i = 0; i < 6; i++) {
      PORTB |= (1 << Clock);
      PORTB &= ~(1 << Clock);
    }
    PORTB |= (1 << CS);
  }

  for(i = 0; i < NUM_SENSORS; i++) {
    sensorValues[i] = values[i+1];
  }

  for(int i = 0; i < NUM_SENSORS; i++) {
    //printf("%d\t", sensorValues[i]);
    Serial.print(sensorValues[i]);
    Serial.print(" ");
  }
  //printf("\n");
  Serial.println(" ");
  delay(1000);
}

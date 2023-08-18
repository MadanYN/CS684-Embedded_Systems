#define Ena 5
#define Enb 6

#include <avr/io.h>
#include <util/delay.h>

void motion_pin_config (void){
    DDRC |= 0x0F;
    PORTC &= 0xF0;
    DDRD |= ((1<<Ena) | (1<<Enb));
    PORTD |= ((1<<Ena) | (1<<Enb));
}

void timer1_init(){
    TCNT0 = 0x00;
    TCCR0A = 0xA3;
    TCCR0B = 0x03;
    OCR0A = 0x00;
    OCR0B = 0x00;
}

void forward(){
    PORTC &= 0xF0;
    PORTC |= 0x06;
}

void backward(){
    PORTC &= 0xF0;
    PORTC |= 0x09;
}

void velocity(unsigned char left, unsigned char right){
    OCR0A = (unsigned char)left;
    OCR0B = (unsigned char)right;
}
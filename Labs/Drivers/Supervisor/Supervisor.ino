#include "motor.h"
#include "color_sensor.h"
#include "controller.c"

Controller__controller_out res;
Controller__controller_mem mem;

void setup() {
  // put your setup code here, to run once:
  motion_pin_config(); //initialize motor interface
  timer1_init();
  init_devices(); //initialize color sensor
  color_sensor_scaling();
  Controller__controller_reset(&mem);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  blue_read();
  red_read(); 
	green_read();
	//blue_read();
  //Serial.println(red);
  //Serial.println(green);
  //if(red < 10000){

 if ( red > blue && red > green){
		red_b = true;
		green_b = false;
		blue_b = false;
	}
	else if ( green > blue && green > red){
		red_b = false;
		green_b = true;
		blue_b = false;
	}
	else if (blue>green && blue >red){
		red_b = false;
		green_b = false;
		blue_b = true;
  }
  else{
    red_b = false;
		green_b = false;
		blue_b = false;

  }

  Controller__controller_step(red_b, green_b, blue_b, &res, &mem);
  forward();
  Serial.print(" blue: ");
  //Serial.print(res.velocity_left);
  Serial.print(blue);
  Serial.print(" green: ");
  //Serial.print(res.velocity_right);
  Serial.print(green);
  Serial.print(" red: ");
  Serial.print(red);
  velocity(res.velocity_left, res.velocity_right);
  Serial.print(" velocity: ");
  Serial.print(res.velocity_left);
  Serial.println(" ");
  //velocity(100,100);
  delay(10);
  //Serial.print(blue);
  //}
}

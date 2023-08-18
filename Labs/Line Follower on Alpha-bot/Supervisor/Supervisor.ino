#include "motor.h"
#include "color_sensor.h"
//#include "tr_sensor.h"
#include "tr_sensor_arduino_functions.h"
#include "lineFollow.c"

LineFollow__line_follow_out res;
LineFollow__line_follow_mem mem;

void setup() {
  // put your setup code here, to run once:
  motion_pin_config();  //initialize motor interface
  timer1_init();
  // init_devices(); //initialize color sensor
  // color_sensor_scaling();
  tr_config();
  //Try1__line_follow_reset(&mem);
  LineFollow__line_follow_reset(&mem);
  Serial.begin(115200);
}

void loop() {
unsigned int garbage = 0;
  for (char j = 0; j < numSensors + 1; j++){
    if(j != 0)    
      sensorvalues[j-1] = tr_update(j);
    else
      garbage = tr_update(j);
    //sensorvalues[j] = tr_update[j];
  }

  LineFollow__line_follow_step(1000-sensorvalues[0], 1000-sensorvalues[1], 1000-sensorvalues[2], 1000-sensorvalues[3], 1000-sensorvalues[4], &res, &mem);
  //Try1__line_follow_step(sensorvalues[0], sensorvalues[1], sensorvalues[2], sensorvalues[3], sensorvalues[4], &res, &mem);
  // Serial.print(sensorvalues[0]);
  // Serial.print(" ");
  // Serial.print(sensorvalues[1]);
  // Serial.print(" ");
  // Serial.print(sensorvalues[2]);
  // Serial.print(" ");
  // Serial.print(sensorvalues[3]);
  // Serial.print(" ");
  // Serial.print(sensorvalues[4]);
  // Serial.print(" ");
  // delay(1000);
  LineFollow__modes modes = res.nodenum;
  direction(res.ldir, res.rdir);
  //direction(1,1);
  velocity(res.left_vel, res.right_vel);
  //velocity(100, 100);
  // Serial.print(1000-sensorvalues[0]);
  // Serial.print(" ");
  // Serial.print(1000-sensorvalues[1]);
  // Serial.print(" ");
  // Serial.print(1000-sensorvalues[2]);
  // Serial.print(" ");
  // Serial.print(1000-sensorvalues[3]);
  // Serial.print(" ");
  // Serial.print(1000-sensorvalues[4]);
  // Serial.println(" ");
  // Serial.print("left : ");
  // Serial.println(res.left_vel/2);
  // Serial.print("right : ");
  // Serial.println(res.right_vel/2);
  // delay(1000);
}

#define Clock     13
#define Address   12
#define DataOut   11
#define CS        10

int _numSensors = 5;

#define NUM_SENSORS 5
unsigned int sensorValues[NUM_SENSORS];


void setup()
{
  Serial.begin(115200);
  Serial.println("TRSensor example"); 
  pinMode(Clock, OUTPUT);
  pinMode(Address, OUTPUT);
  pinMode(DataOut, INPUT);
  pinMode(CS, OUTPUT);  
}

void loop()
{
  char i,j;
  unsigned int channel = 0;
  unsigned int values[] = {0,0,0,0,0,0};

  for(j = 0;j < _numSensors + 1;j++)
  {
    digitalWrite(CS,LOW);
    for(i = 0;i < 10;i++)
    {
      //0 to 4 clock transfer channel address
      if((i < 4) && (j >> (3 - i) & 0x01))
      digitalWrite(Address,HIGH);
      else
      digitalWrite(Address,LOW);

      //0 to 10 clock receives the previous conversion result
      values[j] <<= 1;
      if(digitalRead(DataOut)) 
      values[j] |= 0x01;
      digitalWrite(Clock,HIGH);
      digitalWrite(Clock,LOW);
    }
    //sent 11 to 16 clock 
    for(i = 0;i < 6;i++)
    {
      digitalWrite(Clock,HIGH);
      digitalWrite(Clock,LOW);
    }
    digitalWrite(CS,HIGH);
  }

  for(i = 0;i < _numSensors;i++)
  {
    sensorValues[i] = values[i+1];
  }

  for(int i = 0;i < NUM_SENSORS;i++)
  {
    Serial.print(sensorValues[i]);
    Serial.print("\t");
  }
  Serial.print("\n");
}

#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11);


#define SW 2 

void setup() 
{
   
  
  pinMode(SW, OUTPUT);

  
  BT.begin(9600);

  
  BT.println("Hello from Arduino");
}

char a; 

void loop()
{
  if (BT.available())
  
  {
    a=(BT.read());
    if (a=='1')
    {
      digitalWrite(SW, LOW);
      BT.println("Water Pump on");
    }
    if (a=='0')
    {
      digitalWrite(SW, HIGH);
      BT.println("Water Pump off");
    }
    if (a=='?')
    {
      BT.println("Send '1' to turn Water Pump on");
      BT.println("Send '0' to turn Water Pump OFF");
    }  
   
  }
}
code 14, science plus lab.txt
Displaying code 14, science plus lab.txt.
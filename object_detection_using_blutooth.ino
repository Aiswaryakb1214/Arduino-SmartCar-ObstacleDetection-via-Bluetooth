//in keypad we press 1 ,the dc motor act as a wheel in a car ,it needs yo move forward
//if any object is dectected on 100cm it needs to sound buzzer
//if we press 2 the motor goes to backward,object detected buzzer need
//if we press  3 stop the motor



#define trig A4
#define echo A5

float time,distance;

char x='0';
#include<SoftwareSerial.h>

/* Create object named bt of the class SoftwareSerial */ 
SoftwareSerial bt(2,3); /* (Rx,Tx) */	

void setup() {
  bt.begin(9600);	/* Define baud rate for software serial communication */
  Serial.begin(9600);	/* Define baud rate for serial communication */
   /*pinMode(7,OUTPUT);//led
  pinMode(5,OUTPUT);//input 1
  pinMode(4,OUTPUT);//input 2
  pinMode(9,OUTPUT);//en pin
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  Serial.println("Enter '1' to move forward,'2' to backward,'3' to stop");*/
}

void loop()
 {
  
    if (bt.available())	/* If data is available on serial port */
    {
     //Serial.write(bt.read());	/* Print character received on to the serial monitor */
     char x=bt.read();
     Serial.print(x);
    }
    
/*digitalWrite(trig,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trig,LOW);

  
  time=pulseIn(echo,HIGH);
  distance=(time*0.034)/2;
 
  //Serial.println(" cm distance");
  //Serial.print(distance);
    if(x=='1')
    {
      digitalWrite(5,HIGH);
      digitalWrite(4,LOW);
      analogWrite(3,200);
      if(distance<100)
      {
        digitalWrite(2,HIGH);
      }
      else if(distance>=100)
      {
        digitalWrite(2,LOW);

      }
    }
    else if(x=='2')
    {
      digitalWrite(5,LOW);
      digitalWrite(4,HIGH);
      analogWrite(3,200);
      if(distance<100)
      {
        digitalWrite(2,HIGH);
      }
      else if (distance>=100)
      {
        digitalWrite(2,LOW);
   
      }
    }
     else if(x=='3')
      {
        digitalWrite(5,LOW);
        digitalWrite(4,LOW);
        analogWrite(3,0);
       
        digitalWrite(2,LOW);

       
      }*/
   
  
   
  
}



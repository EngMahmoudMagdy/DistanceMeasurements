#include <NewPing.h>

int trig = 12 ; 
int echo = 11 ; 
int max_dis = 200 ; 

NewPing sonic (trig , echo , max_dis);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 

}

void loop() {
  // put your main code here, to run repeatedly:
  int us = sonic.ping();
  int dis = us / US_ROUNDTRIP_CM ;
  Serial.print("ping :"); 
  Serial.println(dis); 
  delay(50);
  

}

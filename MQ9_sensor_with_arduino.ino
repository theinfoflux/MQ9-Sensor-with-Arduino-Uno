
#define sensorpin     A0                        
#define buzzer       2                      
#define led         13                       

void setup() {
  Serial.begin(9600);  
  pinMode(sensorpin,INPUT);                     
  pinMode(buzzer,OUTPUT);                 
  pinMode(led,OUTPUT);                                       
}

void loop() {  
int sensorvalue;                                                                   
sensorvalue =analogRead(sensorpin);
Serial.print("Sensor values :");
Serial.println(sensorvalue);

  if(sensorvalue>400){                             
    digitalWrite(led,HIGH); //turn on led
    digitalWrite(buzzer,HIGH); // triggers the buzzer
    delay(5000);     
  }
  else{                                       //if not
    digitalWrite(led,LOW);                    //turn off led
    digitalWrite(buzzer,LOW);
  }

}

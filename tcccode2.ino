int ledVerde1 = 2;  
int ledVerde2 = 3;  
int ledVerde3 = 4;  
 
char caracter;
 
void setup() {

Serial.begin(9600);
pinMode(ledVerde1,OUTPUT) ;  
pinMode(ledVerde2,OUTPUT) ;
pinMode(ledVerde3,OUTPUT) ;
}
void loop() {

    if(Serial.available())
          caracter = Serial.read();
          Serial.print("Recebi os dados;");
          Serial.println(caracter);
   
   
     
          if(caracter == 'A')
          {
           digitalWrite(ledVerde1,HIGH);
    
   }
 
          if(caracter == 'B')
          {
           digitalWrite(ledVerde2,HIGH);
         
   }
 
          if(caracter == 'C')
          {
           digitalWrite(ledVerde3,HIGH);
         
   }
}
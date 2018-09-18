#include <EEPROM.h>
#include <Servo.h>
   Servo Myservo
   byte valor;
   int Echo=A4;
   int trig=A5;
   int direccion=0;

   const int InputNodes=3;
   const int HiddenNodes=4;
   const int OutputNodes=4;
   int i,j;

   double Accum;
   double Hidden [HiddenNodes];
   double Output [OutputNodes];
   float HiddenWeights [3] [4]{{direccion}}
   float OutputWeights [4] [4]{{direccion+1}}
   

void setup() {

  Serial.begin(9600)
  for (int a=0;a<1024;a++){
    for (int b=0;b<1024;b++){
      valor=EEPROM.read(a);
      Serial.print(a);
      Serial.print("->");
      Serial.print(\t);
      Serial.print(valor);
      Serial.print(\t);
      a++
      if(a==1024)break;
    }
    Serial.println();
    }
   }
void loop() {
      
}

void stop(){

      digitalWrite (ENA,LOW);
      digitalWrite (ENB,LOW);
      Serial.println ("parar");
}


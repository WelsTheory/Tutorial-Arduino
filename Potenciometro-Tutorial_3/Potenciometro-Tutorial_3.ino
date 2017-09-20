int Pot = 0; // Potenciometro = Pin A0 del Arduino
int led = 3; // LEd = Pin 3 del Arduino (~) 

int valor; // Variable donde almacenamos el valor obtenido del Pot

void setup(){
  pinMode(led,OUTPUT); //LED -> SALIDA
  }

void loop(){
  valor = analogRead(Pot)/4; // Pot -> valor (Analogica) 
                            // 0 - 1023 /4 -> 0 - 255
  analogWrite(led,valor);    //Aumentar la intensidad segun valor
  }  


// C++ code
//

int tr = 7500;
int to = 2500;
int tg = 12000;

int red = 9; 
int yellow = 8;
int green = 7;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  //entrando sinal verde
  digitalWrite(green,HIGH);
  delay(tg);
  digitalWrite(green,LOW);//APAGA O GREEN
  
    
  //entrando sinal amarelo
  digitalWrite(yellow,HIGH);
  delay(to); // Wait for 1000 millisecond(s)
  digitalWrite(yellow,LOW);
  
    
  //entrando sinal vermelho

  digitalWrite(red, HIGH);//ACENDE O RED POR 5 SEGS
  delay(tr);
  digitalWrite(red, LOW);//APAGA RED 5 SEGS


}
  

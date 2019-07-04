//f前进; b后退;l左转; r右转; s停止;
void setup()
{
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    Serial.begin(9600);
}
int a;
void loop()
{
  if(Serial.available()>0){
    a=Serial.read();   
  }
     switch(a)
     {
       case'f':f();break;
       case'b':b();break;
       case'l':l();break;
       case'r':r();break;
       case's':s();break; 
       define:break;
     }
     
  
}
void f()
     {
       digitalWrite(5,HIGH);
       digitalWrite(6,LOW);
       digitalWrite(9,HIGH);
       digitalWrite(10,LOW);
     }
void b()
     {
       digitalWrite(6,HIGH);
       digitalWrite(5,LOW);
       digitalWrite(10,HIGH);
       digitalWrite(9,LOW);
     } 
void l()
     {
      digitalWrite(5,HIGH);
       digitalWrite(6,LOW);
       digitalWrite(10,HIGH);
       digitalWrite(9,LOW);
     }
void r()
     {
       digitalWrite(6,HIGH);
       digitalWrite(5,LOW);
       digitalWrite(9,HIGH);
       digitalWrite(10,LOW);
     }
void s()
     {
       digitalWrite(5,LOW);
       digitalWrite(6,LOW);
       digitalWrite(9,LOW);
       digitalWrite(10,LOW);
     }     
     
     
     
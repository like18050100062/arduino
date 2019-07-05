//f前进; b后退;l左转; r右转; s停止;
void setup()
{
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    Serial.begin(9600);
}
 
void loop()
{ 
  digitalWrite(2,LOW) ; 
  digitalWrite(3,LOW) ; 
  digitalWrite(4,LOW) ; 
  digitalWrite(5,LOW) ;
  digitalWrite(6,LOW) ; 
  digitalWrite(7,LOW) ; 
  digitalWrite(8,LOW) ; 
  digitalWrite(9,LOW) ;
  int income[4];
  int i,a,b,c,d;
  for(i=0;i<4;i++)
  {  
   if(Serial.available()>3-i){
     income[i]=Serial.read()-'0';
    if((income[i]&1)==1)digitalWrite(2,HIGH) ; 
    if((income[i]>>1&1)==1)digitalWrite(3,HIGH) ; 
    if((income[i]>>2&1)==1)digitalWrite(4,HIGH) ; 
    if((income[i]>>3&1)==1)digitalWrite(5,HIGH) ;} 
    if(i==0)
    {
     digitalWrite(6,HIGH) ; 
     digitalWrite(7,HIGH) ; 
     digitalWrite(8,HIGH) ; 
     digitalWrite(9,LOW) ;
     digitalWrite(9,HIGH) ;
     digitalWrite(2,LOW) ; 
     digitalWrite(3,LOW) ; 
     digitalWrite(4,LOW) ; 
     digitalWrite(5,LOW) ;
     }
     else if (i==1)
     {
     digitalWrite(6,HIGH) ; 
     digitalWrite(7,HIGH) ; 
     digitalWrite(8,LOW) ; 
     digitalWrite(9,HIGH) ;
     digitalWrite(8,HIGH) ;
     digitalWrite(2,LOW) ; 
     digitalWrite(3,LOW) ; 
     digitalWrite(4,LOW) ; 
     digitalWrite(5,LOW) ;
     } 
     else if (i==2)
    {
     digitalWrite(6,HIGH) ; 
     digitalWrite(7,LOW) ; 
     digitalWrite(8,HIGH) ; 
     digitalWrite(9,HIGH) ;
     digitalWrite(7,HIGH) ;
     digitalWrite(2,LOW) ; 
     digitalWrite(3,LOW) ; 
     digitalWrite(4,LOW) ; 
     digitalWrite(5,LOW) ;
     }  
      else if (i==3)
     {
     digitalWrite(6,LOW) ; 
     digitalWrite(7,HIGH) ; 
     digitalWrite(8,HIGH) ; 
     digitalWrite(9,HIGH) ;
     digitalWrite(6,HIGH) ;
     digitalWrite(2,LOW) ; 
     digitalWrite(3,LOW) ; 
     digitalWrite(4,LOW) ; 
     digitalWrite(5,LOW) ;
     }  
   
  }
  
 delay(1000);

}

     
     
     
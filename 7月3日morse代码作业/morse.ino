#include <Morse.h>
String str;//输入字符串
String morse;//morse字符串
int n=0,i,j=0,temp=0;
Morse m(LED_BUILTIN);
void setup() {
 Serial.begin(9600); // put your setup code here, to run once:

}

void loop() {
  while(Serial.available()>0){
    temp=1;
    str+=char(Serial.read());
    delay(2);
    n++;
  }
  if(temp==1){
    for(i=0;i<n;i++)
    {
      switch(str[i]){
        case'a':morse+=".- ";j=j+3; break;
        case'b':morse+="-... ";j=j+5; break;
        case'c':morse+="-.-. ";j=j+5; break;
        case'd':morse+="-.. ";j=j+4;break;
        case'e':morse+=". ";j=j+2; break;
        case'f':morse+="..-. ";j=j+5; break;
        case'g':morse+="--. ";j=j+4; break;
        case'h':morse+=".... ";j=j+5; break;
        case'i':morse+=".. ";j=j+3; break;
        case'j':morse+=".--- ";j=j+5; break;
        case'k':morse+="-.- ";j=j+4; break;
        case'l':morse+=".-.. ";j=j+5; break;
        case'm':morse+="-- ";j=j+3; break;
        case'n':morse+="-. ";j=j+3; break;
        case'o':morse+="--- ";j=j+4; break;
        case'p':morse+=".-- ";j=j+4; break;
        case'q':morse+="--.- ";j=j+5; break;
        case'r':morse+=".-. ";j=j+4; break;
        case's':morse+="... ";j=j+4; break;
        case't':morse+="- ";j=j+2; break;
        case'u':morse+="..- ";j=j+4; break;
        case'v':morse+="...- ";j=j+5; break;
        case'w':morse+=".-- ";j=j+4; break;
        case'x':morse+="-..- ";j=j+5; break;
        case'y':morse+="-.-- ";j=j+5; break;
        case'z':morse+="--.. ";j=j+5; break;
        case' ':morse+=" ";j=j+5; break;
      } 
    }  
    Serial.println(morse);
   } 
      for(i=0;i<j-1;i++){
        if(morse[i]=46){
          m.dot();
        }
        else if(morse[i]=45){
          m.dash();
        }
        else if(morse[i]=32){
          if(morse[i+1]=32)
          {
            m.w_space();
            i=i+1;
          }
          else{
            m.c_space();
          }
          
        }
      }
  
  // put your main code here, to run repeatedly:

}

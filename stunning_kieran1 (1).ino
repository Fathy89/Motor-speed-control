// C++ code
//
int trig =3; 
int echo = 4; 
int t,d ; 
void setup()
{
pinMode(3,OUTPUT);
pinMode(4,INPUT);
pinMode(5,OUTPUT);


}

void loop()
{
  digitalWrite(trig,0); 
  delayMicroseconds(2) ; 
  digitalWrite(trig,1);
  delayMicroseconds(10) ; 
  digitalWrite(trig,0); 
t=pulseIn(echo,1) ; 
  d=0.0343*(t/2) ; 
  if(d<50)
    analogWrite(5,255) ; 
  else if(d<100&&d>50)
analogWrite(5,128);
    else 
    analogWrite(5,0 ) ; 
    }
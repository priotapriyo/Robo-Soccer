
int m1in = A3;
int m1out= A4;

int m2in = A5;
int m2out = A6;


void setup() {
  // put your setup code here, to run once:


  pinMode(m1in,OUTPUT);
  pinMode(m1out,OUTPUT);
  pinMode(m2in,OUTPUT);
  pinMode(m2out,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

   analogWrite(m1in,255);
   analogWrite(m1out,0);
   analogWrite(m2in,255);
   analogWrite(m2out,0);
   

}

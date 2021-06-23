
int inA=12;
int in1=11;  
int in2=102; 

int inB=4; 
int in3=6; 
int in4=5; 

void setup() {
  pinMode(inA,OUTPUT);
  pinMode(inB,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

}

void loop() {
 motor1();
 motor2();
}
void motor1(){
  digitalWrite(inA,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
 
  
  }


void motor2(){
  digitalWrite(inB,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  
  
  }


 

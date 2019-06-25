int Tm1640_clk = 2; 
int Tm1640_dout = 3;   
int Tm1640_din = 4;     

int S=0;
int M=60;

 int A[] = {0,1,0,0,0,0,0,0};
 //POSITION
 int p0[]= {1,1,0,0,0,0,0,0};
 int p1[]= {1,1,0,0,0,0,0,1};
 int p2[]= {1,1,0,0,0,0,1,0};
 int p3[]= {1,1,0,0,0,0,1,1};
 int p4[]= {0,1,0,0,0,0,0,0};
 int p5[]= {0,1,0,0,0,0,0,1};
 int p6[]= {0,1,0,0,0,0,1,0};
 int p7[]= {0,1,0,0,0,0,1,1};

 int CC1[]= {1,1,0,0,0,1,0,0};
 int CC2[]= {1,1,0,0,1,0,1,0};
 
 int B[] = {1,1,0,0,1,1,0,1};

 //NUMBER
 int n0[]={0,0,1,1,1,1,1,1};
 int n1[]={0,0,0,0,0,1,1,0};
 int n2[]={0,1,0,1,1,0,1,1};
 int n3[]={0,1,0,0,1,1,1,1};
 int n4[]={0,1,1,0,0,1,1,0};
 int n5[]={0,1,1,0,1,1,0,1};
 int n6[]={0,1,1,1,1,1,0,1};
 int n7[]={0,0,0,0,0,1,1,1};
 int n8[]={0,1,1,1,1,1,1,1};
 int n9[]={0,1,1,0,1,1,1,1};
 int nC[]={1,0,0,0,0,0,0,0};
 
 int C[]={0,0,0,0,0,0,0,0};

 int t[]={1,0,0,0,1,1,1,1};
 
 int off[] = {1,0,0,0,0,0,0,0};
 int on[] = {1,0,0,0,1,0,0,0};

void setup() {
  // put your setup code here, to run once:
  pinMode(Tm1640_clk, OUTPUT);
  pinMode(Tm1640_dout, OUTPUT);

  Tm1640_start();
  Tm1640_wrbyte(A);
  Tm1640_ack();
  Tm1640_stop();
  Tm1640_on();

//    Tm1640_start();
//  Tm1640_wrbyte(p0);
//  Tm1640_ack();
//  Tm1640_wrbyte(n2);
//  Tm1640_ack();
//  Tm1640_stop();

  

//Tm1640_start(); 
//Tm1640_wrbyte (t);
//Tm1640_ack();
//Tm1640_stop();

//Tm1640_off();


}

void loop() {
   Tm1640_on();
  

  // put your main code here, to run repeatedly:
    Tm1640_start();
  Tm1640_wrbyte(p1);
  Tm1640_ack();
  //SECOND DAHGAN
  switch (S/10) {
  case 0:
  Tm1640_wrbyte(n0);
    break;
  case 1:
  Tm1640_wrbyte(n1);
    break;
    case 2:
  Tm1640_wrbyte(n2);
    break;
    case 3:
  Tm1640_wrbyte(n3);
    break;
    case 4:
  Tm1640_wrbyte(n4);
    break;
    case 5:
  Tm1640_wrbyte(n5);
    break;
    case 6:
  Tm1640_wrbyte(n6);
    break;
    case 7:
  Tm1640_wrbyte(n7);
    break;
    case 8:
  Tm1640_wrbyte(n8);
    break;
    case 9:
  Tm1640_wrbyte(n9);
    break;
  }
  
  Tm1640_ack();
  Tm1640_stop();
  
//SECOND YEKAN
  Tm1640_start();  
  Tm1640_wrbyte(p0);
  Tm1640_ack();
    switch (S%10) {
  case 0:  
  Tm1640_wrbyte(n0);  
    break;
  case 1:
  Tm1640_wrbyte(n1);
    break;
    case 2:
  Tm1640_wrbyte(n2);
    break;
    case 3:
  Tm1640_wrbyte(n3);
    break;
    case 4:
  Tm1640_wrbyte(n4);
    break;
    case 5:
  Tm1640_wrbyte(n5);
    break;
    case 6:
  Tm1640_wrbyte(n6);
    break;
    case 7:
  Tm1640_wrbyte(n7);
    break;
    case 8:
  Tm1640_wrbyte(n8);
    break;
    case 9:
  Tm1640_wrbyte(n9);
    break;
  
}
  Tm1640_ack();
  Tm1640_stop();

   Tm1640_start();
  Tm1640_wrbyte(CC1);
  Tm1640_ack();
  Tm1640_wrbyte(nC);
  Tm1640_ack();
  Tm1640_stop();
  
delay(1000);
   
if(S==0){
  S=60;
  M=M-1;
}
S=S-1;

//Minute YEKAN
  Tm1640_start();  
  Tm1640_wrbyte(p2);
  Tm1640_ack();
    switch (M%10) {
  case 0:  
  Tm1640_wrbyte(n0);  
    break;
  case 1:
  Tm1640_wrbyte(n1);
    break;
    case 2:
  Tm1640_wrbyte(n2);
    break;
    case 3:
  Tm1640_wrbyte(n3);
    break;
    case 4:
  Tm1640_wrbyte(n4);
    break;
    case 5:
  Tm1640_wrbyte(n5);
    break;
    case 6:
  Tm1640_wrbyte(n6);
    break;
    case 7:
  Tm1640_wrbyte(n7);
    break;
    case 8:
  Tm1640_wrbyte(n8);
    break;
    case 9:
  Tm1640_wrbyte(n9);
    break;
  
}
  Tm1640_ack();
  Tm1640_stop();


  //Minute DAHGAN
  Tm1640_start();  
  Tm1640_wrbyte(p3);
  Tm1640_ack();
    switch (M/10) {
  case 0:  
  Tm1640_wrbyte(n0);  
    break;
  case 1:
  Tm1640_wrbyte(n1);
    break;
    case 2:
  Tm1640_wrbyte(n2);
    break;
    case 3:
  Tm1640_wrbyte(n3);
    break;
    case 4:
  Tm1640_wrbyte(n4);
    break;
    case 5:
  Tm1640_wrbyte(n5);
    break;
    case 6:
  Tm1640_wrbyte(n6);
    break;
    case 7:
  Tm1640_wrbyte(n7);
    break;
    case 8:
  Tm1640_wrbyte(n8);
    break;
    case 9:
  Tm1640_wrbyte(n9);
    break;
  
}
  Tm1640_ack();
  Tm1640_stop();

Tm1640_off();


}

void Tm1640_wrbyte(int x[]) {
  for (int i = 7; i >=0; i--) {
    digitalWrite(Tm1640_clk, LOW);
    if(x[i]==1) digitalWrite(Tm1640_dout, HIGH);
    else digitalWrite(Tm1640_dout, LOW);  
    delayMicroseconds(3);
    digitalWrite(Tm1640_clk, HIGH);
    delayMicroseconds(3);
  }

}

void Tm1640_ack(){
  digitalWrite(Tm1640_clk, LOW);
  digitalWrite(Tm1640_dout, LOW); 
  delayMicroseconds(5);
  digitalWrite(Tm1640_dout, LOW); 
}

void Tm1640_off(){
  Tm1640_start();
  Tm1640_wrbyte(off);
  Tm1640_ack();
  Tm1640_stop();
}
void Tm1640_on(){
  Tm1640_start();
  Tm1640_wrbyte(on);
  Tm1640_ack();
  Tm1640_stop();
}

void Tm1640_start(){
  digitalWrite(Tm1640_clk, HIGH);
  digitalWrite(Tm1640_dout, HIGH);
  delayMicroseconds(2);
  digitalWrite(Tm1640_dout, LOW);  
}

void Tm1640_stop(){
  digitalWrite(Tm1640_clk, LOW);
  delayMicroseconds(2);
  digitalWrite(Tm1640_dout,LOW);
  delayMicroseconds(2);
  digitalWrite(Tm1640_clk,HIGH);
  delayMicroseconds(2);
  digitalWrite(Tm1640_dout,HIGH); 
}

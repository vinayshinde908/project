void setup() {
  // put your setup code here, to run once:
for(int i=0;i<=13;i++)
{
  pinMode(i,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
fun1();
fun2();
fun3();
fun4();
fun5();
fun0();
//fun6();
//fun7();
//fun8();
//fun9();

}

void fun0()
{
  int i;
  for(i=0;i<=3;i++)
  digitalWrite(i,0);
  digitalWrite(12,0);
  digitalWrite(13,0);
  for(i=4;i<=11;i++)
  digitalWrite(i,1);
  digitalWrite(9,0);
  digitalWrite(5,0);

  delay(2000);
  
}
void fun1()
{
  digitalWrite(4,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
  digitalWrite(10,0);
  
  digitalWrite(0,1);
  digitalWrite(13,1);
  delay(250);
  digitalWrite(13,0);
  delay(500);
}
void fun2()
{
  digitalWrite(0,0);
  delay(200);
 
  digitalWrite(8,0);
 
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);

  digitalWrite(0,1);
  digitalWrite(13,1);
  delay(200);
  digitalWrite(13,0);
  delay(200);
  
  digitalWrite(1,1);
  digitalWrite(13,1);
  delay(200);
  digitalWrite(13,0);

  
  delay(500);
}
void fun3()
{
  digitalWrite(0,0);
  delay(175);
  digitalWrite(1,0);

  digitalWrite(11,0);
  
  digitalWrite(4,HIGH);
  digitalWrite(9,1);
 
  digitalWrite(0,1);
  digitalWrite(13,1);
  delay(175);
  digitalWrite(13,0);
  delay(175);
  
  digitalWrite(1,1);
  digitalWrite(13,1);
  delay(175);
  digitalWrite(13,0);
  delay(175);

  digitalWrite(2,1);
  digitalWrite(13,1);
  delay(175);
  digitalWrite(13,0);
  delay(500);
  }
void fun4()
{

  digitalWrite(0,0);
  delay(150);
  digitalWrite(1,0);
  digitalWrite(2,0);

  digitalWrite(7,0);
  digitalWrite(10,0);
  
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);

  digitalWrite(0,1);
  digitalWrite(13,1);
  delay(150);
  digitalWrite(13,0);
  delay(150);
  
  digitalWrite(1,1);
  digitalWrite(13,1);
  delay(150);
  digitalWrite(13,0);
  delay(150);
  
  digitalWrite(2,1);
  digitalWrite(13,1);
  delay(150);
  digitalWrite(13,0);
  delay(150);
  
  digitalWrite(3,1);
  digitalWrite(13,1);
  delay(150);
  digitalWrite(13,0);
  delay(500);
 }
 void fun5()
 {
  digitalWrite(0,0);
  delay(100);
  digitalWrite(1,0);
  digitalWrite(2,0);
  digitalWrite(3,0);

  digitalWrite(6,0);
  
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(10,HIGH);
 
  digitalWrite(0,1);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);

  digitalWrite(1,1);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);

  digitalWrite(2,1);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);

  digitalWrite(3,1);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);

  digitalWrite(12,1);
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(500);
  
 }
 
 

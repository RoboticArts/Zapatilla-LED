
int pot_1, pot_2, pot_3;
int led_R=9, led_B=10, led_G=11;

void setup() {

Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A1,INPUT);
pinMode(led_G,OUTPUT);
pinMode(led_R,OUTPUT);
pinMode(led_B,OUTPUT);
  

}

void loop() {

  pot_1 = analogRead(A0);
  pot_2 = analogRead(A1);
  pot_3 = analogRead(A2);

  pot_1 = map(pot_1, 0, 1023, 0, 255);
  pot_2 = map(pot_2, 0, 1023, 0, 255);
  pot_3 = map(pot_3, 0, 1023, 0, 255);

  if(pot_1 <= 5){pot_1 = 0;}
  if(pot_2 <= 5){pot_2 = 0;}
  if(pot_3 <= 5){pot_3 = 0;}

  analogWrite(led_R,pot_1);
  analogWrite(led_B,pot_2);
  analogWrite(led_G,pot_3);

 Serial.println(pot_3);

}

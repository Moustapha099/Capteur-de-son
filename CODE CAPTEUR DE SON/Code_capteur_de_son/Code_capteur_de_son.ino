/*int micro = 2 ;
int led = 8 ;
boolean activation = 0 ;

void setup() {
  // put your setup code here, to run once:
pinMode(micro, INPUT);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int son=digitalRead(micro);
if(son==1) {
  
  if (activation==0){
    activation==1 ;
    digitalWrite(led, 1);
    delay(100);
    }
  else {
    activation=1 ;
    digitalWrite(led, 0);
    delay(100);
    
    }
  }
}

*/





/*

#define capteur 7
int etat = 0 ;

void setup() {
// put your setup code here, to run once:
pinMode(capteur, INPUT);
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(capteur)){
  etat = !etat ;
  digitalWrite(LED_BUILTIN, etat);
  delay(300);
}
}

*/




boolean statuslamp;

void setup (){
Serial.begin(9600);
pinMode(12, OUTPUT);
pinMode(2,INPUT);
statuslamp=false;
}

void loop(){

Serial.println(digitalRead(2));
if(digitalRead == HIGH){
  statuslamp=!statuslamp;
  digitalWrite(12, statuslamp);
  delay(20);
  }
}

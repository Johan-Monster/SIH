
const int MQ3 = A2;
const int relay = 13;
int value;
int count = 0;
void setup() {
  Serial.begin(9600);
  pinMode(MQ3,INPUT);
  pinMode(relay,OUTPUT);
  digitalWrite(relay,HIGH);
  // put your setup code here, to run once:

}

void loop() {
  while(count<10)
  {
    value = analogRead(MQ3);
    Serial.println(value);
    if(value>250)
    {
      digitalWrite(relay,LOW);
     delay(5000);
      
      }
    else
    if(value<=250)
    {
        digitalWrite(relay,HIGH);  
        }
        delay(2000);
        count=count+1;
   } 
  if(count>10)
  exit(0);
    }
  // put your main code here, to run repeatedly:

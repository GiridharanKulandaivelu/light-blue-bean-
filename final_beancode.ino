int ledPin = 0;
int ledPin1 = 1;
String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;
String on="on";
void setup() {
  // put your setup code here, to run once:
 pinMode(ledPin, OUTPUT);
 pinMode(ledPin1,OUTPUT);
}

void loop()
{
  Serial.flush();
 char rec_buffer[2];
 size_t rec_length = 2;
 //Set the length to number of bytes recieved
 rec_length = Serial.readBytes(rec_buffer, rec_length);

 if ( rec_length > 0 )
 {
  Serial.println("into o");
  if( rec_buffer[0]=='1' && rec_buffer[1]=='1')
  {
    Serial.println("into 1");
    digitalWrite(ledPin,HIGH);
    delay(2000);
    digitalWrite(ledPin,LOW);
   }
   if( rec_buffer[0]=='2' && rec_buffer[1]=='2')
   {
    Serial.println("into 2");
    digitalWrite(ledPin1,HIGH);
    delay(2000);
    digitalWrite(ledPin1,LOW);
    }
   
    
      digitalWrite(ledPin,LOW);
     
  }
 }


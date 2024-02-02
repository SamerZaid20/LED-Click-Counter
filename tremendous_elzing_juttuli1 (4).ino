// C++ code
//
int buttonPin = 5;  
 int led1Pin = 2;   
 int led2Pin = 3;   
 int led3Pin =4;
  int buttonState = 0;  
int ledState = 0; 
void setup()
{
  pinMode(buttonPin, INPUT);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
}

void loop()
{
 buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {  
    ledState++;              

    if (ledState > 4) {       
      ledState = 1;
    }

    if (ledState == 1) {
      digitalWrite(led1Pin, HIGH);
      digitalWrite(led2Pin, LOW);
      digitalWrite(led3Pin, LOW);
    } else if (ledState == 2) {
      digitalWrite(led1Pin, HIGH);
      digitalWrite(led2Pin, HIGH);
      digitalWrite(led3Pin, LOW);
    } else if (ledState == 3) {
      digitalWrite(led1Pin, HIGH);
      digitalWrite(led2Pin, HIGH);
      digitalWrite(led3Pin, HIGH);
    }
    else if (ledState == 4) {
      digitalWrite(led1Pin, LOW);
      digitalWrite(led2Pin, LOW);
      digitalWrite(led3Pin, LOW);
    }

    delay(200); 
  }
}
// Motor One
#define ENA 6
#define IN1 7
#define IN2 8
// Motor Two
#define IN3 9
#define IN4 10
#define ENB 11
#define Speed 100
void setup ()
{
  // Sensor Pins
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  // Motor One
  pinMode(ENA,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  // Motor Two
  pinMode(ENB,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  // Led Bulb
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  void loop() {
    bool SOne = digitalRead(2);
    bool STwo = digitalRead(3);
    bool SThree = digitalRead(4);
    bool SFour = digitalRead(5);
    if (SOne == 0 && STwo == 1 SThree == 1 && SFour == 0) {
      Forward();
    } else if (SOne == 1 && STwo == 1 SThree == 1 && SFour == 1) {
      Stop();
    } else if (SOne == 0 && STwo == 0 SThree == 0 && SFour == 0) {
      Stop();
    } else if (SOne == 1 && STwo == 1 SThree == 0 && SFour == 0) {
      turnleft();
      digitalWrite(A0,HIGH);
      digitalWrite(A1,LOW);
    } else if (SOne == 0 && STwo == 1 SThree == 1 && SFour == 0) {
      stop delay 1000 then start();
      digitalWrite(A2,HIGH); delay 980
      digitalWrite(A2,LOW);
    } else if (SOne == 0 && STwo == 0 SThree == 1 && SFour == 1) {
      turnright();
      digitalWrite(A0,LOW);
      digitalWrite(A1,HIGH);
      }
    }
    void forward () {
      analogWrite (ENA,speed);
      analogWrite (ENB,speed);
      digitalWrite (IN1,HIGH);
      digitalWrite (IN2,LOW);
      digitalWrite (IN3,HIGH);
      digitalWrite (IN4,LOW);
    }
    void turnright () {
      analogWrite (ENA,speed);
      analogWrite (ENB,speed);
      digitalWrite (IN1,HIGH);
      digitalWrite (IN2,LOW);
      digitalWrite (IN3,HIGH);
      digitalWrite (IN4,LOW);
    }
    void turnleft () {
      analogWrite (ENA,speed);
      analogWrite (ENB,speed);
      digitalWrite (IN1,LOW);
      digitalWrite (IN2,HIGH);
      digitalWrite (IN3,LOW;
      digitalWrite (IN4,HIGH);
    }
    void stop () {
      analogWrite (ENA,0);
      analogWrite (ENB,0);
      digitalWrite (IN1,LOW);
      digitalWrite (IN2,LOW);
      digitalWrite (IN3,LOW);
      digitalWrite (IN4,LOW);
    }
  }
}
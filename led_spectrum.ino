//define leds port

#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9
#define led9 10
#define led10 11

//define mic port

#define mic A0

int sound;

void setup() {
  
  //define pin led modes
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  
}

void loop() {

  int sound = analogRead(mic);

  digitalWrite(led1, sound > 70);
  digitalWrite(led2, sound > 100);
  digitalWrite(led3, sound > 200);
  digitalWrite(led4, sound > 300);
  digitalWrite(led5, sound > 400);
  digitalWrite(led6, sound > 500);
  digitalWrite(led7, sound > 600);
  digitalWrite(led8, sound > 700);
  digitalWrite(led9, sound > 800);
  digitalWrite(led10, sound > 950);
  
 }
  

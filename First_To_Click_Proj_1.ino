// Michael Sung Hyun Lee
// Arduino Project 1
// First to press: First of two people to press their button after the
// middle light wins. Winner is indicated by their respective LED being lit.

int player1 = 0;
int player2 = 0;
int done=0;

void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}


void loop(){
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  done=0;
  int timer = random(1000,5000);
  delay(timer);
  digitalWrite(5,HIGH);

  //player1=digitalRead(buttonPin);
  //ss
  while(done == 0){
    player1=digitalRead(2);
    player2=digitalRead(3);
    if(player1 == HIGH && player2 == LOW){
      digitalWrite(4,HIGH);
      done=1;
      
    }
    else if(player1 == LOW && player2 == HIGH){
      digitalWrite(6,HIGH);
      done=1;
    }
    else{
    done=0;
    }

  }
  delay(2000);
}

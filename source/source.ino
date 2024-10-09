// Motor driver pins
int M1pos = 2;
int M1neg = 3;
int M2pos = 4;
int M2neg = 5;

// IR sensor pins
int rightIR = 6;
int leftIR = 7;

void setup() {
  pinMode(M1pos, OUTPUT);
  pinMode(M1neg, OUTPUT);
  pinMode(M2pos, OUTPUT);
  pinMode(M2neg, OUTPUT);

  pinMode(rightIR, INPUT);
  pinMode(leftIR, INPUT);
}

void forRight() { // turn right with left off
  digitalWrite(M1pos, HIGH);
  digitalWrite(M1neg, LOW);
}
void forLeft() { // turn left with right off
  digitalWrite(M2pos, HIGH);
  digitalWrite(M2neg, LOW);
}
void forward() { // forward both
  digitalWrite(M1pos, HIGH);
  digitalWrite(M1neg, LOW);
  digitalWrite(M2pos, HIGH);
  digitalWrite(M2neg, LOW);
}

void runLoop() {
  if (digitalRead(rightIR) == LOW) {
    forLeft();
  }
  if (digitalRead(leftIR) == LOW) {
    forRight();
  }
  else {
    forward();
  }
}

void loop() {
  runLoop();
}
// Motor driver pins
int MRpos = 2;
int MRneg = 3;
int MLpos = 4;
int MLneg = 5;

// IR sensor pins
int rightIR = 6;
int leftIR = 7;

void setup() {
  pinMode(MRpos, OUTPUT);
  pinMode(MRneg, OUTPUT);
  pinMode(MLpos, OUTPUT);
  pinMode(MLneg, OUTPUT);

  pinMode(rightIR, INPUT);
  pinMode(leftIR, INPUT);
}

// booleans for the IR sensors
bool leftSensor() {
  return (digitalRead(leftIR) == LOW);
}
bool rightSensor() {
  return (digitalRead(rightIR) == LOW);
}


void run(byte rightP, byte rightN, byte leftP, byte leftN) {
  digitalWrite(MRpos,rightP);
  digitalWrite(MRneg,rightN);
  digitalWrite(MLpos,leftP);
  digitalWrite(MLneg,leftN);
}

void runLoop() {
  if (leftSensor()) { run(LOW,LOW,HIGH,LOW); }
  if (rightSensor()) { run(HIGH,LOW,LOW,LOW); }
  else { run(HIGH,LOW,HIGH,LOW); }
}

void loop() {
  runLoop();
  delay(100);
}
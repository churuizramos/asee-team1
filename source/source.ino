int driverIN1 = 2;
int driverIN2 = 3;
int button = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(driverIN1, OUTPUT);
  pinMode(driverIN2, OUTPUT);

  pinMode(button, INPUT);
}

void loop() {
  digitalWrite(driverIN1, HIGH);
  digitalWrite(driverIN2, LOW);
  
  // put your main code here, to run repeatedly:
  // switch (digitalRead(button)) {
  //   case HIGH:
  //     digitalWrite(driverIN1, HIGH);
  //     digitalWrite(driverIN2, LOW);
  //     break;

  //   case LOW:
  //     digitalWrite(driverIN1, LOW);
  //     digitalWrite(driverIN2, LOW);
  //     break;
  // }
  delay(250);
}

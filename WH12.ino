//HW12
const int button1Pin = 2; 
const int button2Pin = 3; 
const int potPin = A0;// potentiometer
const int greenLEDPin = 8;
const int redLEDPin = 9;


int currentStep = 0;
void setup() {
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);

 
  digitalWrite(greenLEDPin, LOW);
  digitalWrite(redLEDPin, LOW);

  Serial.begin(9600);
}

void loop() {
  //1
  if (currentStep == 0) {
    if (digitalRead(button1Pin) == HIGH) {
      Serial.println("Step 1 completed: Button 1 pressed");
      currentStep = 1;
      delay(200);
    }
    //2
  } else if (currentStep == 1) {
    int potValue = analogRead(potPin);
  
    if (potValue > 450 && potValue < 550) {
      Serial.println("Step 2 completed: Potentiometer adjusted to middle");
      currentStep = 2;
      delay(200);
    }
    //3
  } else if (currentStep == 2) {
    if (digitalRead(button2Pin) == HIGH) {
      Serial.println("Step 3 completed: Button 2 pressed");
      success();
    } else if(digitalRead(button1Pin) == HIGH) {
      failure();
    }
  }
}

void success() {
  digitalWrite(greenLEDPin, HIGH);
  delay(1000);
  digitalWrite(greenLEDPin, LOW);
  reset();
}

void failure() {
  digitalWrite(redLEDPin, HIGH);
  delay(1000);
  digitalWrite(redLEDPin, LOW);
  reset();
}

void reset() {
  currentStep = 0;
  Serial.println("System reset, waiting for input...");
}

//General Initialization:
long duration;
int distance;

//Servo Initialization:
#include <Servo.h>
Servo servo;
int pos = 0;

//Ultrasonic Initialization:
int const trigPin = 11;  //Initialize pin 6 as the variable trigPin.
int const echoPin = 10;  //Initialize pin 5 as the variable echoPin.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  
  //Servo Setup:
  servo.attach(9);  //Make pin 7 the servo's pin.

  //Ultrasonic Setup:
  pinMode(trigPin, OUTPUT); //Make trigPin an output.
  pinMode(echoPin, INPUT);  //Make echoPin an input.
}

//radar drawing functions:
void draw() { //
  
}

int calculateDistance(){
  digitalWrite(trigPin, LOW);         //Ensure that there is no signal coming from the trigger pin before starting the distance measuring.
  digitalWrite(trigPin, HIGH);        //Send an ultrasonic signal from the trigger pin.
  delayMicroseconds(10);              //Wait 10 microseconds before terminating the signal.
  digitalWrite(trigPin, LOW);         //Terminate the trigger pin's signal.
  duration = pulseIn(echoPin, HIGH);  //Record how long it took the echo pin to receive the trigger pin's signal.
  distance = duration * 0.034 / 2;    //Calculate the distance between the object the ultrasonic sensor is facing and the sensor itself.
  return distance;
}

void loop() {
  // put your main code here, to run repeatedly:
  for (pos = 0; pos <= 180; pos++) { //Move the servo half a revolution counterclockwise.
    servo.write(pos);     //Move the servo to the position value of the pos variable.
    delay(30);            //Wait 15 ms before incrementing pos.
    distance = calculateDistance();  //Run the function calculateDistance.
    Serial.print(pos);  //These 4 lines display the servo motor's position and the distance measured by the ultrasonic radar as ordered pairs.
    Serial.print(",");  //Each term of the ordered pairs are separated by a comma.
    Serial.print(distance); //The reason for this formatting is to make it easy for the proccessing IDE to locate each position and distance value.
    Serial.print(".");  //Each ordered pair is separated by a period.
  }

  for (pos = 180; pos >= 0; pos--) { //Move the servo half a revolution clockwise.
    //by decrementing its position by 1.
    servo.write(pos);     //Move the servo to the position value of the pos variable.
    delay(30);            //Wait 15 ms before decrementing pos.
    distance = calculateDistance();  //Run the function calculateDistance.
    Serial.print(pos);  //These 4 lines display the servo motor's position and the distance measured by the ultrasonic radar as ordered pairs.
    Serial.print(",");  //Each term of the ordered pairs are separated by a comma.
    Serial.print(distance); //The reason for this formatting is to make it easy for the proccessing IDE to locate each position and distance value.
    Serial.print(".");  //Each ordered pair is separated by a period.
  }
}

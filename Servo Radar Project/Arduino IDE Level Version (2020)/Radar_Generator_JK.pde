//Note: Close the serial monitor in Arduino IDE before running this Processing sketch.

import processing.serial.*;  //Import the library required to communicate sith serial ports.
import java.awt.event.KeyEvent;  //Import the library required to read data from serial ports.
import java.io.IOException;

Serial myPort;  //Define a serial object known as myPort.
//Define all variables:
String angle="";
String distance="";
String data="";
String noObject;
float pixsDistance;
int iAngle, iDistance;
int index1=0;
int index2=0;
PFont orcFont;

void setup() {
  
  size (1920, 1080);  //Enlarge the radar size to ensure that the radar is legible.
  smooth();  //Draw all geometry with smooth edges to improve the image quality of the radar.
  myPort = new Serial(this,"COM6", 57600);  //Establish serial connection to serial port 57600 at COM6.
  myPort.bufferUntil('.');  //Read all data from the serial port until the period. Data is read as follows: angle,distance.
  orcFont = loadFont("OCRAExtended-30.vlw");  //Set the font that will be used for the radar to OCRAExtended at size 30.

}

void draw() {
  
  fill(98,245,31);  //Set the text color to green.
  textFont(orcFont);  //Set the text font to OCRAExtended at size 30.
  noStroke();  //Make the track of the moving line fade as the actual line moves.
  fill(0,4);
  rect(0, 0, width, 1010);  //These past two lines darken the radar screen.
  
  fill(98,245,31);  //This is the color combination for green.
  //The following functions can now be called to draw the radar itself:
  drawRadar();
  drawLine();
  drawObject();
  drawText();
}

void serialEvent (Serial myPort) {
  
  data = myPort.readStringUntil('.');  //Read that serial port's data until there is a period.
  data = data.substring(0,data.length()-1);  //Remove the period from the data string.
  
  index1 = data.indexOf(",");  //Locate the index of the comma in the data string.
  angle = data.substring(0, index1);  //Jot down the angle as all the characters prior to the comma.
  distance = data.substring(index1+1, data.length());  //Jot down the distance as all the characters following the comma.
  
  iAngle = int(angle);  //Change the data type of the angle into an integer.
  iDistance = int(distance);  //Change the data type of the distance into an integer.
  
}

void drawRadar() {  //This function draws the radar axes.

  pushMatrix();
  translate(960,1000);  //Move the starting coordinates to a new location.
  noFill();
  strokeWeight(2);
  stroke(98,245,31);  //Assign the color to be green.
  //The next 4 lines draw the arcs from outermost to innermost:
  arc(0,0,1800,1800,PI,TWO_PI);
  arc(0,0,1400,1400,PI,TWO_PI);
  arc(0,0,1000,1000,PI,TWO_PI);
  arc(0,0,600,600,PI,TWO_PI);
  //The next 4 lines draw the angular lines:
  line(-960,0,960,0);  //This first line is the horizontal line at the bottom of the radar.
  line(0,0,-960*cos(radians(30)),-960*sin(radians(30)));
  line(0,0,-960*cos(radians(60)),-960*sin(radians(60)));
  line(0,0,-960*cos(radians(90)),-960*sin(radians(90)));  //This is the vertical line.
  line(0,0,-960*cos(radians(120)),-960*sin(radians(120)));
  line(0,0,-960*cos(radians(150)),-960*sin(radians(150)));
  line(-960*cos(radians(30)),0,960,0);
  popMatrix();

}

void drawObject() {  //This function draws a red area when the Arduino code detects an object near the radar.
  
  pushMatrix();
  translate(960,1000);  //Moves the starting coordinates to a new location.
  strokeWeight(9);
  stroke(255,10,10);  //Assign the color to be red.
  pixsDistance = iDistance*22.5;  //Translates the distance to the correct number of pizels.
  if(iDistance<40) {  //Limit the range to 40 cm.
    line(pixsDistance*cos(radians(iAngle)),-pixsDistance*sin(radians(iAngle)),950*cos(radians(iAngle)),-950*sin(radians(iAngle)));
  }
  popMatrix();
}

void drawLine() {  //This function draws the green line that displays the position of the servo motor.
  
  pushMatrix();
  strokeWeight(9);
  stroke(30,250,60);
  translate(960,1000);
  line(0,0,950*cos(radians(iAngle)),-950*sin(radians(iAngle)));  //Draws the line based on the position of the servo motor.
  popMatrix();
  
}

void drawText() {  //Places the text on the radar screen.
  
  pushMatrix();
  if(iDistance>40) {
    noObject = "Out of Range";
  }
  else {
    noObject = "In Range";
  }
  fill(0,0,0);
  noStroke();
  rect(0, 1010, width, 1080);
  fill(98,245,31);
  textSize(25);
  text("10cm",1180,990);
  text("20cm",1380,990);
  text("30cm",1580,990);
  text("40cm",1780,990);
  textSize(40);
  text("Object: " + noObject, 240, 1050);
  text("Angle: " + iAngle + " °", 1050, 1050);
  text("Distance: ", 1380, 1050);
  if(iDistance<40) {
    text("        " + iDistance + " cm", 1400, 1050);
  }
  textSize(25);
  fill(95,245,60);
  translate(961+960*cos(radians(30)),982-960*sin(radians(30)));
  rotate(-radians(-60));
  text("30°",0,0);
  resetMatrix();
  translate(954+960*cos(radians(60)),984-960*sin(radians(60)));
  rotate(-radians(-30));
  text("60°",0,0);
  resetMatrix();
  translate(945+960*cos(radians(90)),990-960*sin(radians(90)));
  rotate(radians(0));
  text("90°",0,0);
  resetMatrix();
  translate(935+960*cos(radians(120)),1003-960*sin(radians(120)));
  rotate(radians(-30));
  text("120°",0,0);
  resetMatrix();
  translate(940+960*cos(radians(150)),1018-960*sin(radians(150)));
  rotate(radians(-60));
  text("150°",0,0);
  popMatrix();
}

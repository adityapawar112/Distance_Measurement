// Created by The Electronic Guy
// www.youtube.com/theelectronicguy
 #include <LiquidCrystal.h> //LCD library
  
  #define echo 2
  #define trig 3
  
  float  duration; // time taken by the pulse to return back
  float  distance; // oneway distance travelled by the pulse
  
  LiquidCrystal lcd(13, 12, 11, 10, 9, 8);//lcd(RS,EN,D4,D5,D6,D7) 
  void setup() {
  
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
    Serial.begin(9600);
    lcd.begin(16, 2);
  
  }
  
  void loop() {
  
    time_Measurement();
    distance = duration * (0.0343) / 2;// calculate the oneway distance travelled by the pulse   
    display_distance(); 
    
  }
  
  void time_Measurement()
  { //function to measure the time taken by the pulse to return back
    digitalWrite(trig, LOW);
    delayMicroseconds(2);
  
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
  
    duration = pulseIn(echo, HIGH);
  }
  void display_distance()
  { //function to display the distance on LCD/Serial Monitor
    lcd.clear();
    lcd.setCursor(0, 0);
    Serial.print("Distance in Cm: ");
    Serial.print(distance);
    Serial.println();
    lcd.print("Distance in Cm: ");
    lcd.setCursor(5, 1);
    lcd.print(distance);
    delay(1000);
   }
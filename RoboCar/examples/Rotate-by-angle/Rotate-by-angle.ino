//  Example #1 for Arduino-based two wheels robot
//  Using library "RoboCar" you can easely control your robot
//  
//  This library is under MIT License protection  
//
//  Created by Alex Noyanov 
//  mail: Alex.noyanov@gmail.com

// Connection scheme:
//  Pin | Action
//  ____|_________________________
//  9   | Left motor Back (LB)
//  8   | Left motor Forward (LF)
//  11  | Right motor Back  (RB)
//  10  | Right motor Forward (RF)
//  ____|_________________________
//

#include <RoboCar.h>  // Library 

void setup() {
  // put your setup code here, to run once:

 myCar.begin(8,9,10,11);  // LF, LB, RF, RB
 myCar.stop();            // Stop all motors 
 myCar.RotateRight(30);   // Now rotate on 30 degree Right
 myCar.goForward(1000);   // Move Forward for 1 second
 myCar.RotateRight(30);   // Now rotate on 30 degree Right
 myCar.goForward(1000);   // Move Forward for 1 second
 myCar.RotateRight(30);   // Now rotate on 30 degree Right
 myCar.stop();            // Stop all motors 

myCar.RotateLeft(30);   // Now rotate on 30 degree Right
 myCar.goForward(1000);   // Move Forward for 1 second
 myCar.RotateLeft(30);   // Now rotate on 30 degree Right
 myCar.goForward(1000);   // Move Forward for 1 second
 myCar.RotateLeft(30);   // Now rotate on 30 degree Right
 myCar.stop();            // Stop all motors  
 
}

void loop() {
  // put your main code here, to run repeatedly:

}

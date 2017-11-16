//  Example #3 for Arduino-based two wheels robot
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

//  Robot testing:

#include <RoboCar.h>  // Library 

RoboCar myCar; 

void setup() {
  // put your setup code here, to run once:
  myCar.testAll();  // Test all motors
}

void loop() {
  // put your main code here, to run repeatedly:

}

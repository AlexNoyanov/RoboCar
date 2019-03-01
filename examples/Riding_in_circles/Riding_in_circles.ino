// === Riding in circles example ===
// This simple example make your bot riding in circles
// Connect all pins as on the scheme below:

//  Pin | Action
//  ____|_________________________
//  9   | Left motor Back (LB)
//  8   | Left motor Forward (LF)
//  11  | Right motor Back  (RB)
//  10  | Right motor Forward (RF)
//  ____|_________________________
//

// March 1 2019
// By Alexander Noyanov <alex.noyanov@gmail.com>

#include <RoboCar.h>    // Library

RoboCar myCar; 

void setup() {
  // put your setup code here, to run once:
  myCar.begin(8,9,10,11);  // LF, LB, RF, RB

 // Riding in circle:
 myCar.stop()            // Stop all motors 
 myCar.goForward(1000);  // Move Forward for 1 second
 myCar.turnRight(100);   // Turn Right 
 myCar.goForward(1000);  // Move Forward for 1 second
 myCar.turnRight(100);   // Turn Right 
 myCar.goForward(1000);  // Move Forward for 1 second
 myCar.turnRight(100);   // Turn Right 
 myCar.goForward(1000);  // Move Forward for 1 second
 
}

void loop() {
  // put your main code here, to run repeatedly:

}

//
//  RoboCar.cpp
//  RoboCar
//
//  Created by Alex Noyanov on 31.10.17.
//  Copyright © 2017 Popoff Developer Studio. All rights reserved.
//

#include "RoboCar.hpp"

// Turn ON motor:
void On(int pin){
    digitalWrite(pin,HIGH);
}

// Turn OFF motor:
void Off(int pin){
    digitalWrite(pin,LOW);
}

void RoboCar::begin(LF,LB,RF,RB){
    pinMode(LB,OUTPUT);
    pinMode(LF,OUTPUT);
    pinMode(RF,OUTPUT);
    pinMode(RB,OUTPUT);
}

void RoboCar::stop(){
    Off(LF);
    Off(LB);
    Off(RF);
    Off(RB);
}

void RoboCar::goForward(delayTime){
    On(LF);
    On(RF);
    delay(delayTime);
    Off(LF);
    Off(RF);
}

void RoboCar::goBack(delayTime){
    On(LB);
    On(RB);
    delay(delayTime);
    Off(LB);
    Off(RB);
}

void RoboCar::turnLeft(delayTime){
    On(RF);
    delay(delayTime);
    Off(RF);
}

void RoboCar::turnRight(delayTime){
    On(LF);
    delay(delayTime);
    Off(LF);
}


// For testing all motors:
void RoboCar::testAll(int a){
    Serial.begin(9600);
    Serial.println("    === Test Mode activated!  ===");
    
    Serial.println(" Left motor Forward");
    turnRight(1000);                        // Turn on Left motor on a second
    
    Serial.println(" Right motor Forward");
    turnLeft(1000);                         // Turn on Right motor on a second
    
    
}
//  Changes from master branch

// New changes in master branch!

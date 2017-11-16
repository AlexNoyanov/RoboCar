//
//  RoboCar.cpp
//  RoboCar
//
//  Created by Alex Noyanov on 31.10.17.
//  Copyright © 2017 Popoff Developer Studio. All rights reserved.
//

#include "RoboCar.hpp"

double r = 0,05;

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


//  Functions for rotate on angle

//  w = 2*pi/t
//  v = 2*pi*R/t
//  v = w*R;
//  rad = w*t
//  rad = 2*pi*R*t
//
//  angle = (rad*180)/pi;

//  rad = (angle*pi)/180
//  t = rad/(2*pi*R)
//  t = (angle*pi)/(2*180*pi*R)

//  t = angle/ (360*R)

void RoboCar::RotateLeft(int angle){
    // Changes from branch AlexMacBookPro
    
    double dTime = angle/(360*r);   // Motor working time in seconds
    
    int tme = dTime * 1000;         // Motor working time in miliseconds
    
    turnLeft(tme);                  // And now turn left with this time delay
    
}
void RoboCar::RotateRight(int angle){
    
}
//  Changed in branch ALexMacBookPro

// more from macbookpro

// this is from MacBookAir

//  Coment in branch AlexMacBookPro

void RoboCar::RotateCenter(int angle)
{
    
}


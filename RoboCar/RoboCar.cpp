//
//  RoboCar.cpp
//  RoboCar
//
//  Created by Alex Noyanov on 31.10.17.
//  Copyright © 2017 Alex Noyanov. All rights reserved.
//

#include "RoboCar.h"

int LF;
int LB;
int RF;
int RB;

// Turn ON motor:
void On(int pin){
    digitalWrite(pin,HIGH);
}

// Turn OFF motor:
void Off(int pin){
    digitalWrite(pin,LOW);
}

void RoboCar::begin(int LF,int LB,int RF,int RB){
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

void RoboCar::goForward(int delayTime){
    On(LF);
    On(RF);
    delay(delayTime);
    Off(LF);
    Off(RF);
}

void RoboCar::goBack(int delayTime){
    On(LB);
    On(RB);
    delay(delayTime);
    Off(LB);
    Off(RB);
}

void RoboCar::turnLeft(int delayTime){
    On(RF);
    delay(delayTime);
    Off(RF);
}

void RoboCar::turnRight(int  delayTime){
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

void RotateLeft(int angle){

    
}
void RotateRight(int angle){
    
}


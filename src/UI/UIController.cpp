//
//  UIController.cpp
//  GVoice
//
//  Created by Andres M. mora M on 27/09/20.
//

#include <stdio.h>
#include <iostream>
#include "UIController.h"

UIController::UIController(){
    std::cout << "UIController Creado! " << std::endl;
    
    
}

double getHeightFromTop(double h){
    return (double) ofGetHeight() - h;
}

double getWidthFromTop(double w){
    return (double) ofGetWidth() - w;
}

double getHeightFromMiddle(double h){
    return  ( ofGetHeight() / 2 ) - h;
}

double getWidthFromMiddle(double w){
    return  w - (ofGetWidth() / 2);
}


void UIController::draw(){
    
    ofSetColor(61, 76, 98, 60); // Primary Blue Color
    ofFill();
    
    ofDrawEllipse(ofGetWidth() / 2, getHeightFromTop(60) , 40, 40);
    
    myCanvas.draw();
    mainSideBar.draw();
    
    double MAX = 80; // px
    
    double dir = 1;
    for(int i = 0; i < ofGetWidth(); i ++){
        double x_value =  getWidthFromMiddle(i);
        ofDrawCircle(i, getHeightFromMiddle( dir * 200 * exp(-pow(x_value * 0.01, 2)) * cos(x_value * 0.4 * ofGetMouseX() / ofGetWidth() ) ), .5);
    }
}




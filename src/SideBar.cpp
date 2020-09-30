//
//  SideBar.cpp
//  GVoice
//
//  Created by Andres M. mora M on 27/09/20.
//

#include "SideBar.hpp"

SideBar::SideBar(double posX, double posY, double w, double h){
    dims.x = w;
    dims.y = h;
    
    pos.x = posX;
    pos.y = posY;
}

void SideBar::draw(){
    ofColor(20, 20, 20);
    ofFill();
    ofDrawRectangle(pos.x, pos.y, dims.x, dims.y);
}

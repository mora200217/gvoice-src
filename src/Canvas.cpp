//
//  Canvas.cpp
//  GVoice
//
//  Created by Andres M. mora M on 27/09/20.
//

#include <stdio.h>
#include "Canvas.h"
#include <iostream>



Canvas::Canvas(float w, float h){
    setWidth(w);
    setHeigth(h);
//    UIElement::setHeigth(h);
    
    std::cout << "Canvas creado con " << getWidth() << std::endl;
}

void Canvas::draw(){
    ofSetColor(20, 30, 20);
    ofFill();
    ofDrawRectangle(0, 0, getWidth(), getheight());
}



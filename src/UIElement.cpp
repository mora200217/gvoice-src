//
//  UIElement.cpp
//  GVoice
//
//  Created by Andres M. mora M on 27/09/20.
//

#include <stdio.h>
#include "UIElement.h"

double UIElement::getWidth(){
    return dims.y; 
}

double UIElement::getheight(){
    return dims.x;
}

void UIElement::setWidth(double new_width){
    dims.x = new_width;
}

void UIElement::setHeigth(double new_width){
    dims.y = new_width;
}
    


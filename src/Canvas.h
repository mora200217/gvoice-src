//
//  Canvas.h
//  GVoice
//
//  Created by Andres M. mora M on 27/09/20.
//

#ifndef Canvas_h
#define Canvas_h
#include "UIElement.h"
#include "ofMain.h"


class Canvas : public UIElement{
private:
    
public:
    Canvas(): Canvas(20.0f, 20.0f){};
    Canvas(float w, float h);
    void draw();
    
    
    
}; 

#endif /* Canvas_h */

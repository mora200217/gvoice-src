//
//  SideBar.hpp
//  GVoice
//
//  Created by Andres M. mora M on 27/09/20.
//

#ifndef SideBar_hpp
#define SideBar_hpp

#include <stdio.h>
#include "UIElement.h"
#include "ofMain.h"

class SideBar : public UIElement{
    protected:
    ofImage settings_icon = ofImage();
    
    public:
    SideBar() : SideBar(0,0,200, ofGetHeight() ){};
    SideBar(double posX, double PosY, double w, double h);
 
    
    void draw(); 
};

#endif /* SideBar_hpp */

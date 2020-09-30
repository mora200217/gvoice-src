//
//  UIController.cpp
//  GVoice
//
//  Created by Andres M. mora M on 27/09/20.
//

#include <stdio.h>
#include "ofMain.h"
#include "Canvas.h"
#include "Sidebar.hpp"
#include <string>

class UIController: public ofBaseApp{
private:
    // Paleta de Colores
    string primaryColor = "#3D4C62";
    string secondaryColor = "#3D4C62";
    string accentColor = "#3D4C62";
    
    float SIDE_BAR_WIDTH = 80; // px
    
    
    
    Canvas myCanvas = Canvas(40.0f, 10.0f);
    SideBar mainSideBar = SideBar(0,0, 80, ofGetHeight());
    
    
    double count = 0;
    

public:
    UIController();
    
    void draw();
};

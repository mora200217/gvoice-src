//
//  UIElement.h
//  GVoice
//
//  Created by Andres M. mora M on 27/09/20.
//

#ifndef UIElement_h
#define UIElement_h

struct simple_vector{
    double x = 0.0f;
    double y = 0.0f;
};


class UIElement{
    protected:
        simple_vector dims ; // Dimensiones
        simple_vector pos; // Posición
        
    public:
        double getWidth();
        double getheight();
        
        void setWidth(double new_width);
        void setHeigth(double new_height);
}; 

#endif /* UIElement_h */

//
//  Sprite.hpp
//  Pacman
//
//  Created by Juneyoung Seo on 2024/11/06.
//

#ifndef Sprite_hpp
#define Sprite_hpp

#include <iostream>
#include "Grid.hpp"

class Sprite{
public:
    Sprite(Grid* c, std::string FileName);
    void draw2D() const;
    void draw3D() const;
    
    void leftTurn();
    void rightTurn();
    void backward(); // Functions for Map3D
    
    void leftArrow();
    void rightArrow();
    void upArrow();
    void downArrow(); // Functions for Map2D, Checking if it is a valid movement happens outside the functions
    
    void nextTile(); // called when leaving a grid
    
private:
    Grid* curr;
    bool stopped;
    int headed;
    float t, v; // 30FPS, v tiles per second
    std::string texFileName;
};

#endif /* Sprite_hpp */

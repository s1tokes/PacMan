//
//  Sprite.cpp
//  Pacman
//
//  Created by Juneyoung Seo on 2024/11/06.
//

#include "Sprite.hpp"
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

Sprite::Sprite(Grid* c, std::string FileName): stopped(true), headed(-1), t(0){
    curr = c;
    
    /* Implement code connecting Texture file to sprite instance */
}

// 3D Functions

void Sprite::leftTurn(){
    
}

void Sprite::rightTurn(){
    
}

void Sprite::backward(){
    
}

void Grid::draw3D() const{
    
}

// 2D Functions

void Sprite::leftArrow(){
    
}

void Sprite::rightArrow(){
    
}

void Sprite::upArrow(){
    
}

void Sprite::downArrow(){
    
}

void Grid::draw2D() const{
    
}

// Common functions

void Sprite::nextTile(){
    
}

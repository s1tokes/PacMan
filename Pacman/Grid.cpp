//
//  Grid.cpp
//  Pacman
//
//  Created by Juneyoung Seo on 2024/11/04.
//

#include "Grid.hpp"
#include <OpenGL/gl.h>
#include <GLUT/glut.h>


Grid::Grid(State s, int x, int y){
    state = s;
    origin[0] = x; origin[1] = y; origin[2] = 0;
}

Grid::Grid(State s, int x, int y, int z){
    state = s;
    origin[0] = x; origin[1] = y; origin[2] = z;
    
}

void Grid::draw2D() const{
    
}

void Grid::draw3D() const{
    
}

void Grid::setState(State s){
    
}

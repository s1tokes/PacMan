//
//  main.cpp
//  Pacman
//
//  Created by Juneyoung Seo on 2024/10/31.
//

#define GL_SILENCE_DEPRECATION
#include <iostream>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#include "Map2D.hpp"
#include "Sprite.hpp"

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0, 0, 0, 0);
    glColor3f(1, 1, 1);
    glutWireTeapot(0.5);
    glutSwapBuffers();
}

Map2D map(15, 15);

int main(int argc, char * argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    
    glutDisplayFunc(display);
}

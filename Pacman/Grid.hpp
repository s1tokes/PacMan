//
//  Grid.hpp
//  Pacman
//
//  Created by Juneyoung Seo on 2024/11/04.
//

#ifndef Grid_hpp
#define Grid_hpp
															
#include <iostream>

class Grid{
public:
    enum Orientation {PLUS_X, MINUS_X, PLUS_Y, MINUS_Y, PLUS_Z, MINUS_Z}; // 0, 1, 2, 3, 4, 5
    enum State {SMALL_POINT, LARGE_POINT, EATEN, WALL}; // 0, 1, 2, 3
    static std::string texFileName[4];
    static int size;
    
    Grid(State s, int x, int y);
    Grid(State s, int x, int y, int z);
    void draw2D() const;
    void draw3D() const;
    void setState(State s);
    
    State state;
    Grid* adj[4];
    
    float origin[3]; // meeting point of 0-side and 1-side
    float dir_zero[3]; // direction vector of 0-side
    float dir_one[3]; // direction vector of 1-side
};

#endif /* Grid_hpp */

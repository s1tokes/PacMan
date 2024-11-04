//
//  Grid.hpp
//  Pacman
//
//  Created by Juneyoung Seo on 2024/11/04.
//

#ifndef Grid_hpp
#define Grid_hpp

#include <stdio.h>

class Grid{
    enum State {SMALL_POINT, BIG_POINT, EATEN};
    
    bool isWall;
    State state;
    Grid* adj[4];
    
    static int size;
    int posX, posY;
    
    Grid(bool wall, State s, int x, int y);
    void draw() const;
};

#endif /* Grid_hpp */

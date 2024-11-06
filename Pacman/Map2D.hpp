//
//  Map.hpp
//  Pacman
//
//  Created by Juneyoung Seo on 2024/11/04.
//

#ifndef Map_hpp
#define Map_hpp

#include <iostream>
#include "Grid.hpp"

class Map2D{
    int row, col;
    Grid** obstacles;
    
    Map2D(int r, int c);
    
};

#endif /* Map_hpp */

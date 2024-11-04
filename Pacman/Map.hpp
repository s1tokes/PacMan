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

class Map{
    int row, col;
    Grid** obstacles;
    
    Map(int r, int c);
    
};

#endif /* Map_hpp */

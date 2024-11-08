//
//  Map.hpp
//  Pacman
//
//  Created by Juneyoung Seo on 2024/11/04.
//

#ifndef Map_hpp
#define Map_hpp

#include <iostream>
#include <vector>
#include "Grid.hpp"
using namespace std;

class Map2D{
public:
    Map2D(int r, int c, string FileName);
    void draw();
    
private:
    int row, col;
    vector<vector<Grid*>> lattice;
};

#endif /* Map_hpp */

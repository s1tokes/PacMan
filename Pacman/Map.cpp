//
//  Map.cpp
//  Pacman
//
//  Created by Juneyoung Seo on 2024/11/04.
//

#include "Map2D.hpp"
#include "Grid.hpp"
#include <fstream>
using namespace std;

Map2D::Map2D(int r, int c, string FileName){
    row = r;
    col = c;
    
    lattice.resize(row);
    for(int i = 0; i < row; i++) lattice[i].resize(col);
    ifstream ifs(FileName);
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            int k; ifs >> k;
            Grid::State st = (Grid::State)k;
            lattice[i][j] = new Grid(st, i, j);
        }
    }
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == 0){
                lattice[i][j] -> adj[0] = lattice[i + 1][j];
                lattice[i][j] -> adj[2] = nullptr;
            }else if(i == row){
                lattice[i][j] -> adj[0] = nullptr;
                lattice[i][j] -> adj[2] = lattice[i - 1][j];
            }else{
                lattice[i][j] -> adj[2] = lattice[i - 1][j];
                lattice[i][j] -> adj[0] = lattice[i + 1][j];
            }
            
            if(j == 0){
                lattice[i][j] -> adj[1] = lattice[i][j + 1];
                lattice[i][j] -> adj[3] = nullptr;
            }else if(j == col){
                lattice[i][j] -> adj[1] = nullptr;
                lattice[i][j] -> adj[3] = lattice[i][j - 1];
            }else{
                lattice[i][j] -> adj[1] = lattice[i][j + 1];
                lattice[i][j] -> adj[3] = lattice[i][j - 1];
            }
        }
    }
}

void Map2D::draw(){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            lattice[i][j] -> draw2D();
        }
    }
}


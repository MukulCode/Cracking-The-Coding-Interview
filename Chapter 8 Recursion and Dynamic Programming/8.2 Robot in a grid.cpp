/*
Imagine a robot sitting on the upper left corner of grid with r rows and c columns. The robot can only 
move in two directions, right and down, but crtain cells are "off limits" such that the robot cannot step 
on them. Design an algorithm to find a path for the robot from the top left to the bottom right.
*/
#include<iostream>
#include<vector>
using namespace std;


int robotInGridRecursive(vector<vector<int>> input, int i, int j) {
    int n = input.size(), m = input[0].size();
    if(input[i][j] == 1){
        return 0;
    }else if(i == n-1 && j == m-1){
        return 1;
    }

    int down = 0, right = 0;
    if(i+1 <= n-1) {
        down += robotInGridRecursive(input, i+1, j);
    }

    if(j+1 <= m-1){
        right += robotInGridRecursive(input, i, j+1);
    }
    return right + down;
}

int main () {
    vector<vector<int>> input = {{0, 0, 0},
                                {0, 1, 0},
                                {0, 0, 0}};
                                

        cout << robotInGrid(input, 0, 0) << endl;
}
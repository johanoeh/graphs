/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johan
 *
 * Created on March 28, 2020, 8:17 AM
 */

#include <cstdlib>
#include<iostream>
#include "algorithms.h"
#include "file.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    adjacency_matrix matrix(5);

    genenerate_graph(matrix,0);
    
    cout << matrix << endl;
    
    //write("matrix",matrix);
    
    const adjacency_matrix m = read("matrix");
    
    cout << m << endl;
    
    return 0;
}


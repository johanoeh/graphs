
/* 
 * File:   file.cpp
 * Author: johan
 * 
 * Created on March 28, 2018, 5:39 PM
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include "file.h"

/**
 * 
 * @param resource
 * @return 
 */
const adjacency_matrix read(const std::string & resource) {

    std::string line;
    std::ifstream _ifstream(resource);
    std::vector<std::string> rows;
    
    
    if (_ifstream.is_open()) {
        for (; std::getline(_ifstream, line);) {
           rows.push_back(line);
        }
    }
    
    adjacency_matrix m(rows.size());
    
    size_t i = 0;
    
    for(auto it = rows.begin(); it != rows.end(); it++, i++){     
       std::istringstream iss(*it);    
       for(size_t j = 0;!iss.eof() && j < rows.size(); j++){
           int weight;
           iss >> weight;
           m.add(i,j,weight);
       }
    }
  
    return  m;
}

const void write(const std::string resource, const adjacency_matrix & m) {
    std::ofstream _ofstream(resource);
    if (_ofstream.is_open()) {
        _ofstream << m;
    } 
}
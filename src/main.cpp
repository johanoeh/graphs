#include <iostream>
#include "adjacency_matrix.h"
#include "algorithms.h"
#include "node.h"
#include <vector>

int main(int argv,char ** argc){ 

  std::vector<node> nodes(10);
  for(node n : nodes){
    std::cout << n << std::endl;
  }

  /*adjacency_matrix  matrix(10);
  std::cout << matrix << std:: endl;*/
  
  return 0;
}

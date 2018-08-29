#include <iostream>
#include "adjacency_matrix.h"
#include "algorithms.h"

int main(int argv,char ** argc){ 

  adjacency_matrix  matrix(10);
  std::cout << matrix << std:: endl;
  
  return 0;
}

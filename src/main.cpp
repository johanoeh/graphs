#include <iostream>
#include <algorithm>
#include "adjacency_matrix.h"
#include "algorithms.h"
#include "node.h"
#include <vector>
#include <cstdlib>

int main(int argv,char ** argc){ 

  std::vector<node> nodes(10);
  int i = 0;

  for(node & n : nodes){
    n.set(std::rand()%10,i,std::rand()%10);
    i++;
  }

  srand(time(NULL)); 
  std::random_shuffle(nodes.begin(), nodes.end());

  for(node n: nodes){ 
    std::cout << n << std::endl;
  }

  std::cout<<std::endl;

  std::sort(nodes.begin(), nodes.end());

  for(node n: nodes){ 
    std::cout << n << std::endl;
  }

  /*adjacency_matrix  matrix(10);
  std::cout << matrix << std:: endl;*/
  
  return 0;
}

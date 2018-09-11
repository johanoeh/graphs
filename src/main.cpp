#include <iostream>
#include <algorithm>
#include "adjacency_matrix.h"
#include "algorithms.h"
#include "node.h"
#include <vector>
#include <cstdlib>

template<class T>
void print_nodes(std::vector< node<T> > nodes){
  for(node<T> n : nodes ){ 
    std::cout<<n<<std::endl;
  }
}

void fill(std::vector< node<int> > & nodes){
  auto it = nodes.begin();
  for(int i = 0 ; it != nodes.end() ; i++, it ++){
    (*it).set(i, std::rand() % 10);
  }
}

bool is_ascending(std::vector<node<int>> nodes){

  auto it = nodes.begin();
  for(; it != nodes.end() -1 ; it++){
    if(*it >= *(it + 1)) return 0;    
  }
 return 1;

}

bool is_descending(std::vector< node<int>> nodes){

  auto it = nodes.begin();

  for(; it != nodes.end() -1 ; it++){
    if(*it <= *(it + 1)) return 0;    
  }

 return 1;
}


bool is_strictly_ascending(std::vector<node<int>> nodes){

  auto it = nodes.begin();
  for(; it != nodes.end() -1 ; it++){
    if(*it > *(it + 1)) return 0;    
  }
 return 1;

}

bool is_strictly_descending(std::vector< node<int>> nodes){

  auto it = nodes.begin();

  for(; it != nodes.end() -1 ; it++){
    if(*it < *(it + 1)) return 0;    
  }

 return 1;
}


void check_sorted(std::vector <node <int> > nodes){

  bool sorted_descending = is_descending(nodes);
  bool sorted_ascending  = is_ascending(nodes);

  if(sorted_descending){
    std::cout << std::endl << "The nodes are sorted ascending" << std::endl;
  } else {
    std::cout << std::endl << "The nodes are not sorted ascending" << std::endl;
  }

  if(sorted_ascending){ 
    std::cout << "The nodes are sorted descending" << std::endl;
  } else { 
    std::cout<<"The nodes are not sorted descending" << std::endl;
  }

  if(!(sorted_descending || sorted_ascending)){
    std::cout << "The nodes are not sorted" << std::endl;
  }
}


void test_add_sub(std::vector< node<int> > nodes ){

  auto it = nodes.begin();
  node<int> n(0,0);

  std::cout << "Testing operator +" << std::endl;

  for( ; it != nodes.end() ; it++){
    n = n + *it;
  }

  std::cout << n << std::endl;
  std::cout << "Testing operator -" << std::endl;
  it = nodes.begin();
  for( ; it != nodes.end() ; it++){
    n = n - *it;
  }

  std::cout << n << std::endl ;
  std::cout << "Testing operator +=" << std::endl;

  it = nodes.begin();  

  for( ; it != nodes.end() ; it++){
    n += *it;
  }

  std::cout << n << std::endl ;

  std::cout << "Testing operator -=" << std::endl;
  it = nodes.begin();

  for( ; it != nodes.end() ; it++){
    n -= *it;
  }
  
  std::cout << n << std::endl;
  
}

void test_node(std::vector< node<int> > nodes){

  std::random_shuffle(nodes.begin(), nodes.end()); 
  check_sorted(nodes);
  std::sort(nodes.begin(),nodes.end());
  check_sorted(nodes);
  test_add_sub(nodes);
}


int main(int argv,char ** argc){ 

  std::vector< node<int> > nodes(10);
  fill(nodes);
  test_node(nodes);

  /*adjacency_matrix  matrix(10);
  std::cout << matrix << std:: endl;*/
  
  return 0;
}

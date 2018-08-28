/**
 *
 * @author johan
 * created :2018-08-28
 * Last edited :
 */

#include "adjacency_matrix.h"

adjacency_matrix::adjacency_matrix(std::size_t n ) {

  this->n=n;
  matrix.resize(n);
  for(std::size_t i = 0 ; i < n ; i++){
    matrix[i].resize(n);
  }

 
  

}

adjacency_matrix::adjacency_matrix(const adjacency_matrix& orig){

}

std::ostream & operator<<(std::ostream & out, const adjacency_matrix & m){
  for(std::vector<int> row : m.matrix){
     for(int col : row) out << col << ' ';
     out << std::endl;
  }
  return out; 
}
adjacency_matrix::~adjacency_matrix(){

}


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

/**
 * Adds an edge between node a and node b with a weight
 */
void adjacency_matrix::add(std::size_t node_a, std::size_t node_b, int weight){
  matrix[node_a][node_b] = matrix[node_b][node_a] = weight;
}

adjacency_matrix::adjacency_matrix(const adjacency_matrix& orig){

}

std::vector<int> & adjacency_matrix::operator[](const int index){
  return matrix[index];
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


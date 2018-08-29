/**
 * Implements an adjacency matrix,  used to tell if an 
 * edge in a graph  is adjacent to another edge in the graph
 * and the lenght/weight of the edge.
 * @author johan
 * created :2018-08-28
 * Last edited :
 */

#include "adjacency_matrix.h"
/**
 * Creates a matrix of size  n rows * n columns
 * @param n size of the matrix
 */
adjacency_matrix::adjacency_matrix(std::size_t n ) {
  this->n=n;
  matrix.resize(n);
  for(std::size_t i = 0 ; i < n ; i++){
    matrix[i].resize(n);
  }
}

/**
 * Adds an edge between node a and node b with a weight works in two directions
 * connects a to b and b to a.
 * @param node_a the node to connect
 * @param node_b the node to connect
 * @param weight the weight of the edge
 */
void adjacency_matrix::add(std::size_t node_a, std::size_t node_b, int weight){
  matrix[node_a][node_b] = matrix[node_b][node_a] = weight;
}

/**
 * sets the visited value for a node
 * @param node_n the node to set value for
 * @param v_bool the boolean value for the node true or false
 */
void adjacency_matrix::set_visited(std::size_t node_n, bool v_bool){
  visited[node_n] = v_bool;
  path.push(node_n);
}

/**/
bool adjacency_matrix::is_visited(std::size_t node_n){
  return visited[node_n];
}

adjacency_matrix::adjacency_matrix(const adjacency_matrix& orig){
  *this = orig;
}

std::queue<int> adjacency_matrix::get_path(){
  return path;
}

adjacency_matrix & adjacency_matrix::operator=(const adjacency_matrix & orig){
  // check for self assignemt
  if(this != &orig){
     this->n = n;  
     matrix.resize(n);
     for(std::size_t i = 0 ; i < n ; i++){
       matrix[i].resize(n);
       for(std::size_t j = 0; j < n; j++){
         matrix[i][j] = orig.matrix[i][j];
       }
     }
  }

  return *this;
}

std::vector<int> & adjacency_matrix::operator[](const int index){
  return matrix[index];
}

/**
 * Overloaded ostream operator used to print  the matrix using operator <<
 */
std::ostream & operator<<(std::ostream & out, const adjacency_matrix & m){
  for(std::vector<int> row : m.matrix){
     for(int col : row) out << col << ' ';
     out << std::endl;
  }
  return out; 
}

std::size_t adjacency_matrix::size(){
  return n;
}

adjacency_matrix::~adjacency_matrix(){
}


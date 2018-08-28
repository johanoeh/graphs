#ifndef ADJACENCY_MATRIX_H
#define ADJACENCY_MATRIX_H

/**
 * @author johan
 * created 2018-08-28
 * Last edited :
 */

#include <vector>
#include <iostream>

class adjacency_matrix {

public: 

  adjacency_matrix(std::size_t);
  adjacency_matrix(const adjacency_matrix& orig);
  adjacency_matrix & operator=(const adjacency_matrix & other);
 
  bool is_visited(std::size_t);
  void set_visited(std::size_t, bool);
  std::size_t size();
  /**
   * Adds an edge between node a and node b with a weight
   */
  void add(std::size_t node_a, std::size_t node_b, int weight);
  std::vector<int> & operator[](const int index);
  friend std::ostream& operator<<(std::ostream& out,const adjacency_matrix & m);
  virtual ~adjacency_matrix();

private:
  std::vector< std::vector<int> > matrix;
  std::size_t  n;
  std::vector<bool> visited;

};

#endif /*ADJACENCY_MATRIX_H*/



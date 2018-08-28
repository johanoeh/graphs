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
  friend std::ostream& operator<<(std::ostream& out,const adjacency_matrix & m);
  virtual ~adjacency_matrix();

private:
std::vector< std::vector<int> > matrix;
std::size_t  n;

};

#endif /*ADJACENCY_MATRIX_H*/



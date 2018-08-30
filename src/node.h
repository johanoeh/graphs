#ifndef NODE_H
#define NODE_H

#include <cstdlib>
#include <iostream>
#include "adjacency_matrix.h"

/**
 * @author johan
 * created 2018-08-30
 * Last edited :
 */
class node {

public: 

  node(std::size_t node_n, std::size_t dist, std::size_t prev);
  node();
  node(const node& orig);
  node & operator=(const node & orig);
  
  void set(std::size_t node_n, std::size_t dist, std::size_t prev);
  /*Overloaded operators*/
  friend bool operator<(const node& l, const node & r);
  friend bool operator>(const node& l, const node & r);
  friend bool operator<=(const node& l, const node & r);
  friend bool operator>=(const node& l, const node & r);
  friend std::ostream& operator<<(std::ostream & o, const node & n);

  /*overloaded binary arithmetic operators*/
  friend node operator+(node lhs, const node& rhs);
  friend node operator-(node lhs, const node& rhs);
  node & operator+=(const node& rhs);
  node & operator-=(const node& rhs);

  /* friend functions*/
  friend void BFS(adjacency_matrix & m, std::size_t start_n);
  friend void DFS(adjacency_matrix & m, std::size_t start_n);
  friend void DFS_I(adjacency_matrix & m, std::size_t start_n);
  friend void dijkstra(adjacency_matrix & m, std::size_t start_n);

  virtual ~node();

private:

  std::size_t node_n;
  std::size_t dist;
  std::size_t prev;

};

#endif /*NODE_H*/



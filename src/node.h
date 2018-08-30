#ifndef NODE_H
#define NODE_H

#include <cstdlib>

/**
 * @author johan
 * created 2018-08-30
 * Last edited :
 */
class node {

public: 

  node(std::size_t node_n, std::size_t dist, std::size_t prev);
  node(const node& orig);
  node & operator=(const node & orig);

  friend bool operator<(const node& l, const node & r);
  friend bool operator>(const node& l, const node & r);
  friend bool operator<=(const node& l, const node & r);
  friend bool operator>=(const node& l, const node & r);

  virtual ~node();

private:
  std::size_t node_n;
  std::size_t dist;
  std::size_t prev;

};

#endif /*NODE_H*/



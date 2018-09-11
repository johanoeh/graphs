#ifndef NODE_H
#define NODE_H

#include <cstdlib>
#include <iostream>
#include "adjacency_matrix.h"
#include <limits>

/**
 * @author johan
 * created 2018-08-30
 * Last edited :
 */

template<class T>
class node {

public: 

  node(T dist, std::size_t extra);
  node();
  node(const node& orig);
  node & operator=(const node & orig);
  
  void set(T dist, std::size_t extra);

  const T get_dist() const;

  friend std::ostream& operator<<(std::ostream & out, const node & n){
    out << " dist:  " << n.dist << " extra: " << n.extra << " inf: "<< n.inf ;
    return out;
  }


  /* friend functions*/
 
  friend void BFS(adjacency_matrix & m, std::size_t start_n);
  friend void DFS(adjacency_matrix & m, std::size_t start_n);
  friend void DFS_I(adjacency_matrix & m, std::size_t start_n);
  friend void dijkstra(adjacency_matrix & m, std::size_t start_n);


  /*overloaded operators implementation the distance is used for comparison*/

 
 bool operator<(const node<T> & r){
   if(r.inf) return 1;
   return  dist < r.dist;
  }

 
  bool operator>(const node<T>& other){
    return dist > other.dist;
  }
 
  
  bool operator<=(const node<T>& other){
    return  dist <= other.dist;
  }

  
  bool operator >=(const node<T> & other){
    return  dist >= other.dist;
  }

  /* Overloaded binary arithmetic operators*/
  node<T> operator +(const node<T>& rhs){
    *this+=rhs;
    return *this;
  }
  
  node<T> & operator+=(const node<T> & rhs){
    this->dist+=rhs.dist;
    this->inf = 0;
    return *this;
  }

  
  
  node<T> &operator-=(const node<T> & rhs){
    this->dist-=rhs.dist;
    return *this;
  }

  
  node<T> operator -(const node<T> & rhs){
    return *this-=rhs;
  }


  virtual ~node();

private:

  T dist;
  std::size_t extra;
  bool inf;

};

#endif /*NODE_H*/



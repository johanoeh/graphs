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

template<class T>
class node {

public: 

  node(T dist, std::size_t prev);
  node();
  node(const node& orig);
  node & operator=(const node & orig);
  
  void set(T dist, std::size_t prev);
  /*Overloaded operators*//*
  friend bool operator<(const node<T>& l, const node<T> & r);
  friend bool operator>(const node<T>& l, const node<T> & r);
  friend bool operator<=(const node<T>& l, const node<T> & r);
  friend bool operator>=(const node<T>& l, const node<T> & r);*/

  friend std::ostream& operator<<(std::ostream & out, const node & n){
    out << " dist:  " << n.dist << " prev: " << n.prev << " is_infinity: "<< n.is_infinity ;
    return out;
  }

  /*overloaded binary arithmetic operators*//*
  friend node<T> operator+(node<T> lhs, const node<T>& rhs);
  friend node<T> operator-(node<T> lhs, const node<T>& rhs);
  node<T> & operator+=(const node<T>& rhs);
  node<T> & operator-=(const node<T>& rhs);*/

  /* friend functions*/
 
  friend void BFS(adjacency_matrix & m, std::size_t start_n);
  friend void DFS(adjacency_matrix & m, std::size_t start_n);
  friend void DFS_I(adjacency_matrix & m, std::size_t start_n);
  friend void dijkstra(adjacency_matrix & m, std::size_t start_n);

  /*overloaded operators implementation the distance is used for comparison*/

 
   bool operator<(const node<T> & r){
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
    this->is_infinity = 0;
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
  std::size_t prev;
  bool is_infinity;

};

#endif /*NODE_H*/



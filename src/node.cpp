/**
 *
 * @author johan
 * created :2018-08-30
 * Last edited :
 *
 */

#include "node.h"

/**
 * class node represents a node in a graph
 * dist is used for the distance to the root (start node)
 * prev is the previous node in the path to root
 * @param node_n the nodes number
 * @param dist the distance to root(start node)
 * @param prev the previous node on the path to root
 */
template<class T>
node<T>::node(T dist, std::size_t prev) : 
  dist(dist), 
  prev(prev){}

template<class T>
node<T>::node():is_infinity(1),dist(0),prev(0){}

template<class T>
node<T>::node(const node<T>& orig){
  *this = orig;
}

template<class T>
void node<T>::set(T dist, std::size_t prev){
  this->dist = dist; 
  this->prev = prev; 
  this->is_infinity = false;
}

template<class T>
node<T> & node<T>::operator=(const node<T> & orig){

  // check for selfassignment
  if(this != &orig){
    this->is_infinity = orig.is_infinity;
    this->dist = orig.dist;
    this->prev = orig.prev;
  }
  return *this;
}


template<class T>
node<T>::~node(){

}


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
 * extra is the extraious node in the path to root
 * @param node_n the nodes number
 * @param dist the distance to root(start node)
 * @param extra the extraious node on the path to root
 */
template<class T>
node<T>::node(T dist, std::size_t extra) : 
  dist(dist), 
  extra(extra){}

template<class T>
node<T>::node():inf(1),dist(std::numeric_limits<T>::max()),extra(0){}

template<class T>
node<T>::node(const node<T>& orig){
  *this = orig;
}

template<class T>
void node<T>::set(T dist, std::size_t extra){
  this->dist = dist; 
  this->extra = extra; 
  this->inf = false;
}

template<class T>
node<T> & node<T>::operator=(const node<T> & orig){

  // check for selfassignment
  if(this != &orig){
    this->inf = orig.inf;
    this->dist = orig.dist;
    this->extra = orig.extra;
  }
  return *this;
}


template<class T>
const T node<T>::get_dist() const{ 
  return dist;
}


template<class T>
node<T>::~node(){

}


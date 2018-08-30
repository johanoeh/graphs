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
node::node(std::size_t node_n, std::size_t dist, std::size_t prev) : 
  node_n(node_n), 
  dist(dist), 
  prev(prev){}

node::node(){}

node::node(const node& orig){
  *this = orig;

}

node & node::operator=(const node & orig){

  // check for selfassignment
  if(this != &orig){
    this->node_n = orig.node_n;
    this->dist = orig.dist;
    this->prev = orig.prev;
  }
  return *this;
}

/*overloaded operators implementation the distance is used for comparison*/

bool operator<(const node& l, const node & r){
  return l.dist < r.dist;
}

bool operator>(const node& l, const node& r){
  return l.dist > r.dist;
}

bool operator<=(const node& l, const node& r){
  return l.dist <= r.dist;
}

bool operator >=(const node& l, const node & r){
  return l.dist >= r.dist;
}

std::ostream& operator<<(std::ostream & out, const node& n ){
  out << n.node_n <<" : " << n.prev <<" :  " << n.dist ;
  return out;
}

node::~node(){

}


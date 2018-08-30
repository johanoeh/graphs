/**
 *
 * @author johan
 * created :2018-08-30
 * Last edited :
 */

#include "node.h"


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


node::~node(){

}


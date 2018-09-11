/**
 *
 * @author johan
 * created :2018-08-28
 * Last edited :
 *
 * BFS (breath first search algorithm) 
 * select a start node in the graph
 */

#include "algorithms.h"
#include <algorithm>

struct less_by_dist{

  bool operator()(const  node<int> & lhs, const node<int> & rhs) const{
    return lhs.get_dist() < rhs.get_dist();
  }
};


void genenerate_graph(adjacency_matrix & m, std::size_t start_n){

  std::queue<std::size_t> q;
  q.push(start_n);
  m.set_visited(start_n,true);

  std::vector<int> nodes(m.size());
  unsigned i = 0;
  for(auto it = nodes.begin() ; it != nodes.end(); it++, i++ ){
    *it=i;
  }

  random_shuffle(nodes.begin(), nodes.end());

  while(!q.empty()){

    std::size_t curr_n = q.front();
    q.pop();

    for(std::size_t i = 0; i < m.size() ; i++){

      if(!m.is_visited(i) && m[curr_n][i] != 0){
	q.push(i);
        m.set_visited(i,true);
      }
    }
  }
}

void BFS(adjacency_matrix & m, std::size_t start_n){

  std::queue<std::size_t> q;
  q.push(start_n);
  m.set_visited(start_n,true);

  while(!q.empty()){

    std::size_t curr_n = q.front();
    q.pop();

    for(std::size_t i = 0; i < m.size() ; i++){

      if(!m.is_visited(i) && m[curr_n][i] != 0){
	q.push(i);
        m.set_visited(i,true);
      }
    }
  }
}

void DFS(adjacency_matrix & m, std::size_t node_n){

  for(std::size_t i = 0; i < m.size(); i++ ){
    if(!m.is_visited(i) && m[node_n][i] != 0 ){
      DFS(m,i);
    }
  }
  m.set_visited(node_n,true);
}

void DFS_I(adjacency_matrix & m, std::size_t start_n){

  std::stack<std::size_t> s;
  s.push(start_n);
  m.set_visited(start_n,true);

  while(!s.empty()){

    std::size_t curr_n = s.top();

    for(std::size_t i = 0; i < m.size() ; i++){

      if(!m.is_visited(i) && m[curr_n][i] != 0){
	s.push(i);
        m.set_visited(i,true);
      }
    }

    s.pop();
  }
}

void dijkstra(adjacency_matrix & m, std::size_t start_n){

 /**
  *
  * vector containing the nodes with their distances by the start of the algorithm all the distances 
  * Should be initilized to infinity ....
  *
  */
 std::vector< node<int> > dist(m.size());

 node<int> start;
 node<int>  tmp;

 dist[start_n].set(0,0);

 std::priority_queue< node<int>, std::vector< node<int> >,less_by_dist > pq;

 pq.push(start);

 while(!pq.empty()){

  node<int> top = pq.top();
  auto i = top.extra;
  pq.pop();

  for(unsigned j = 0 ; j < m.size() ; j++){
    if(m.is_visited(j)) { continue; }
    tmp.set(m[i][j], 0);
    if(dist[i] + tmp < dist[j]){
	dist[j].set( dist[i].dist + m[i][j],i);
        pq.push(dist[j]);
    }
  }
  m.set_visited(i,1);
 } 
}


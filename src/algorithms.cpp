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


void BFS(adjacency_matrix & m, std::size_t start_n){

  std::queue<std::size_t> q;
  q.push(start_n);
  m.set_visited(start_n,true);

  while(!q.empty()){

    std::size_t curr_n = q.front();
    q.pop();

    for(std::size_t i = 0; i < m.size() ; i++){

      if(!m.is_visited(i) && m[curr_n][i] == 0){
	q.push(i);
        m.set_visited(i,true);
      }
    }
  }
}

void DFS(adjacency_matrix & m, std::size_t start_n){

}

void dijkstra(adjacency_matrix & m, std::size_t start_n){

}


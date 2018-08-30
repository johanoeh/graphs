#ifndef ALGORITHMS_H
#define ALGORITHMS_H

/**
 * @author johan
 * created 2018-08-28
 * Last edited :
 */
#include "adjacency_matrix.h"
#include <queue>
#include <stack>
void BFS(adjacency_matrix & m, std::size_t start_n);
void DFS(adjacency_matrix & m, std::size_t start_n);
void dijkstra(adjacency_matrix & m, std::size_t start_n);
void DSF_I(adjacency_matrix & m, std::size_t start_n);


#endif /*ALGORITHMS_H*/



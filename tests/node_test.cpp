/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   node_test.cpp
 * Author: johan
 *
 * Created on March 28, 2020, 1:43 PM
 */

#include <stdlib.h>
#include <iostream>
#include "node.h"

/*
 * Simple C++ Test Suite
 */

void testNode() {
   
    
    node<int> _node();
    
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testNode (node_test) message=error message sample" << std::endl;
    }
}

void testNode2() {
    node<int> _node();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testNode2 (node_test) message=error message sample" << std::endl;
    }
}

void testNode3() {
  
}

void testSet() {
    int dist;
    std::size_t extra;
    node<int> _node;
    _node.set(dist, extra);
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testSet (node_test) message=error message sample" << std::endl;
    }
}

void testGet_dist() {
    node<int> _node;
    const int result = _node.get_dist();
    if (true /*check result*/) {
        std::cout << "%TEST_FAILED% time=0 testname=testGet_dist (node_test) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% node_test" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testNode (node_test)" << std::endl;
    testNode();
    std::cout << "%TEST_FINISHED% time=0 testNode (node_test)" << std::endl;

    std::cout << "%TEST_STARTED% testNode2 (node_test)" << std::endl;
    testNode2();
    std::cout << "%TEST_FINISHED% time=0 testNode2 (node_test)" << std::endl;

    std::cout << "%TEST_STARTED% testNode3 (node_test)" << std::endl;
    testNode3();
    std::cout << "%TEST_FINISHED% time=0 testNode3 (node_test)" << std::endl;

    std::cout << "%TEST_STARTED% testSet (node_test)" << std::endl;
    testSet();
    std::cout << "%TEST_FINISHED% time=0 testSet (node_test)" << std::endl;

    std::cout << "%TEST_STARTED% testGet_dist (node_test)" << std::endl;
    testGet_dist();
    std::cout << "%TEST_FINISHED% time=0 testGet_dist (node_test)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}


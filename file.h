/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   file.h
 * Author: johan
 *
 * Created on March 28, 2020, 5:39 PM
 */
#include <string.h>
#ifndef FILE_H
#define FILE_H

#include "adjacency_matrix.h"



const adjacency_matrix  read(const std::string & resource);

const void write(const std::string resource, const adjacency_matrix & m);

#endif /* FILE_H */


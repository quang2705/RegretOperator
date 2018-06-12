//==========================================================================================
//Copyright 2018 ©, 2018 Minh Do, Hiep phan, Quang, Nguyen, Matthew Rinker, Ashwin Lall
//
//This file is a part of the RegretOperator project.
//
//The RegretOperator project is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    The RegretOperator project is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//along with this program. If not, see <http://www.gnu.org/licenses/>.
//==========================================================================================

#ifndef OPERATION_H
#define OPERATION_H

#include "data_utility.h"
#include <cmath>
#include <vector>

using namespace std;

// check zero for floating point
int isZero(double x);

// vector operations
float rand_f( float min_v, float max_v);
DIST_TYPE calc_dist( point_t* point_v1, point_t* point_v2);
DIST_TYPE calc_len(point_t* point_v);
point_t* copy(point_t * point_v2);
double dot_prod(point_t* point_v1, point_t* point_v2);
double dot_prod(point_t* point_v1, double* v);
point_t* sub(point_t* point_v1, point_t* point_v2);
point_t* add(point_t* point_v1, point_t* point_v2);
point_t* scale(double c, point_t* point_v);

// violation test for basic computation
bool isViolated(point_t* normal_q, point_t* normal_p, point_t* e);

point_t* maxPoint(point_set_t* p, double *v);

// operations for basic computation
vector<double> gaussNtimesD(vector< vector<double> > A);
point_t* projectPointsOntoAffineSpace(point_set_t* space, point_t* p);

/*
*	build the input for catersian product (in the form of vector of vector of double)
*  t is the number of hyperplanes in each family that are used to divide the facet of hypercube (t >= 0)
*  e.g. when dim = 3, t = 0, means no division and each facet has 1 hypercube
*		when dim = 3, t = 1, means each 2-d facet is divided by 2 hyperplan, one for each dimension, resulting in 4 hypercubes on each facet
*/
Vvi build_input(int t, int dim);

/*
*  codes adapted from stack over flow.
*  use recursion to compue the catersian product in the format of vector of vector of double.
*/
void cart_product(
	Vvi& rvvi,  // final result
	Vi&  rvi,   // current result
	Vvi::const_iterator me, // current input
	Vvi::const_iterator end); // final input;

// read points from the input files
point_set_t* read_points(char* input);

// compute the set of skyline points
point_set_t* skyline_point(point_set_t *p);

#endif

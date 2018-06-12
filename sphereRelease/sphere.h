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
#ifndef SPHERE_H
#define SPHERE_H

#include "data_utility.h"
#include "search.h"
#include "operation.h"

#include "lp.h"

// The complete Sphere algorithm
point_set_t* sphereWSImpLP(point_set_t* point_set, int k);

// The ImpGreedy algorithm with only Step 4 of Sphere for comparison
point_set_t* ImpGreedy(int K, point_set_t *p);

#endif

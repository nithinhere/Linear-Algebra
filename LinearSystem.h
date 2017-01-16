/*
 * LinearSystem.h
 *
 *  Created on: 19-Nov-2016
 *      Author: Nithin
 */

#ifndef LINEARSYSTEM_H_
#define LINEARSYSTEM_H_
#include "Vector.h"
#include "Matrix.h"
#include <cmath>
#include <iostream>
#include <cassert>

class LinearSystem
{
private:
   int mSize; // size of linear system
   Matrix* mpA;  // matrix for linear system
   Vector* mpb;  // vector for linear system

   // Only allow constructor that specifies matrix and
   // vector to be used.  Copy constructor is private.
   LinearSystem(const LinearSystem& otherLinearSystem){};
public:
   LinearSystem(const Matrix& A, const Vector& b);

   // destructor frees memory allocated
   ~LinearSystem();

   // Method for solving system
   virtual Vector Solve();
};





#endif /* LINEARSYSTEM_H_ */

/*
 * Vector.h
 *
 *  Created on: 19-Nov-2016
 *      Author: Nithin
 */

#ifndef VECTOR_H_
#define VECTOR_H_
#include <cmath>
#include <iostream>
#include <cassert>

class Vector
{
private:
   double* mData; // data stored in vector
   int mSize; // size of vector
public:
   Vector(const Vector& otherVector);
   Vector(int size);
   Vector(int size, double *v);
   ~Vector();
   int GetSize() const;
   double& operator[](int i); // zero-based indexing
   // read-only zero-based indexing
   double Read(int i) const;
   double& operator()(int i); // one-based indexing
   // assignment
   Vector& operator=(const Vector& otherVector);
   Vector operator+() const; // unary +
   Vector operator-() const; // unary -
   Vector operator+(const Vector& v1) const; // binary +
   Vector operator-(const Vector& v1) const; // binary -
   // scalar multiplication
   Vector operator*(double a) const;
   void Print() const;
   void SetValue(double val, int i);
};



#endif /* VECTOR_H_ */

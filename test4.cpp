/*
 * test4.cpp
 *
 *  Created on: 30-Nov-2016
 *      Author: Nithin
 */

#include <iostream>
#include "Matrix.h"
#include "LinearSystem.h"
#include "Vector.h"
using namespace std;

int main()
{



Vector v3(3);

double vec[3] = { -8.0, 0.0, 3.0};

Vector v(3, vec);
v[0]=-8.0;
v[1]=0.0;
v[2]=3.0;
cout << "first object" << endl;
v.Print();
cout<<endl;
double m1[10];

Matrix m2(3, 3, m1);
m2(1,1)=0;
m2(1,2)=2;
m2(1,3)=1;
m2(2,1)=1;
m2(2,2)=-2;
m2(2,3)=-3;
m2(3,1)=-1;
m2(3,2)=1;
m2(3,3)=2;
m2.Print();


cout << "First Matrix" << endl;


    LinearSystem L1(m2,v);
    v3=L1.Solve();

    v3.Print();

    return 0;
}


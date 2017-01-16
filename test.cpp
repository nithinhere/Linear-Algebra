/*
 * test.cpp
 *
 *  Created on: 27-Nov-2016
 *      Author: Nithin
 */
#include "Vector.h"
#include "Matrix.h"
#include "LinearSystem.h"


int main()
{
    Vector v1(5);
    double c[3];

    Vector p(3,c);
    p[0] = 8;
    p[1] = -11;
    p[2] = -3;
    p.Print();

    std::cout << "Test default constructor\nVector v1:\n";
    v1.Print();

    for (int i = 0; i < 5; ++i) {
        v1.SetValue(i, i);
    }

    std::cout << "Assign 0-4 to Vector v1:\n";
    v1.Print();

    Matrix m1(2, 4);

    std::cout << "Test default constructor\nMatrix m1:\n";
    m1.Print();

    for (int j = 0; j < 2; ++j)
    {
        for (int k = 0; k < 4; ++k)
        {
            m1.SetValue(j + k, j, k);
        }
    }

    std::cout << "Test assignment via SetValue method\nMatrix m1:\n";
    m1.Print();
    double d[10];
    Matrix A(3, 3, d);

    A(1, 1) = 1;
    A(1, 2) = -1;
    A(1, 3) = 2;
    A(2, 1) = 0;
    A(2, 2) = 0;
    A(2, 3) = -1;
    A(3, 1) = 0;
    A(3, 2) = 2;
    A(3, 3) = -1;
    std::cout << " Without using set value method ->\n";
    std::cout << " Matrix A  :\n";
    A.Print();
    double a[3];
    Vector b(3,a);

    b[0] = 8;
    b[1] = -25;
    b[2] = -2;

    std::cout << "Vector b:\n";
    b.Print();

    LinearSystem ls1(A, b);

    Vector solution(3);

    solution = ls1.Solve();

    std::cout << "Solution:\n";
    solution.Print();

    return 0;
}





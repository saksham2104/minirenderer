#include "matrice.h"

#include <stdexcept>

Matrice& Matrice::add(const Matrice& a) {
    if (n != a.n) throw std::invalid_argument("Matrices must have the same size");

    for (size_t row = 0; row < n; row++) {
        for (size_t col = 0; col < n; col++) {
            mat[row][col] += a.mat[row][col];
        }
    }

    return *this;
}

Matrice Matrice::subtract(const Matrice& a , const Matrice& b)  {
    if (b.n != a.n) throw std::invalid_argument("Matrices must have the same size");
    Matrice result(a.n);

    for (size_t row = 0; row < n; row++) {
        for (size_t col = 0; col < n; col++) {
            result.mat[row][col] = a.mat[row][col] - b.mat[row][col];
        }
    }

    return result;
}

Matrice& Matrice::subtract(const Matrice& a)  {
    if (n != a.n) throw std::invalid_argument("Matrices must have the same size");

    for (size_t row = 0; row < n; row++) {
        for (size_t col = 0; col < n; col++) {
            mat[row][col] -= a.mat[row][col];
        }
    }

    return *this;
}

Matrice& Matrice:: transpose()const {
//transpose logic for n * n 
 
  

};

Matrice& Matrice:: adjoint()const {
    //adjoint logic for n * n 

};


Matrice Matrice :: inverse() const {
    // inverse n*n

    // adj(n) / mod(n)

}

double Matrice :: det() const {
    //determinant for n * n

    double ans = 0;

    
}



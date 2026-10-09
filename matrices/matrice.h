#include <cmath>
#include <cstddef>
#include <vector>


struct Matrice{
    // square matrice
    size_t n; /// n * n matrice
    std::vector<std::vector<double>> mat;

    explicit Matrice(size_t size) : n(size), mat(size, std::vector<double>(size,0.0)) {}

    Matrice &add(const Matrice& a);

    Matrice subtract(const Matrice&a,const Matrice &b);

    Matrice &subtract(const Matrice&a);

    Matrice &transpose() const;

    Matrice &adjoint() const;

    Matrice inverse()const{}

    Matrice multiply()const{}


    double det()const{}

    
};

#pragma once
#include "iostream"

class Vector{
public:
    Vector();
    explicit Vector(int size);
    ~Vector();
    unsigned GetSize() const;
    void SetSize(int size);
    double At(int idx) const;
    void PushBack(double nbr);

    double& operator[] (unsigned idx) const;
    bool operator==(const Vector& rhs) const;
    bool operator!=(const Vector& rhs) const;
    bool operator<=(const Vector& rhs) const;
    bool operator<(const Vector& rhs) const;
    bool operator>=(const Vector& rhs) const;
    bool operator>(const Vector& rhs) const;
    Vector operator+(const Vector& rhs) const;  // Returns a new Vector with the values on the same index added together.
    Vector operator-(const Vector& rhs) const;  // Returns a new Vector with the values on the same index subtracted from each other.
    Vector operator*(const Vector& rhs) const;  // Returns a new Vector with the values on the same index multiplied.

private:
    unsigned m_size;
    double* m_elements;
};

std::ostream& operator<<(std::ostream& os, const Vector& v);
std::istream& operator>>(std::istream& is, Vector& v);
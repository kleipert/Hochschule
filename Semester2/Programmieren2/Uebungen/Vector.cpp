#include "Vector.h"

Vector::Vector() {
    m_size = 0;
}

Vector::Vector(int size) {
    m_size = size;
    m_elements = new double[m_size];
}

Vector::~Vector() {
    delete[] m_elements;
}

unsigned Vector::GetSize() const{
    return m_size;
}

void Vector::SetSize(int size) {
    double* newArray = new double[size];
    for (int i = 0; i < size; ++i)
        newArray[i] = m_elements[i];

    delete[] m_elements;
    m_elements = newArray;
}

double Vector::At(int idx) const{
    // Pro: wont crash
    // Con: not save, ambiguously.
    return idx <= (m_size-1) ? m_elements[idx] : m_elements[0];
}

void Vector::PushBack(double nbr) {
    SetSize(m_size+1);
    m_elements[m_size-1] = nbr;
}

double& Vector::operator[] (unsigned idx) const {
    return m_elements[idx];
}

bool Vector::operator==(const Vector &rhs) const {
    if(rhs.GetSize() != GetSize())
        return false;

    for (unsigned i = 0; i < rhs.GetSize(); ++i)
        if(m_elements[i] != rhs[i])
            return false;

    return true;
}

bool Vector::operator!=(const Vector &rhs) const {
    return !(*this == rhs);
}

bool Vector::operator<(const Vector &rhs) const {
    return GetSize() < rhs.GetSize();
}

bool Vector::operator<=(const Vector &rhs) const {
    return GetSize() <= rhs.GetSize();
}

bool Vector::operator>(const Vector &rhs) const {
    return GetSize() > rhs.GetSize();
}

bool Vector::operator>=(const Vector &rhs) const {
    return GetSize() >= rhs.GetSize();
}

Vector Vector::operator+(const Vector &rhs) const {
    Vector resVec = Vector(std::max(GetSize(), rhs.GetSize()));
    for (int i = 0; i < GetSize() - 1; ++i)
        resVec[i] = m_elements[i];

    for (int i = 0; i < rhs.GetSize() - 1; ++i)
        resVec[i] += rhs.At(i);

    return resVec;
}

Vector Vector::operator-(const Vector &rhs) const {
    Vector resVec = Vector(std::max(GetSize(), rhs.GetSize()));
    for (int i = 0; i < GetSize() - 1; ++i)
        resVec[i] = m_elements[i];

    for (int i = 0; i < rhs.GetSize() - 1; ++i)
        resVec[i] -= rhs.At(i);

    return resVec;
}

Vector Vector::operator*(const Vector &rhs) const {
    Vector resVec = Vector(std::max(GetSize(), rhs.GetSize()));
    for (int i = 0; i < GetSize() - 1; ++i)
        resVec[i] = m_elements[i];

    for (int i = 0; i < rhs.GetSize() - 1; ++i)
        resVec[i] *= rhs.At(i);

    return resVec;
}

std::ostream& operator<<(std::ostream& os, Vector v) const {
    os << "(";
    for (int i = 0; i <= m_size-1; ++i)
    {
        os << m_elements[i] << ", ";
    }
    os << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Vector v) const {
    for (int i = 0; i < m_size -1; ++i)
    {
        is >> m_elements[i];
    }
    return is;
}



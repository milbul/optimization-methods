#pragma once

#include <vector>
#include "Matrix.h"
#include "DenseMatrix.h"


class SymmetricProfileMatrix : public Matrix {
protected:
    std::vector<double> diagonal;
    std::vector<double> rowLowerProfile;
    std::vector<double> columnUpperProfile;
    std::vector<size_t> index;

public:
    explicit SymmetricProfileMatrix(const Matrix& matrix);

    double get(size_t x, size_t y) const override;

    void set(size_t x, size_t y, double value) override;

    size_t size() const override;
};
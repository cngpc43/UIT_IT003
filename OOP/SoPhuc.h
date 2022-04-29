#include <iostream>
#pragma once
class SoPhuc
{

private:
    float phanThuc;
    float phanAo;

public:
    void KhoiTaoSophuc(float phanThuc, float phanAo);
    SoPhuc operator+(SoPhuc soPhuc2);
    SoPhuc operator-(SoPhuc soPhuc2);
    SoPhuc operator*(SoPhuc soPhuc2);
    SoPhuc operator/(SoPhuc soPhuc2);
    friend std::istream &operator>>(std::istream &in, SoPhuc &a);
    friend std::ostream &operator<<(std::ostream &out, SoPhuc a);
    float TriTuyetDoi();
};
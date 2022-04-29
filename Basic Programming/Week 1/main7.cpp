#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    double bankinh;
    std::cin >> bankinh;

    double pi=3.141592653589793;
    std::cout <<std::setprecision(15) << 4*pi*bankinh*bankinh << std::endl;
    std::cout <<std::setprecision(15) << 4*pi*bankinh*bankinh*bankinh/3 << std::endl;

    return 0;
}
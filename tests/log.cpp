/*################################################################################
  ##
  ##   Copyright (C) 2016-2017 Keith O'Hara
  ##
  ##   This file is part of the GCE-Math C++ library.
  ##
  ##   GCE-Math is free software: you can redistribute it and/or modify
  ##   it under the terms of the GNU General Public License as published by
  ##   the Free Software Foundation, either version 2 of the License, or
  ##   (at your option) any later version.
  ##
  ##   GCE-Math is distributed in the hope that it will be useful,
  ##   but WITHOUT ANY WARRANTY; without even the implied warranty of
  ##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  ##   GNU General Public License for more details.
  ##
  ################################################################################*/

// g++-mp-7 -O3 -Wall -std=c++11 -I./../include log.cpp -o log.test -framework Accelerate
// g++-mp-7 -O3 -Wall -std=c++14 -fconstexpr-depth=20 -fconstexpr-steps=1271242 -I./../include log.cpp -o log.test -framework Accelerate

#include <cmath>
#include <iostream>
#include <iomanip>
#include "gcem.hpp"

int main()
{
    constexpr long double x1 = 0.5;
    long double x2 = x1;

    constexpr long double x3 = 1.5;
    long double x4 = x3;

    constexpr long double x5 = 0.00199900000000000208L;
    long double x6 = x5;

    constexpr long double x7 = 41.5;
    long double x8 = x7;

    std::cout << "\n*** begin log test ***\n" << std::endl;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_log(" << x1 <<") = " << std::setprecision(18) << gcem::log(x1) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_log(" << x2 <<")  = " << std::setprecision(18) << std::log(x2)  << std::endl;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_log(" << x3 <<") = " << std::setprecision(18) << gcem::log(x3) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_log(" << x4 <<")  = " << std::setprecision(18) << std::log(x4)  << std::endl;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_log(" << x5 <<") = " << std::setprecision(18) << gcem::log(x5) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_log(" << x6 <<")  = " << std::setprecision(18) << std::log(x6)  << std::endl;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "gcem_log(" << x7 <<") = " << std::setprecision(18) << gcem::log(x7) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "std_log(" << x8 <<")  = " << std::setprecision(18) << std::log(x8)  << std::endl;

    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "\ngcem_log(" << 2 <<")  = " << std::setprecision(20) << gcem::log(2.0L) << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "log(" << 2 <<")       = " << std::setprecision(20) << GCEM_LOG_2 << std::endl;

    std::cout << "\n*** end log test ***\n" << std::endl;

    return 0;
}

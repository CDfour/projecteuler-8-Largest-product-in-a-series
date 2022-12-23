#include "largest_product_in_a_series.h"

#include <cstring>
#include <stdexcept>

// count = 13, answer = 23514624000
long long largest_product_in_a_series(const char* digit, int count) {

    if ((int)strlen(digit) < count) {
        throw std::invalid_argument("wrong digit");
    }

    long long result = 0;

    for (int i = 0; i < (int)strlen(digit) - count; ++i) {

        long long value = 1;

        for (int j = i; j < i + count; ++j) {

            value *= (long long)(digit[j] - 48);
        }

        if (value > result) {
            result = value;
        }
    }

    return result;
}
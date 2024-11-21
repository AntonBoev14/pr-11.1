// min_max_functions.h

#ifndef MIN_MAX_FUNCTIONS_H
#define MIN_MAX_FUNCTIONS_H

template <typename T>
T my_min(T a, T b) {
    return (a < b) ? a : b;
}

template <typename T>
T my_max(T a, T b) {
    return (a > b) ? a : b;
}

#endif 


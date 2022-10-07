#include "main.h"
#include "globals.hpp"

// functions to get angle given current position and target position
long double dot(long double a, long double b, long double c, long double d){
    return (long double)(acos(((a*c) + (b*d))/ (sqrt(a*a+b*b)* sqrt(c*c+d*d))));
    // get angle between vectors
}
int sgn(long double x){
    if (x >= 0) return 1;
    // give angle as x>=0 so if its 0 degrees then it will return that its anti clockwise and print 0 instead of 2pi
    return -1;
}
// b 0 a b
// d 0 c d
int cross(long double a, long double b, long double c, long double d){
    return sgn(a*d- c*b);
    // see if its clockwise or counterclockwise orientation
}


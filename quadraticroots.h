#ifndef QUADRATICROOTS_H
#define QUADRATICROOTS_H

typedef struct{
long double x1;
long double x2;
int norealroots;
}QuadraticRootsResult;

QuadraticRootsResult findroots(const long double a, const long double b, const long double c)
#endif
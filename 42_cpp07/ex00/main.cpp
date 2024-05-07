#include <iostream>

#include "whatever.hpp"

enum Type { A, B };

int main(void) {
  std::cout << "--- <int> ---" << std::endl;
  int intA = 2;
  int intB = 3;
  std::cout << "intA = " << intA << ", intB = " << intB << std::endl;
  swap(intA, intB);
  std::cout << "intA = " << intA << ", intB = " << intB << std::endl;
  std::cout << "min( intA, intB ) = " << ::min(intA, intB) << std::endl;
  std::cout << "max( intA, intB ) = " << ::max(intA, intB) << std::endl;
  std::cout << "--- <std::string> ---" << std::endl;
  std::string stringA = "chaine1";
  std::string stringB = "chaine2";
  std::cout << "stringA = " << stringA << ", stringB = " << stringB
            << std::endl;
  swap(stringA, stringB);
  std::cout << "stringA = " << stringA << ", stringB = " << stringB
            << std::endl;
  std::cout << "min( stringA, stringB ) = " << ::min(stringA, stringB)
            << std::endl;
  std::cout << "max( stringA, stringB ) = " << ::max(stringA, stringB)
            << std::endl;
  std::cout << "--- <float> ---" << std::endl;
  float floatA = 1.2;
  float floatB = 1.4;
  std::cout << "floatA = " << floatA << ", floatB = " << floatB << std::endl;
  swap(floatA, floatB);
  std::cout << "floatA = " << floatA << ", floatB = " << floatB << std::endl;
  std::cout << "min( floatA, floatB ) = " << ::min(floatA, floatB) << std::endl;
  std::cout << "max( floatA, floatB ) = " << ::max(floatA, floatB) << std::endl;
  std::cout << "--- <Type> ---" << std::endl;
  Type typeA = A;
  Type typeB = B;
  std::cout << "typeA = " << typeA << ", typeB = " << typeB << std::endl;
  swap(typeA, typeB);
  std::cout << "typeA = " << typeA << ", typeB = " << typeB << std::endl;
  std::cout << "min( typeA, typeB ) = " << ::min(typeA, typeB) << std::endl;
  std::cout << "max( typeA, typeB ) = " << ::max(typeA, typeB) << std::endl;
  std::cout << "--- <Pointer> ---" << std::endl;
  const char* pointerA = "a";
  const char* pointerB = "b";
  std::cout << "pointerA = " << pointerA << ", pointerB = " << pointerB
            << std::endl;
  swap(pointerA, pointerB);
  std::cout << "pointerA = " << pointerA << ", pointerB = " << pointerB
            << std::endl;
  std::cout << "min( pointerA, pointerB ) = " << ::min(pointerA, pointerB)
            << std::endl;
  std::cout << "max( pointerA, pointerB ) = " << ::max(pointerA, pointerB)
            << std::endl;
  return 0;
}
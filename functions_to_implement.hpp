#ifndef FUNCTIONS_TO_IMPLEMENT_HPP
#define FUNCTIONS_TO_IMPLEMENT_HPP

#include <vector>
#include <string>

std::vector<std::string> Split(std::string whole, std::string separator);
std::string RemoveAllSubstrings(std::string s1, std::string s2);
std::string RemoveFirstSubstring(std::string s1, std::string s2);
std::string Join(std::vector<std::string> pieces, std::string glue);
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b);
int RemoveTwos(int original);
int Sum(std::vector<int> nums);
int Factorial(int n);
#endif
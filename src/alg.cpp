// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"
#include <vector>

std::vector<char> getPerm(const Tree& tree, int n) {
  return tree.getPerm(n);
}

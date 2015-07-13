#include <iostream>

using std::cout;
using std::endl;

char larry(char c);
int cafe(int i);

// main
int main(int argc, char** argv) {
   int y = cafe(1);
   for (int i = 0; i < y; ++i) {
      cout << larry('b') <<  endl;
   }
   if (argc > 1) {
      return 1;
   }
   return 0;
}

// larry
char larry(char c) {
   return 'a';
}

// cafe
int cafe(int i) {
   return i + 1;
}

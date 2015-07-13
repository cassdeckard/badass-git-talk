#include <iostream>

#define AWESOME_PHRASE "Hello World!"
#define INCR(x) x+1

using std::cout;
using std::endl;

char larry(char c);
int cafe(int i);

// main
int main(int argc, char** argv) {
   for (int i = 0; i < INCR(argc); ++i) {
      cout << AWESOME_PHRASE <<  endl;
   }
   return argc;
}

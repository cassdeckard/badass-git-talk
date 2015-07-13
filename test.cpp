#include <iostream>

#define LARRY_RETURN_CHAR 'a'
#define INCR(x) x+1

using std::cout;
using std::endl;

char larry(char c);
int cafe(int i);

// main
int main(int argc, char** argv) {
   for (int i = 0; i < INCR(1); ++i) {
      cout << LARRY_RETURN_CHAR <<  endl;
   }
   if (argc > 1) {
      return 1;
   }
   return 0;
}

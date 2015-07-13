#include <iostream>

#define AWESOME_PHRASE "Hello World!"

using std::cout;
using std::endl;

char larry(char c);
int cafe(int i);

// main
int main(int argc, char** argv) {
   cout << "Welcome to the wonderful Hello World program." << endl;

   for (int i = 0; i < argc; ++i) {
      cout << AWESOME_PHRASE <<  endl;
   }

   return argc - 1;
}

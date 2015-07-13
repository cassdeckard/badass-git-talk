#include <iostream>

#define AWESOME_PHRASE "Hello World!"
#define INCR(x) x+1

using std::cout;
using std::endl;

char larry(char c);
int cafe(int i);
void print_welcome_message();

// main
int main(int argc, char** argv) {
   print_welcome_message();
   for (int i = 0; i < INCR(argc); ++i) {
      cout << AWESOME_PHRASE <<  endl;
   }
   return argc;
}

void print_welcome_message() {
   cout << "Welcome to the wonderful Hello World program." << endl;
}

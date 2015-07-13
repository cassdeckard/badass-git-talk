char larry(char c);

// main
int main(int argc, char** argv) {
   char x = larry('b');
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

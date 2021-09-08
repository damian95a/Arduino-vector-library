#include "simplevector.h"

void setup() {
  // make empy error
  SimpleVector<int> vec = SimpleVector<int>();

  // add numer next to each other
  for(int i=0; i<10; ++i){
    vec.push_back(i);
  }

  Serial.begin(9600);

  // print all elementr in vector
  for(auto p = vec.begin(); p<vec.end(); ++p){
    Serial.println(*p);
  }

  Serial.println();
  Serial.println(vec[3]); // print a lingle element
  Serial.println();

  // remove the last element until it is empty
  while(vec.size() != 0){
    Serial.println(vec.pop_back());
  }


  // create vector of 2 uninitialized values
  SimpleVector<long> vec2 = SimpleVector<long>(2);

  // init the vector
  vec2[0] = 100;
  vec2[1] = 97531;

  long ret=0; // variable to check if empty
  Serial.println(); // print empty line
  // remove nad print until empty
  while(ret != 32202){
    // function return 32202 ERROR empty vector
    Serial.println(ret = vec2.pop_back());
  }

  // it again return error
  // but its value is manaully set
  Serial.println(vec2.pop_back(-1));
}

void loop() {}

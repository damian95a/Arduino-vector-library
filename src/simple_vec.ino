#include "simplevector.h"

void setup() {
  // make empy vector
  SimpleVector<int> vec = SimpleVector<int>();

  // add numers next to each other
  for(int i=0; i<10; ++i){
    vec.push_back(i);
  }

  Serial.begin(9600);

  Serial.println("vec");
  // print all elements in vector
  for(auto p = vec.begin(); p<vec.end(); ++p){
    Serial.println(*p);
  }

  Serial.println();
  Serial.println(vec[3]); // print a single element
  Serial.println();

  // remove the last elements until it is empty
  while(vec.size() != 0){
    Serial.println(vec.pop_back());
  }




  // create vector of 2 uninitialized values
  SimpleVector<long> vec2 = SimpleVector<long>(2);

  // init the vector
  vec2[0] = 100;
  vec2[1] = 97531;

  long ret=0; // variable to check if empty
  Serial.println("\n\nvec2");
  // remove nad print until empty
  while(ret != 32202){
    // function return 32202 ERROR empty vector
    Serial.println(ret = vec2.pop_back());
  }

  // it again return error
  // but its value is manaully set
  Serial.println(vec2.pop_back(-1));




  // create vector of 5 numbers (the same numbers)
  SimpleVector<float> vec3 = SimpleVector<float>(5, 1.2);
  // vector have already been initialized

  Serial.println("\n\nvec3");
  // print all elems
  for(int i=0; i<vec3.size(); ++i){
    Serial.println(vec3[i]);
  }

  // clear vector (it isn't necessary)
  while(!vec3.is_empty()){
    vec3.pop_back();
  }

  Serial.print("size: ");
  Serial.println(vec3.size());
  vec3.push_back(15); // look at vec4

  SimpleVector<double> vec4 = SimpleVector<double>(3, 3.14);
  // I've said it isn't necessery to remove elements
  // and it's true ;)

  // the second version of push_back()
  vec4.push_back(vec3.pop_back()); // rvalue
  Serial.println("\n\nvec4\nshould be 15");
  Serial.println(*(vec4.end()-1)); // end() is an element next to the last one
  Serial.println("Isn't it?");
}

void loop() {}

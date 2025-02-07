#include <iostream>
#include <vector>
#include <memory>
#include "animalClasses.h"

int main()
{
  // declare a vector of animal pointers here
  std::vector<std::unique_ptr<Animal>> animals;

  // put some different kinds of animal pointers (dogs, cats, budgies) in your vector
  animals.push_back(std::make_unique<Mammal>());
  animals.push_back(std::make_unique<Dog>());
  animals.push_back(std::make_unique<Cat>());
  animals.push_back(std::make_unique<Budgie>());
  animals.push_back(std::make_unique<Labrador>());
  animals.push_back(std::make_unique<Terrier>());

  // loop through all the animals in your vector and call Speak() on them in turn
  for (const auto &animal : animals)
  {
    animal->speak();
  }

  return 0;
}
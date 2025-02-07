#include "animalClasses.h"
#include <iostream>

void Mammal::speak() const
{
  std::cout << "Mammal sound" << std::endl;
}

void Birds::speak() const
{
  std::cout << "Bird sound" << std::endl;
}

void Dog::speak() const
{
  std::cout << "Dog says: Woof" << std::endl;
}

void Cat::speak() const
{
  std::cout << "Cat says: Meow" << std::endl;
}

void Budgie::speak() const
{
  std::cout << "Budgie says: Tweet" << std::endl;
}

void Labrador::speak() const
{
  std::cout << "Labrador says: Woof" << std::endl;
}

void Terrier::speak() const
{
  std::cout << "Terrier says: Yap" << std::endl;
}
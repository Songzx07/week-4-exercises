#pragma once

class Animal
{
public:
  virtual void speak() const = 0;
  virtual ~Animal() = default;
};

class Mammal : public Animal
{
public:
  void speak() const override;
};

class Birds : public Animal
{
public:
  void speak() const override;
};
class Dog : public Mammal
{
public:
  void speak() const override;
};

class Cat : public Mammal
{
public:
  void speak() const override;
};

class Budgie : public Birds
{
public:
  void speak() const override;
};

class Labrador : public Dog
{
public:
  void speak() const override;
};

class Terrier : public Dog
{
public:
  void speak() const override;
};
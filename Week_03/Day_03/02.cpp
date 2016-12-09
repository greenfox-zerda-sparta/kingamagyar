#include <iostream>
using namespace std;

struct Vector {
  double* array;
  int size;
};

Vector* vector_construct(double input[], int size);

double vector_at(Vector& v, unsigned int index);

void vector_insert(Vector& v, unsigned int index, double value);

unsigned int vector_find(Vector& v, double value);

void vector_remove(Vector& v, unsigned int index);

Vector* vector_concat(Vector& v1, Vector v2);


int main() {
  double my_array[] = {2.5, 9.8, 10.5, 11.2};
  Vector* my_vector = vector_construct(my_array, 4);
  Vector* my_vector2 = vector_construct(my_array, 4);
  cout << "Original size of my vector: " << my_vector->size << endl;

  cout << "The value at index 2: " << vector_at(*my_vector, 2) << endl;

  vector_insert(*my_vector, 1, 5.4);
  cout << "The size of the array, after inserting a value to index 1: " << my_vector->size << endl;

  cout << "The new 5.4 is at index number " << vector_find(*my_vector, 5.4) << endl;

  vector_remove(*my_vector, 1);
  cout << "Stack size after removing the 1. element: " << my_vector->size << endl;
  cout << "Index 1's value: " << vector_at(*my_vector, 1) << endl;

  Vector* my_vector3 = vector_concat(*my_vector, *my_vector2);
  cout << "Size of the new vector after concatenation: " << my_vector3->size << endl;

  delete[] my_vector->array;
  delete my_vector;
  delete[] my_vector2->array;
  delete my_vector2;
  delete[] my_vector3->array;
  delete my_vector3;

  return 0;
}

//Construct
//It should dynamically allocate the Vector instance
//It should set the size
//It should dynamically allocate the double array

Vector* vector_construct(double input[], int size) {
  Vector* new_vector = new Vector;
  new_vector->array = new double[size];
  for (int i = 0; i < size; i++) {
    new_vector->array[i] = input[i];
  }
  new_vector->size = size;
  return new_vector;
}

//At
// It should return the value inder the given index
//It should return zero if the value is out of bound

double vector_at(Vector& v, unsigned int index) {
  return (index < v.size) ? v.array[index] : 0;
}

//Insert
// It should insert the value to the given index like:
// array: {1, 2, 3, 4}
// index: 2
// value: 8
// result: {1, 2, 8, 3, 4}
// It should increment the size by one
// It should reallocate the array

void vector_insert(Vector& v, unsigned int index, double value) {
  double* new_array = new double[++v.size];
  for (int i = 0; i < v.size+1; i++) {
    if (i < index) {
      new_array[i] = v.array[i];
    } else if (i == index) {
      new_array[i] = value;
    } else {
      new_array[i] = v.array[i-1];
    }
  }
  delete v.array;
  v.array = new_array;
}

//Find
// It should return the index of the given value

unsigned int vector_find(Vector& v, double value) {
  unsigned int result = 0;
  for (int i = 0; i < v.size; i++) {
    if (v.array[i] == value) {
    	result = i;
    }
  }
  return result;
}

// Remove
// It should remove the element under the index
// It should reallocate the array

void vector_remove(Vector& v, unsigned int index) {
  double* new_array = new double[--v.size]; // This is is not a mistake, but...
  for (int i = 0; i < v.size; i++) {
    new_array[i] = i < index ? v.array[i] : v.array[i+1]; // ... here I'm thinking like an experienced C++ coder! :)
  }
  delete v.array;
  v.array = new_array;
}

// Concat
// It should return a new Vector that has all the elements of v1 and v2 like:
// v1: {1, 2}
// v2: {3, 4}
// return: {1, 2, 3, 4}
// It should have the sum size of the vectors

Vector* vector_concat(Vector& v1, Vector v2) {
  int new_size = v1.size+v2.size;
  double* new_array = new double[new_size];
  for (int i = 0; i < new_size; i++) {
    new_array[i] = i < v1.size ? v1.array[i] : v2.array[i-v1.size];
  }
  Vector* new_vector = vector_construct(new_array, new_size);
  return new_vector;
}




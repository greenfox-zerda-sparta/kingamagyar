#include <iostream>
#include <string>
#include <vector>

using namespace std;

void addVector(vector< vector<int> >& new_vec) {
  new_vec.push_back(vector<int>(5, 1));
}

int main() {
	//create a vector of vector of integers, yeah a vector that holds vectors of integers
	//the inner vectors have 5 integers, all of them 0
	//the outer vector is holding 5 vector at the beginning
	//create a function that will add a new vector of integers to the end of our outer vector

 vector< vector<int> > v(4, vector<int> (5, 0));
 addVector(v);

 for (unsigned int i = 0; i < v.size(); i++) {
   cout << "Number " << (i + 1) << " vector elements: ";
   for (unsigned int j = 0; j < ((vector<int>)v[i]).size(); j++) { //I casted the vector, because it didn't want to accept just v[i].size();
     cout << v[i][j] << " ";
   }
   cout << endl;
 }

 return 0;
}

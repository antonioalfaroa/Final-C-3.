// arrover3.cpp
// creates safe array (index values are checked before access)
// uses overloaded [] operator for both put and get
#include <iostream>

using namespace std;

#include <cstdlib> //for exit()

const int LIMIT = 100; //array size
////////////////////////////////////////////////////////////////

template <typename Newarray>

class safearay{
  private:
    Newarray arr[LIMIT];
  public:
    Newarray& operator [](int n){
      if( n< 0 || n>=LIMIT )
      { cout << "\nIndex out of bounds"; exit(1); }
      return arr[n];
    }
};
////////////////////////////////////////////////////////////////
int main(){

  
  safearay<char>safe_Array1=safearay<char>();
  safearay<int>safe_Array2=safearay<int>();
  
  for(int j=0; j<LIMIT; j++) //insert elements
    safe_Array1[j] = j*10; //*left* side of equal sign

  cout<<endl;

  
    for(int j=0; j<LIMIT; j++) //insert elements
    safe_Array2[j] = j*2; //*left* side of equal sign

  cout<<endl;
  
  for(int j=0; j<LIMIT; j++) //display elements
  {
    int temp = safe_Array1[j]; //*right* side of equal sign
    cout << "Element " << j << " is " << temp << endl;
  }

  cout<<endl;

   for(int j=0; j<LIMIT; j++) //display elements
  {
    int temp = safe_Array2[j]; //*right* side of equal sign
    cout << "Element " << j << " is " << temp << endl;
  }
  return 0;
}


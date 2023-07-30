#include <iostream>
using namespace std;

int main() {
  
// problem why print string value one times more than counting value ;

// problem solve because one/ starting  counting value print after string value   
  
  int i ;
  int j ;
  cout << "Enter a vlue of i :" << endl;
  cin >> i;
  cout << "enter a value of j ;" << endl;
  cin >> j;
  for ( int k = i; i < j ; i= i+1 ){ 
    cout << i << " :: Manvendera Pathak " << endl;
  }

// prime no
  
  for (int i = 0 ; i < 10 ; i = i + 2){
    cout << i << endl;
  }

  // odd no 
  
  for (int i = 1; i < 10 ; i = i + 2){
    cout << i << endl; 
  }

  // reverse no 

  for (int i = 10; i > 0; i = i - 1){
    cout << i << endl;
  }

  // natural no

  for (int i = 0; i < 100 + 1; i = i + 1 ){
    cout << i << endl;
  }

  // multiple two numbers

for  ( int i = 0; i < 5;  i= i+1){
  cout << 2*i << endl;
  
}
  
// odd no 
  
  for (int i = 1; i <=5; i = i+2){
    cout << i << endl;
  }

  for (int i = 1; i <=10; i = i*2 ){
    cout << i << endl;
  }

  for (int i = 100; i >= 0; i = i-1){
    cout << i << endl;
  }

    for (int i = 100; i > 0; i = i/2){
    cout << i << endl;
  }

for (int i = 5; (i>=0 && i<=10); i=i+1)
  {
    cout << i << endl;
  }
  
  int i = 0;
  for (; ;){
    if (i <= 10){
      cout << i << endl;
      i= i+1;
    }
  }
  
  

}
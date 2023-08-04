#include <iostream>
using namespace std;

int main() {
for (int i =0; i<5; i = i+1 ){
  cout << i << endl;
}
 
  for (int row = 0; row <=2; row = row+1){
    for(int col = 0; col <=4; col = col+1 ){
      cout << " * ";
    }
    cout << endl;
  }

output 
* * * * *
* * * * *
* * * * *

  //  pattern
  //  Outer loop 
for (int row = 0; row <= 5; row = row +1){
  //  Inner Loop
  for (int col = 0; col <=3; col= col +1){
    // print *
    cout << " * " ;
  }
  //  Print Next line
   cout << endl;
}


  
// Solid rectangle 
  // Outer loop
  for (int row = 0; row <4; row = row+1){
    // Inner Loop
    for (int col = 0; col <4;  col =col+1){
      // print * 
      cout << " * " ; 
    }
    //  endl use for next line
    cout << endl;
  }
  
  
// Solid rectangle 
  // Outer loop
  for (int row = 0; row <4; row += 1){
    // Inner Loop
    for (int col = 0; col <4;  col +=1){
      // print * 
      cout << " * " ; 
    }
    //  endl use for next line
    cout << endl;
  }
  
  user defined // user input Solid rectangle 
  Outer loop
  int n;
  cout << " Enter a vlaue of n :: ";
  cin >> n;
  for (int row = 0; row <n; row += 1){
    // Inner Loop
    for (int col = 0; col <n;  col +=1){
      // print * 
      cout << " * " ; 
    }
    //  endl use for next line
    cout << endl;
  }

  hollow Patern
  Outer loop
  for (int row = 0; row<3; row +=1){
    
    if(row == 0 || row == 2){
      for (int col =0; col<5; col +=1){
        cout<< "* ";
      }
        }
      else {
      cout << "* ";
      for(int i=0; i<3; i +=1){
        cout << "  ";
    
      }
        cout << "* ";
    }
     cout << endl;
  }

  
  for(int row = 0; row<3; row +=1){
    if (row == 0  || row == 2){
      for (int col = 0; col<5; col +=1 ){
        cout << "* " ;
      }
    }
    else
    {
      cout << "* ";
      for (int i =0; i <3; i +=1){
        cout << "  ";
      }
      cout << "* ";
    }
    cout << endl;
    
  }
  

  user input or user defined hollow square
  outer loop
int rowCount, colCount;
  cout << "Enter a value Of rowCount ::";
  cin >> rowCount;
  cout << "Enter a value Of colCount ::";
  cin >> colCount;
  
  for (int row = 0; row <rowCount; row += 1){
    if (row == 0 || row == rowCount-1){
      for (int col = 0; col<colCount; col +=1){
        cout << "+ ";
      }
    }
    else
      {
        cout << "+ ";
        for (int i = 0; i<colCount-2; i += 1){
          cout << "  ";
        }
        cout << "+ ";
      }
    cout << endl ;
  }

  int rowNum,colNum;
  cout << "Enter a value of rowNum ::";
  cin >> rowNum;
  // cout << "Enter a value of colNum ::";
  // cin >> colNum;

  // outer loop
  for(int row = 0; row < rowNum; row +=1)
  {
    for(int col = 0; col < row+1; col +=1){
      cout << " + ";
    }
    cout << endl;
  }


  pattern
  for (int row = 1; row < 5; row = row+1){
    for (int col =0; col <row+1; col = col+1){
      cout << col+1;
    }
    cout << endl;
  }

  for (int i =0; i<6; i+=1){
    for(int j=0; j<i+1 ; j+=1){
      cout << j+1;
    }
    cout << endl;
  }

  
for (int row = 0; row <5; row =row+1){
  for(int col = 0; col< 5-row; col +=1){
    cout << col+1;
  }
  cout << endl;
}

  
}
  
#include <iostream>
using namespace std;
int main() {

   int n ;
  cout << "Enter the value of n::" << endl;
  cin >> n ;
      cout << endl;
for (int row =0; row <n; row +=1){
  for (int col =0; col <row+1; col +=1 ){
    int ans = col+1;
    char ch = ans + 'A' -1;
    cout << ch;
  }
  for (int col =row; col >=1; col -=1){
    int ans = col;
    char ch = ans  + 'A' -1;
    cout << ch;
  }
  cout << endl;
}
  for (int row =0; row < n; row +=1){
    for (int col =0; col < row+1 ; col +=1){
      cout << row+1 ;
      if (col != row){
        cout << "*";
      }
    }
    cout << endl;
      }
    for (int row =0;row <n; row +=1){
      for(int col=0; col<n-row; col +=1){
        cout << n-row;
        if (col != n-row-1 ){
          cout << "*";
        }
      }
          cout << endl;
    }

  flipped solid diamond
  // outer loop
  for (int row =0 ; row < n; row =row +1){
    // inner loop for *
     for (int col =0; col <n-row ; col +=1){
       cout << "*";
     }
    //  inner loop for space
    for (int col =0; col <2*row+1; col = col +1) {
      cout << " ";
    }
     for (int col =0; col <n-row ; col +=1){
       cout << "*";
     }
    
      cout << endl;
  }
  // outer loop
  for (int row=0; row <n; row =row+1){
    for (int col =0; col <row+1; col +=1){
      cout << "*";
    }
    // space
    for (int col = 0; col <2*n-2*row-1 ; col +=1){
      cout << " ";
    }
    // inner loop for star
      for (int col =0; col <row+1; col +=1){
      cout << "*";
    }
       cout << endl;
  }

  //  outer loop 
  for (int row = 0; row < n; row = row+1){
    // innner loop for space
    for (int col =0; col<n-row-1; col = col+1){
      cout << " ";
    }
    for (int col =0; col<2*row+1; col =col+1){
       if (col == 0){
         cout << "*";
         
       }
      else if (col == 2*row){
        cout << "*";
      }
      else {
        cout << " ";
      }
    }
    cout << endl;
  }
  //  outer loop
  for(int row =0; row<n; row =row+1){
    for (int col=0 ; col<row ; col = col +1){
      cout << " ";
    }
    // star
    for(int col =0; col<2*n-2*row-1; col =col+1){
      if (col == 0 || col ==2*n -2*row -2){
        cout << "*";
      }
      else{
        cout << " ";
      }
    }
    cout << endl;
    
  }
  
 int n ;
  cout << "Enter a Value of n ::" << endl;
  cin >> n;
  //Outer loop
  for (int row =0; row<n; row +=1){
    // innner loop for spacce  n-[row+1] = n-row-1
    for (int col =0; col<n-row-1; col =col+1){
      cout << " ";
    }
    //  inner loop for stars 
    for (int col = 0; col<row+1; col =col+1){
      cout <<"* ";
    }
    cout << endl ;
    
  }

    
 int n ;
  cout << "Enter a Value of n ::" << endl;
  cin >> n;
  Outer loop
  for (int row =0; row<n; row +=1){

  
    // innner loop for spacce  n-[row+1] = n-row-1
    for (int col =0; col<row; col =col+1){
      cout << " ";
    }
        //  inner loop for stars 
    for (int col = 0; col<n-row; col =col+1){
      cout <<"* ";
    }
  
    cout << endl ;
    
    
  }

   int n ;
  cout << "Enter a Value of n ::" << endl;
  cin >> n;
  //Outer loop
  for (int row =0; row<n; row +=1){
    // innner loop for spacce  n-[row+1] = n-row-1
    for (int col =0; col<n-row-1; col =col+1){
      cout << " ";
    }
    //  inner loop for stars 
    for (int col = 0; col<row+1; col =col+1){
      cout <<"* ";
    }
    cout << endl ;
    
  }
  for (int row =0; row<n; row +=1){

  
    // innner loop for spacce  n-[row+1] = n-row-1
    for (int col =0; col<row; col =col+1){
      cout << " ";
    }
        //  inner loop for stars 
    for (int col = 0; col<n-row; col =col+1){
      cout <<"* ";
    }
  
    cout << endl ;
    
    
  }

}
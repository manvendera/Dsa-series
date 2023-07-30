#include <iostream>
using namespace std;

int main() {
  int score;
  cout << "enter a value of score: " << endl;
  cin >> score;
if(score < 300){
  cout << "india win";
}
  else{
    cout << "pakistan win";
  }
  

  int age;
  cout << "enter your age :" << endl;
  cin >> age;
  if (age >= 18){
    cout << " You can be able to serve vote" << endl;
      
  }
  else{
    cout << " you can't be able to serve vote" << endl;
  }
  

  int marks;
  cout << "Enter Your Marks :" << endl;
  cin >> marks;
  if(marks >= 90){
    cout << "You Got A Grade" << endl;
  }
  else if (marks >= 60){
    cout << "You Got B Grade" << endl;
  }
  else if (marks >= 40){
    cout << "You Got C Grade" << endl;
  }
  else if (marks <= 30){
    cout << "You Got D Grade || Fail" << endl;
  }
  

// nested if else
  int  marks;
  cout << "Enter a value of marks :" << endl;
  cin >> marks ;
  if (marks >= 90){
    cout << "You Got A grade :" << endl ;
    
  }else {
    if (marks >=80){
      cout << "You Got B Grade :" << endl;
    }else {
      if (marks >= 60){
        cout << "You Got C grade :" << endl;
      }else {
        if (marks <= 30){
          cout << "You Got D Grade || fail :" << endl;
        }
      }
    }
  }


  int bronum ;
  cout << " enter A value of bronum  :" << endl;
  cin >> bronum;
  if (bronum == 0){
    cout << "bat ban jayegi ";
  }
  else
  {
    cout << "bat ni banegi" ;  
  }
  
}
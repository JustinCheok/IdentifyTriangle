//
//  main.cpp
//  HW1
//
//  Created by Justin Cheok on 9/2/20.
//  Copyright © 2020 Justin Cheok. All rights reserved.
//

#include <iostream>

using namespace std;
//Declaration
void triangle (int a, int b, int c);
void sort (int *num1, int *num2);

int main(int argc, char *argv[]){
    int a = 0, b = 0, c = 0;
    char choice;
    bool run = true;
    
    while(run){
        
   if(argc==1){
       cout<<"Enter 3 Sides of the triangle :\n";
       cout <<"a: ";
       cin>>a;
       cout <<"b: ";
       cin>>b;
       cout <<"c: ";
       cin>>c;
   }
    //Checks to see arguments. Error if more or less than 3
   else if( argc<=2 || argc >4 ){
       cerr<<"Invalid Argument Count "<< argc - 1;
       cerr<<"\nEnter 3 Values only" << endl;
       return 1;
   }
    if(argc==4){
        a=atoi(argv[1]);
        b=atoi(argv[2]);
        c=atoi(argv[3]);
    }
       if(a > b){
           sort(&a, &b);
       }
       if(a > c){
           sort(&a, &c);
       }
       if(b > c){
           sort(&b, &c);
       }
  
   triangle(a,b,c);
    
     cout << "Do you want to continue?(Y/N)" << endl;
                cin >>choice;
                if(choice == 'N' || choice == 'n'){
                    run = false;
                }
    }
return 0;
}

//Sort from smallest to biggest side
void sort(int *num1, int *num2){
    
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
//Triangle function to determine what it is
void triangle (int a, int b, int c) {
   cout<<a<<" "<<b<<" "<<c;
   //CHECK TRIANGLE OR NOT
   if(a+b<c){
       cout<<" Not a Triangle" << endl;
       return;
   }
   //Right?
   if(a*a + b*b == c*c)
       cout<<" Right";
   //What triangle
   if(a==b && a==c){
       cout<<" Equilateral Triangle" << endl;
   }
   else if(a==b || b==c || c==a){
       cout<<" Isosceles Triangle" << endl;
   }
   else if(a!=b && b!=c && c!=a){
       cout<<" Scalene Triangle" << endl;
   }
  
}




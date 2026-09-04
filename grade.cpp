#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter Marks of Maths ";
    cin>>a;
  
    int b;
    cout<<"\nenter Marks of chem ";
    cin>>b;
   
    int c;
    cout<<"\nenter Marks of phy "; 
    cin>>c;
   
    int d = (a + b + c);
    cout<<"\npercentage: "<<d*100/300;
    if (d*100/300>=90){
        cout<<"\nGrade A";
    }
    else if(d*100/300>=80){
        cout<<"\nGrade B";
    }
    else if(d*100/300>=70){
        cout<<"\nGrade C";
    }
    else if(d*100/300>=60){
        cout<<"\nGrade D";
    }
    else{
        cout<<"\nFail";
    }

return 0 ;
}



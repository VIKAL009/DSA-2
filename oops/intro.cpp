#include<bits/stdc++.h>
using namespace std;
// class student{
//     public:
//     string name;
//     int age;
//     bool gender;


//     student(){
//         cout<<"default constructor"<<endl;                 //default constructor
//     }
//     student(string s){
//         cout<<"parameterised constructor"<<endl;
//         name = s;                                      //parameterised constructor
//     }
//     student(student &a){                             //copy constructor-------->deap copy;   if default copy constructor--->shallow copy
//         cout<<"copy constructor"<<endl;  
//         name = a.name;
//         age = a.age;
//         gender = a.gender;
//     }
//     ~student(){cout<<"destructor"<<endl;}

//     bool operator == (student c){
//         if(name==c.name and age==c.age and gender==c.gender){
//             return true;
//         }
//         return false;
//     }

//     void setname(string s){
//         name =s;
//     }
//     void print_info(){
//           cout<<"Name = ";
//           cout<<name<<endl;
//           cout<<"Age = ";
//           cout<<age<<endl;
//           cout<<"Gender = ";
//           cout<<gender<<endl;
//     }
// };

// int main(){

//    student a;
    //    a.name="vikal";
    //    a.age=20;
    //    a.gender=0;
    //    cout<<a.name<<" "<<a.age<<" "<<a.gender;

    //   student arr[3];
    //   for(int i=0;i<3;i++){
    //       cout<<"Name = ";
    //       string s;
    //       cin>>s;
    //       arr[i].setname(s);
    //       cout<<"Age = ";
    //       cin>>arr[i].age;
    //       cout<<"Gender = ";
    //       cin>>arr[i].gender;
    //   }
    //   cout<<endl<<endl;
    //   for(int i=0;i<3;i++){
    //       arr[i].print_info();
    //       cout<<endl<<endl;
    //   }
    
    // student a("vikal");
    // student a;
    // a.name = "vikal";
    // a.age=20;
    // a.gender=1;
    // student b;
    // student c(a);
    // if(c==a) cout<<"same";
    // else cout<<"not same";
// }

////********************************************Encapsulation********************************************
///hide data------>private public protected
////********************************************Inheritance**********************************************
////********************************************polymorphism**********************************************
///compile time---->fn ov.   op ov.
///run time-------->vertual fn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
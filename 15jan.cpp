// #include<iostream>
// using namespace std;
// class rectangle{
//     public:
//     int len;
//     int bredth;
//     public:
//     void area(){
//         cout<<"area is: "<< len*bredth;

//     };
// };
// int main(){
//     rectangle r1;
//     r1.len = 15;
//     r1.bredth =30;
//     r1.area();
// }

// #include<iostream>
// using namespace std;
// class rectangle{
//     public:
//     int len;
//     int bredth;
//     public:
//     void get(){
//         cout<<"enter the lenght";
//         cin>> len;
//         cout<<"enter the breadth:";
//         cin>> bredth;

//     }
//     public:
//     void area(){
//         cout<<"area is: "<< len*bredth;

//     };
// };
// int main(){
//     rectangle r1;
    
//     r1.get();

//     r1.area();
// }

// program to create a class employe take the inpput from the user for name , salar;y , emp id and dis[ply the information]

// #include<iostream>
// using namespace std;
// class employee
// {
//     public: 
//     int salary;
//     char name[10];
//     int empid;
//     void get(){
//         cout<<"enter the emop id:- ";
//         cin>>empid;
//         cout<<"entert the name:";
//         cin>>name;
//         cout<<"enter the salary";
//         cin>> salary;
//         cout<<"\n";

//     }
//     void display(){
//         cout<<"emp id is :- "<<empid;
//         cout<<"\n";
    
//         cout<<"employee name  is :- "<<name;
//         cout<<"\n";
//         cout<<"salary is :- "<<salary;

//     };
// };
// int main(){
//     employee e1;
//     e1.get();
//     e1.display();

// }

#include<iostream>
using namespace std;
int main(){
    int n,a[50],e,p;
    cout<<"how many elements you want to enter";
    cin>>n;
    cout<<"ther thre element";
    for(int i ; i<=n; i++){
        cin>>a[i];
    }

    cout<<"enter the element you want to enter: ";
    cin>>e;
    cout<<"enter the position where you want to enter";
    cin>>p;
    for(int k = n; k<=p; k-- ){
        a[k+1] = a[k];
        a[p] = e;

    }
    cout<<"the elements are:- ";
    for(int i = 1; i<=n+1; i++){
        cout<<a[i]<<"\t";
        return 0;
    }


}

//programm to create a class named as car that has private variables for copany, model and year impliment th efunctiuon to get and display the vlaues
// programm to create a callss as person that has private members of name age contry impliment a fucntion to take the input and disp[lays thew value





#include<iostream>
using namespace std;


class car{
    private:
    char compname;
    char model;
    int year;

    public:

    void getcompname(){
        cout<<"compnay name is :- "<<compname<<endl;

    }
    void getmodel(){
        cout<<"model name is :- "<<model<<endl;

    }
    void getyear(){
        cout<<"year is :- "<<year<<endl;
    }

    void setcompname(){
        cin>>compname;

    }
    void setmodel(){
        cin>>model;
    }
    void setyear(){
        cin>>year;
    }

};
int main(){

    car c;

    c.setcompname();
    c.setmodel();
    c.setyear();

    c.getcompname();
    c.getmodel();
    c.getyear();
}

// #include<iostream>
// using namespace std;
 
// class person{
//     private:
//     char name[30];
//     int age;
//     char country[10];

//     public: 

//     void setname(){
//         cin>>name;
//     }
//     void setage(){
//         cin>>age;

//     }
//     void setcountry(){
//         cin>>country;
//     }


//     void getname(){
//         cout<<"name is :- "<<name<<endl;
//     }
//     void getage(){
//         cout<<"age is :- "<<age<<endl;
//     }
//     void getcountry(){
//         cout<<"country is :- "<<country<<endl;
        

//     }
    
// };
// int main(){

//     person p;

//     p.setname();
//     p.setage();
//     p.setcountry();

//     p.getname();
//     p.getage();
//     p.getcountry();


// }










// //make a calss define the follwoing fxn in it addition, 
// //subtraction, division, multiplicaiton,define all nthrrese 
// //funations outside the class and make them inline



// #include<iostream>
// using namespace std;

// class operations{
//     public:

//     int a;
//     int b;
//     void get();
//     void add();
//     void mul();
//     void sub();
//     void divi();

// };
// inline void operations :: get(){
//     cout<<"enter the value of a:- "<<endl;
//     cin>>a;
//     cout<<"enter the value of b"<<endl;
//     cin>>b;
// }

// inline void operations :: add(){
//     cout<<"add is :- "<<a+b<<endl;
// }
// inline void operations :: mul(){
//     cout<<"multiply is :- "<<a*b<<endl;
// }
// inline void operations :: sub(){
//     cout<<"subtraction is :- "<<a-b<<endl;
// }
// inline void operations :: divi(){
//     cout<<"divison is :- "<<a/b<<endl;
// }

// int main(){
//     operations h;

//     h.get();


    

//     h.add();
//     h.sub();
//     h.mul();
//     h.divi();




// }
#include<iostream>

using namespace std;








// class hero{
    

//      //properties
    
//     private:
//     int health;
//     public:
//     char level;
// //constructor
//     hero(){
//         cout<<"contructor called";
//     }

//     //parameterized contructor

//     hero(int health){
//         cout<<"this ->"<<this<<endl;
//         this-> health = health;
//     }

//     void print(){
//         cout<<"health is :-"<<this->health<<endl;
//         cout<<"level is :- "<<this->level<<endl;
//     }

//     int gethealth(){
//         return health;
//     }
//     int getlevel(){
//         return level;

//     }
//     void sethealth(int h1){
//         health = h1;

//     }
//     void setlevel(char ch){
//         level = ch;
//     }

// };




// int main(){

//     hero suresh;
//     suresh.sethealth(70);
//     suresh.setlevel('c');
//     suresh.print();
//     hero ritesh(suresh);
//     ritesh.print();

     





    //object created statically

    

    // hero ramesh(10);
    // cout<<"adress of ramesh:- "<<&ramesh<<endl;


    // //object created dynamically

    // hero *h = new hero;



    // //static allocation

    // hero a;

    // a.sethealth(80);
    // a.setlevel('b');

    // cout<<"level is :- "<< a.level<<endl;
    // cout<<"health is :- "<<a.gethealth()<<endl;




    // //dynamically allocation

    // hero *b = new hero;
    // b->setlevel('a');
    // b->sethealth(70);

    //  cout<<"level is :- "<< b->level<<endl;
    // cout<<"health is :- "<<b->gethealth()<<endl;





// //creation of object
//     hero ramesh;
   
//     // ramesh.health = 18;
//     //use of setter
//     ramesh.sethealth(70);
//     ramesh.level = 'a';

//     // cout<<"health is :- "<<ramesh.health;
//     cout<<"level is:- "<<ramesh.level;
//     cout<<"ramesh health is :- "<<ramesh.gethealth();
//     cout<<"size op ramesh:-  "<<sizeof(ramesh)<<endl;
//     // cout<< "size :-" << sizeof(h1)<<endl;

    return 0;
}
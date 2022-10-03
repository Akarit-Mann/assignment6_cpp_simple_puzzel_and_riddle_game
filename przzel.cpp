#include <iostream>
using namespace std;

int level;
int answer1,answer2,answer3;
int final = 0;

void result(int an1,int an2, int an3){


    //In this place youe can use dynamic answer!!!!
    //but this code is default!!!

    if(an1 ==3){
        final +=1;
    };
    
    if(an2 == 2){
        final +=1;
    };

    if(an3 == 2){
        final +=1;
    }

    cout << "You correct" << final << "question!" << endl;

    if(final == 0){
        cout << "Your are so stupid bro...!" << endl << endl;
    }

    if(final == 1){
        cout << "Not bad bro...!" << endl << endl;
    }

    if(final == 2){
        cout << "Good" << endl << endl;
    }

    if(final == 3){
        cout << "perfect!" << endl << endl;
    }
};

void easy(){
    cout << "This is easy puzzel and riddle section" << endl;

    cout << "Q.1 How many times can you subtract the number 5 from 35?" << endl;
    cout << ">> 5 times << press 1" << endl;
    cout << ">> 6 times << press 2" << endl;
    cout << ">> 7 times << press 3" << endl;//true
    cin >> answer1;

    cout <<"Q.2  You’re in a race and you pass the person in second place. What place are you in now?" << endl;
    cout << ">> first  place <<  press 1" << endl;
    cout << ">> second place << press 2" << endl;//true
    cout << ">> third  place << press 3" << endl;
    cin >> answer2;

    cout << "Q.3 I am easy to lift but hard to throw. What am I?" << endl;
    cout << ">> pillo << press 1" << endl;
    cout << ">> feather << press 2" << endl;//true
    cout << ">> stone << press 3" << endl;
    cin >> answer3;

    result(answer1,answer2,answer3);


};

void normal(){
    cout << "This is normal puzzel and riddle section" << endl;

    cout << "Q.1 I can heal and kill without touching you. What am I?" << endl;
    cout << ">> Gun << press 1" << endl;
    cout << ">> Knife << press 2" << endl;
    cout << ">> Time << press 3" << endl;//true
    cin >> answer1;

    cout <<"Q.2  I have a face and hands but my hands can never touch my face. What am I?" << endl;
    cout << ">> Book << press 1" << endl;
    cout << ">> clock << 2" << endl;//true
    cout << ">> Name << press 3" << endl;
    cin >> answer2;

    cout << "Q.3 Samuel’s father has three sons: David, Andrew and..?" << endl;
    cout << ">> David << press 1" << endl;
    cout << ">> Samuel <<  press 2" << endl;//true
    cout << ">> Akarit <<  press 3" << endl;
    cin >> answer3;

    result(answer1,answer2,answer3);


};

void hard(){
    cout << "This is hard puzzel section" << endl;

    cout << "Q.1 What is (1+4)*0+2" << endl;
    cout << ">> 0 << press 1" << endl;
    cout << ">> 1 << press 2" << endl;
    cout << ">> 2 << press 3" << endl;//true
    cin >> answer1;

    cout <<"Q.2  what is 2+4" << endl;
    cout << ">> 5 << press 1" << endl;
    cout << ">> 6 << press 2" << endl;//true
    cout << ">> 7 << press 3" << endl;
    cin >> answer2;

    cout << "Q.3 what is (2*6)-(5*2)" << endl;
    cout << ">> 1 << press 1" << endl;
    cout << ">> 2 << press 2" << endl;//true
    cout << ">> 3 << press 3" << endl;
    cin >> answer3;

    result(answer1,answer2,answer3);


};

int main() {
  cout << "**Welcome Form Puzzel and Riddle Game!**" << endl;

    while (1)
    {
        
        cout << "Choose Your level" << endl;
        cout << "Easy pass 1" << endl;
        cout << "Normal pass 2" << endl;
        cout << "Hard pass 3" << endl;
        cout << "Exit pass 4" << endl;
        cin >> level;

        cout << "User choose "<< level  << endl;

        if(level == 1){
            easy();
        }else if(level ==2){
            normal();
        }else if(level ==3){
            hard();
        }else if(level == 4){
            exit(1);
        }
        else{
            cout << "please follow the rule!" << endl;
        }
    }
    

  

  return 0;
}
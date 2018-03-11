//FCI - Programming 1 - 2018 - Assignment 2
//Program Name: PI_Code_Group_12
//Last Modification Date: 1 - 3 - 2018
//Author 1 : Mai Rady Hassan - 20170302 - G 12
//Author 2 : Nour Elhoda Khaled Samir - 20170320 - G 12
//Author 3 : Andrew Emad Aziz - 20170061 - G 12
//Teaching Assistant: ENG.Khadiga && ENG.Dina Mohamed
//Purpose: Writing a code to calculate the approximate value of PI


#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    cout<<"Ahlan ya user ya habibi"<<endl;
    cout<<endl;
    cout<<"What do you like to do today?!"<<endl;
    cout<<endl;
    int nTerms;
    cout<<"Number of terms is: ";
    cin>>nTerms;
    float pi=0;
    for(int i=0; i<nTerms; i++){
        pi+=(pow(-1,i))/(2*i+1);
    }
    cout<<endl;
    cout<<"PI = 4* "<<pi<<endl;
    pi*=4;
    cout<<"PI = "<<pi<<endl;



    return 0;
}

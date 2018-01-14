#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    /*vectors are dynamically allocated*/
    vector<int>myvec; // vector container

    myvec.push_back(6);
    myvec.push_back(3);
    myvec.push_back(5);
    myvec.push_back(9);


    if(myvec.empty()){
        cout << "the list is empty"<< endl;
    }


    cout <<"The value of myvec.cat(0) is:  "<<myvec.at(0) << endl; // Throws an error if it's out of range

    cout <<"The value of myvec[0] is: "<<myvec[0] << endl; //  No range check

     cout <<"The elements are : ";
           /*
     for(int i;i<myvec.size;i++)

        {myvec[i]}

        */
    for(vector<int>::iterator itr = myvec.begin();itr!=myvec.end();++itr){   // iterator /standard way of traversing a container/
        cout <<" "<<*itr ;
    }
    //C++ 11
    /*
    for(itr:myvec)
    { cout << itr << endl; }
    */


    int *ptr = &myvec[0]; // pointer to vector Note: we have to point to the first element cos it is dynamically allocated;
}

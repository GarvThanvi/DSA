#include<iostream>
#include<list>
using namespace std;


int main(){

    //Swapping

    list<int> first;
    list<int> second;

    first.push_back(20);
    first.push_back(20);
    first.push_back(20);
    first.push_back(20);
    first.push_back(20);
    second.push_back(30);
    second.push_back(30);
    second.push_back(30);
    second.push_back(30);
    second.push_back(30);
    //swaps all the contents
    first.swap(second);
    //try printing and you will see the contents have been exchanged

    // //insert and erase
    // first.insert(first.begin(), 100);
    // first.erase(first.begin(), first.end());


    // list<int> myList;
    // //you can also pop_back or pop_front
    // //push_back or push_front
    // //50->10->20->30->40
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_back(30);
    // myList.push_back(40);
    // myList.push_back(10);
    // myList.push_back(10);
    // myList.push_front(50);

    // cout << myList.size()<<endl;
    // // myList.clear();
    // // cout << myList.size()<<endl;

    // //.empty() function gives boolean value
    // // //.front, .back
    // // cout<< myList.front()<<endl;
    // // cout<<myList.back()<<endl;

    // list<int>::iterator it1 = myList.begin();
    // list<int>::iterator it2 = myList.begin();

    // while(it1 != myList.end()){
    //      cout<<*it1<<" ";
    //      it1++;
    // }cout<<endl;

    // //removes all 10
    // myList.remove(10);

    // while(it2 != myList.end()){
    //      cout<<*it2<<" ";
    //      it2++;
    // }cout<<endl;

    


    return 0;
}
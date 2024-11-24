#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    //ordered set will sort all values
    set<int> st;
    //unordered set 
    unordered_set<int> st2;

    //insert
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);

    //.empty , .size, .clear, .find, .count

    //traverse
    set<int>::iterator it = st.begin();
    while(it != st.end()){
        cout<< *it << " ";
        it++;
    }   


    
     
    return 0;
}
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    // //creation
    // unordered_map<string, string> table;
    
    // //insertion
    // table["in"] = " India";
    // table.insert(make_pair("en", "England"));

    // pair<string, string> p;
    // p.first = "br";
    // p.second = "brazil";
    // table.insert(p);

    // cout<<table.size() << endl;

    // if(table.count("in") == 0 ){
    //     cout<< "Key not found" << endl;
    // }
    // if(table.count("in") == 1 ){ //counts the number of keys in map and as every key in unique it can give 0 or 1
    //     cout<< "Key found" << endl;
    // }
    

    // if( table.find("in") != table.end() ){ //.find returns the iterator if found and .end() if not found
    //     cout << "Key Found" << endl; 
    // }else{
    //     cout << "Key not found" << endl;
    // }

    // // //table.empty() gives boolean value

    // // cout<<table.at("in")<<endl;
    // // table.at("in") = "Ind"; //table["in"] = "Ind"
    // // cout<<table.at("in")<<endl;

    // // unordered_map<string, string>::iterator it = table.begin();

    // // while(it != table.end()){
    // //     pair<string, string> p = *it;
    // //     cout << p.first << " " << p.second << endl;
    // //     it++;
    // // }

    // // //table.erase(table.begin(), table.end())


// //orderedmap -- it is same as unordered map except that it stores in key pair value in order, alphabetically or numerically
    map<int, string> table;

    table.insert(make_pair(3, "Love"));
    table.insert(make_pair(1, "Garv"));
    table.insert(make_pair(2, "Thanvi"));

    map<int, string>::iterator it = table.begin();

    while(it != table.end()){
        pair<int, string> p = *it;
        cout<< p.first<< " " << p.second << endl;
        it++;
    }










    return 0;
}
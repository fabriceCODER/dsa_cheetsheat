#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vector1 = {1, 2, 3, 4, 5};
    vector<int> vector2 {6, 5, 4, 7, 8};

    vector<int> vector3(5, 30);
    cout<<"Vector from method 1= ";
    for(int i=0; i<vector1.size(); i++){
        cout<<vector1[i]<< " ";
    }

    cout<<"Vector from method 2= ";
    for(int i=0; i<vector2.size(); i++){
        cout<<vector1[i]<< " ";
    }

    cout<<"Vector from method 3= ";
    for(int i=0; i<vector3.size(); i++){
        cout<<vector1[i]<< " ";
    }
}
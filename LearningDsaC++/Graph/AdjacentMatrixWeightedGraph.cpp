#include <iostream>
using namespace std;

class AdjacencyMatrixWeighted{
private:
    int n;
    int **adj;
public:
 AdjacencyMatrixWeighted(int n){
     this->n = n;
     adj = new int * [n];
     for(int i = 0; i< n; i++){
         adj[i] = new int [n];
         for(int j = 0; j<n; j++){
             adj[i][j] = 0;
         }
     }
     display();
 }

 void add_edge(int origin, int dest, int weight){
     if(origin > n || dest > n || origin <= 0 || dest <= 0){
         cout<<"Invalid Edge";
         return;
     }
     adj[origin -1][dest-1] = weight;
     adj[dest-1][origin-1] = weight;
 }

 void delete_edge(int origin, int dest, int weight){
     if(origin > n || dest >n || origin <=0 || dest<=0){
         cout<<"Invalid Edge";
         return;
     }
     adj[origin-1][dest-1]=0;
     adj[dest-1][origin-1]=0;
 }

 void display(){
     int i, j;
     for(i=0; i<n; i++){
         for(j=0; j<n; j++){
             cout<<adj[i][j]<<" ";
             cout<<endl;
         }
     }
 }

};


int main(){

}
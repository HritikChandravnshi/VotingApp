#include<iostream>

using namespace std;


int votecount(){
    int votes=votes+1;
}
class candidatec{
    public:
    int votes,candid;
    int votecount();

};

    

int main()
{
    candidatec c;
    int i=0,j=0,k=0,l=0,m;
    int candidate;
    char voter[5]={'A','B','C','D','E'};

    
    while(l<5){
    
    cout<<"enter your id: ";
    cin>>m;
    cout<<"press '1' for 1st candidate\n"<<"press '2' for 2nd candidate\n"<<"press '3' for 3rd candidate"<<endl;
    
    cin>>candidate;
    // running for candidate

    cout<<voter[m]<<" has voted ";
    
    
    }
        if(i>j&&i>k){
            cout<<"candidate 1 has won";
        }
        else if(j>k&&j>i){
            cout<<"candidate 2 has won";
        }
        else if (k>i&&k>j){
            cout<<"candidate 3 has won";
        }
        else{
            cout<<"draw";
        }
}
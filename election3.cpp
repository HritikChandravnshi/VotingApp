#include<iostream>
#include <map>
#include <string>
using namespace std;


void handleCase(const std::string& caseValue) {
    std::cout << "Handling case: " << caseValue << std::endl;
}

    

int main()
{
    int i=0,j=0,k=0,l=0,m;
    int candidate;
    char voter[5]={'A','B','C','D','E'};

    
    while(l<5)
    {
    
    cout<<"enter your id: ";
    cin>>m;
    cout<<"press '1' for 1st candidate\n"<<"press '2' for 2nd candidate\n"<<"press 'n' for nth candidate"<<endl;
    
    
    // running for candidate
    std::map<std::string, int> cases;

    int numCases;
    std::cout << "Enter the number of cases: ";
    std::cin >> numCases;

    for (int i = 0; i < numCases; ++i) {
        std::string caseLabel;
        int caseValue;

        std::cout << "Enter case label " << i + 1 << ": ";
        std::cin >> caseLabel;

        std::cout << "Enter case value for " << caseLabel << ": ";
        std::cin >> caseValue;

        cases[caseLabel] = caseValue;
    }

    std::string userInput;
    std::cout << "Enter case to handle: ";
    std::cin >> userInput;

    auto it = cases.find(userInput);
    if (it != cases.end()) {
        handleCase(userInput);
    } else {
        std::cout << "Case not found!" << std::endl;
    }

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

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=0,l=0,m;
//     int votesPerCandidate[1][5] = {};
//     int candidate;
//     char voter[5]={'A','B','C','D','E'};

//     while(l<5){

//     cout<<"enter your id: ";
//     cin>>m;
//     cout<<"press '1' for 1st candidate\n"<<"press '2' for 2nd candidate\n"<<"press '3' for 3rd candidate"<<endl;

//     cin>>candidate;
//     // running for candidate

//     cout<<voter[m]<<" ";
//     votesPerCandidate[candidate][0] +=1;
//     cout<<"voted for candidate: "<< candidate << "\n";

//     l++;
//     }

//     for(;i<5; i++){
//         cout<<"Candidate "<<i<<"'s vote is: "<<votesPerCandidate[1][i] << "\n";
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int i = 0,
//         numOfVoters = 0,
//         temp,
//         currentChosenVote,
//         numOfCandidates;
//     char voter[5] = {'A', 'B', 'C', 'D', 'E'};

//     cout << "Enter num of candidates: ";
//     cin >> numOfCandidates;

//     // Dynamic 2-d array
//     int **votesPerCandidate = new int *[numOfCandidates];

//     for (i = 0; i < numOfCandidates; i++)
//     {
//         votesPerCandidate[i] = new int[1];
//     }

//     while (numOfVoters < 5)
//     {

//         cout << "enter your id: ";
//         cin >> temp;

//         for(i=0; i < numOfCandidates; i++){
//             cout << "press '"<<i<<"' for candidate: "<<i<<"\n";

//         }

//         cin >> currentChosenVote;
//         // running for candidate

//         cout << voter[temp] << " ";
//         votesPerCandidate[currentChosenVote][0] += 1;
//         cout << "voted for candidate: " << currentChosenVote << "\n";

//         numOfVoters++;
//     }

//     for (i = 0; i < numOfCandidates; i++)
//     {
//         cout << "Candidate " << i << "'s vote is: " << votesPerCandidate[i][0] << "\n";
//     }

//     // Free dynamically created memory
//     for (int i = 0; i < numOfCandidates; i++) // To delete the inner
//         delete[] votesPerCandidate[i];
//     delete[] votesPerCandidate;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int i = 0, j = 0,l=0,k=1,
//         numOfVoters = 0,
//         temp,
//         currentChosenVote,
//         numOfCandidates;
//     bool hasCurrentVoterVoted = false;

//     cout << "Enter num of voters: ";
//     cin >> numOfVoters;
//     int alreadyVoted[numOfVoters];

//     // dynamic array for voters
//     int *voters = new int(numOfVoters);
    
//     for (int j = 0; j < numOfVoters; j++)
//         voters[j] = j;
//     cout << "Enter num of candidates: ";
//     cin >> numOfCandidates;

//     // Dynamic 2-d array
//     int **votesPerCandidate = new int *[numOfCandidates];

//     for (i = 0; i < numOfCandidates; i++)
//     {
//         votesPerCandidate[i] = new int[1];
//     }

//     while (j < numOfVoters) {
//         hasCurrentVoterVoted = false;

//         cout << "enter your voter id: ";
//         cin >> temp;
        
        

//        //checking for duplicate
//         for (l = 1; l < numOfVoters; l++) {
//             if (temp == alreadyVoted[l]) {
//                 cout << "already voted" << endl;
//                 hasCurrentVoterVoted = true;
//             }
//         }
//         if(hasCurrentVoterVoted) continue;

//         for (i = 0; i < numOfCandidates; i++)
//         {
//             cout << "press '" << i << "' for candidate: " << i << "\n";
//         }

//         cin >> currentChosenVote;
        
        
//         cout << voters[temp] << " ";
//         votesPerCandidate[currentChosenVote][0] += 1;
//         cout << "voted for candidate: " << currentChosenVote << "\n";
//         alreadyVoted[k++] = temp;
        
//         j++;
        
//     }

//     for (i = 0; i < numOfCandidates; i++)
//     {
//         cout << "Candidate " << i << "'s vote is: " << votesPerCandidate[i][0] << "\n";
//     }

//     // Free dynamically created memory
//     for (int i = 0; i < numOfCandidates; i++) // To delete the inner
//         delete[] votesPerCandidate[i];
//     delete[] votesPerCandidate;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int numOfVoters, numOfCandidates;
//      // taking user inputs of vID,cID
//     cout << "Enter the number of voters: ";
//     cin >> numOfVoters;

//     cout << "Enter the number of candidates: ";
//     cin >> numOfCandidates;

//     int *voters = new int[numOfVoters]; // Dynamic array for voters

//     // Dynamic 2D array for votes per candidate
//     int **votesPerCandidate = new int *[numOfCandidates];
//     for (int i = 0; i < numOfCandidates; i++) {
//         votesPerCandidate[i] = new int[1];
//     }

//     int *arr1 = new int[100] ; // Array to track voted IDs
//     int k = 0;

//     for (int j = 0; j < numOfVoters; j++) {
//         int temp, currentChosenVote;

//         cout << "Enter your voter ID: ";
//         cin >> temp;

//         // Check for duplicate vote
//         bool alreadyVoted = false;
//         for (int l = 0; l < 100; l++) {
//             if (temp == arr1[l]) {
//                 cout << "Already voted!" << endl;
//                 alreadyVoted = true;
//                 break;
//             }
//         }

//         if (alreadyVoted) {
//             j--;
//             continue;
//         }
//         // dispaying all candidates with cID
//         for (int i = 0; i < numOfCandidates; i++) {
//             cout << "Press '" << i << "' for candidate " << i << "\n";
//         }
//          // choosing candidate to vote
//         cin >> currentChosenVote;
//         // printing which voter voted whom
//         cout << "Voter " << temp << " voted for candidate: " << currentChosenVote << "\n";
//          // incrementing votes received by the choosenCandidate
//         votesPerCandidate[currentChosenVote][0] += 1;
//         arr1[k++] = temp;
//     }

//     // Showing result
//     for (int i = 0; i < numOfCandidates; i++) {
//         cout << "Candidate " << i << "'s vote count: " << votesPerCandidate[i][0] << "\n";
//     }

//     // Free dynamically allocated memory
//     delete[] voters;
//     delete[] arr1;
//     for (int i = 0; i < numOfCandidates; i++) {
//         delete[] votesPerCandidate[i];
//     }
//     delete[] votesPerCandidate;

//     return 0;
// }








// #include <iostream>
// using namespace std;


// int main() {
//     int numOfVoters, numOfCandidates;

//     cout << "Enter the number of voters: ";
//     cin >> numOfVoters;

//     cout << "Enter the number of candidates: ";
//     cin >> numOfCandidates;

//     int *voters = new int[numOfVoters]; // Dynamic array for voters

//     // Dynamic 2D array for votes per candidate
//     int **votesPerCandidate = new int *[numOfCandidates+1];
//     for (int i = 0; i < numOfCandidates; i++) {
//         votesPerCandidate[i+1] = new int[1];
//     }

//     int *alreadyVotedUsers = new int[numOfVoters] ; // Array to track voted IDs

//     // taking user inputs of vID and showing candidates loop
//     for (int j = 0; j < numOfVoters; j++) {
//         int temp, currentChosenVote;

//         cout << "Enter your voter ID: ";
//         cin >> temp;
        

//         // Check for duplicate vote
//         bool alreadyVoted = false;
//         for (int l = 0; l < numOfVoters; l++) {
//             if (temp == alreadyVotedUsers[l]) {
//                 cout << "Already voted!" << endl;
//                 alreadyVoted = true;
//                 break;
//             }
//         }

//         //
//         alreadyVotedUsers[j] = temp;

//         //
//         if (alreadyVoted) {
//             j--;
//             continue;
//         }

//         // dispaying all candidates with cID
//         for (int i = 1; i <= numOfCandidates; i++) {
//             cout << "Press '" << i << "' for candidate " << i << "\n";
//         }
//         // choosing candidate to vote
//         cin >> currentChosenVote;
//         // printing which voter voted whom
//         cout << "Voter " << temp << " voted for candidate: " << currentChosenVote << "\n";
//         // incrementing votes received by the choosenCandidate
//         votesPerCandidate[currentChosenVote][0] += 1;
        
        
//     }

//     // // Showing result
//     for (int i = 0; i < numOfCandidates; i++) {
//         cout << "Candidate " << i << "'s vote count: " << votesPerCandidate[i+1][0] << "\n";
//     }

//     // Free dynamically allocated memory
//     delete[] voters;
//     delete[] alreadyVotedUsers;
//     for (int i = 0; i < numOfCandidates; i++) {
//         delete[] votesPerCandidate[i];
//     }
//     delete[] votesPerCandidate;

//     return 0;
// }










#include <iostream>
using namespace std;

int* votersArrayCreate(int n)
{

    int *voters = new int[n]; // Dynamic array for voters
    return voters;
}
int** votesPerCandidateArrayCreate(int numOfCandidates)
{
    int **votesPerCandidate = new int *[numOfCandidates + 1]; // Dynamic 2D array for votes per candidate
    for (int i = 0; i < numOfCandidates; i++)
    {
        votesPerCandidate[i + 1] = new int[1];
    }
    return votesPerCandidate;
}

bool DuplicacyCheck(int temp,int numOfVoters,int* alreadyVotedUsers[numOfVoters],int j)
{
    // Check for duplicate vote
    bool alreadyVoted = false;
    for (int l = 0; l < numOfVoters; l++) {
        if (temp == alreadyVotedUsers[l]) {
            cout << "Already voted!" << endl;
            alreadyVoted = true;
            break;
        }
    }

    // storing the vId in alreadyVotedUsers array
    alreadyVotedUsers[j] = temp;

    
}

void displayCandidates(int numOfCandidates)
{
    for (int i = 1; i <= numOfCandidates; i++)
    {
        cout << "Press '" << i << "' for candidate " << i << "\n";
    }
}

int main()
{
    int numOfVoters, numOfCandidates;

    cout << "Enter the number of voters: ";
    cin >> numOfVoters;

    cout << "Enter the number of candidates: ";
    cin >> numOfCandidates;

    votersArrayCreate(numOfVoters);
    votesPerCandidateArrayCreate(numOfCandidates);

    int *alreadyVotedUsers = new int[numOfVoters]; // Array to track voted IDs

    // taking user inputs of vID,cID
    for (int j = 0; j < numOfVoters; j++)
    {
        int temp, currentChosenVote;

        cout << "Enter your voter ID: ";
        cin >> temp;

        DuplicacyCheck(numOfVoter, temp, alreadyVotedUsers, j);
        // exiting from main loop
        if (alreadyVoted)
        {
            j--;
            continue;   
        }

        // dispaying all candidates with cID
        displayCandidates(numOfCandidates)

            // choosing candidate to vote
            cin >>currentChosenVote;
        // printing which voter voted whom
        cout << "Voter " << temp << " voted for candidate: " << currentChosenVote << "\n";
        // incrementing votes received by the choosenCandidate
        votesPerCandidate[currentChosenVote][0] += 1;
    }

    // Showing result
    for (int i = 0; i < numOfCandidates; i++)
    {
        cout << "Candidate " << i << "'s vote count: " << votesPerCandidate[i + 1][0] << "\n";
    }

    // Free dynamically allocated memory
    delete[] voters;
    delete[] alreadyVotedUsers;
    for (int i = 0; i < numOfCandidates; i++)
    {
        delete[] votesPerCandidate[i];
    }
    delete[] votesPerCandidate;

    return 0;
}






// #include <iostream>
// using namespace std;



// int candidatesArrayCreation(){

// }


// int main() {
    int numOfVoters, numOfCandidates;

//sample comment
    cout << "Enter the number of voters: ";
    cin >> numOfVoters;

    cout << "Enter the number of candidates: ";
    cin >> numOfCandidates;

    int *voters = new int[numOfVoters]; // Dynamic array for voters

    // Dynamic 2D array for votes per candidate
    int **votesPerCandidate = new int *[numOfCandidates+1];
    for (int i = 0; i < numOfCandidates; i++) {
        votesPerCandidate[i+1] = new int[1];
    }

    int *alreadyVotedUsers = new int[numOfVoters] ; // Array to track voted IDs

    // taking user inputs of vID and showing candidates loop
    for (int j = 0; j < numOfVoters; j++) {
        int temp, currentChosenVote;

        cout << "Enter your voter ID: ";
        cin >> temp;
        

        // Check for duplicate vote
        bool alreadyVoted = false;
        for (int l = 0; l < numOfVoters; l++) {
            if (temp == alreadyVotedUsers[l]) {
                cout << "Already voted!" << endl;
                alreadyVoted = true;
                break;
            }
        }

        //
        alreadyVotedUsers[j] = temp;

        //
        if (alreadyVoted) {
            j--;
            continue;
        }

        // dispaying all candidates with cID
        for (int i = 1; i <= numOfCandidates; i++) {
            cout << "Press '" << i << "' for candidate " << i << "\n";
        }
        // choosing candidate to vote
        cin >> currentChosenVote;
        // printing which voter voted whom
        cout << "Voter " << temp << " voted for candidate: " << currentChosenVote << "\n";
        // incrementing votes received by the choosenCandidate
        votesPerCandidate[currentChosenVote][0] += 1;
        
        
    }

    // // Showing result
    for (int i = 0; i < numOfCandidates; i++) {
        cout << "Candidate " << i << "'s vote count: " << votesPerCandidate[i+1][0] << "\n";
    }

    // Free dynamically allocated memory
    delete[] voters;
    delete[] alreadyVotedUsers;
    for (int i = 0; i < numOfCandidates; i++) {
        delete[] votesPerCandidate[i];
    }
    delete[] votesPerCandidate;

    return 0;
}


#include <iostream>
using namespace std;

bool CheckForValidVoterID(int temp,int numOfVoters){
    if (temp>numOfVoters){
        cout<<"invalid Voter ID"<<endl;
        return true;
    }
    return false;
}

void printResults(int numOfCandidates, int **votesPerCandidate)
{
    for (int i = 0; i < numOfCandidates; i++)
        cout << "Candidate " << i << "'s vote count: " << votesPerCandidate[i + 1][0] << "\n";
}

// boolean return value, checks if voter has already voted
bool checkIfAlreadyVoted(int numOfVoters, int temp, int *alreadyVotedUsers)
{
    // Check for duplicate vote
    for (int l = 0; l < numOfVoters; l++)
    {
        if (temp == alreadyVotedUsers[l])
        {
            cout << "Already voted!" << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    int numOfVoters, numOfCandidates;

    cout << "Enter the number of voters: ";
    cin >> numOfVoters;

    cout << "Enter the number of candidates: ";
    cin >> numOfCandidates;

    int *voters = new int[numOfVoters]; // Dynamic array for voters

    // Dynamic 2D array for votes per candidate
    int **votesPerCandidate = new int *[numOfCandidates + 1];
    for (int i = 0; i < numOfCandidates; i++)
        votesPerCandidate[i + 1] = new int[1];
    

    int *alreadyVotedUsers = new int[numOfVoters]; // Array to track voted IDs

    // taking user inputs of vID and showing candidates loop
    int j = 0;
    while (j < numOfVoters)
    {

        int temp, currentChosenVote;

        cout << "Enter your voter ID: ";
        cin >> temp;
        if (CheckForValidVoterID(temp,numOfVoters) == true)
            continue;
        
        // if voter has already voted then skip current iteartion
        if (checkIfAlreadyVoted(numOfVoters, temp, alreadyVotedUsers) == true)
            continue;

        // adding alread voted voters in alreadyVotedUsers array
        alreadyVotedUsers[j] = temp;

        // dispaying all candidates with cID
        for (int i = 1; i <= numOfCandidates; i++)
            cout << "Press '" << i << "' for candidate " << i << "\n";
        
        // choosing candidate to vote
        cin >> currentChosenVote;
        // printing which voter voted whom
        cout << "Voter " << temp << " voted for candidate: " << currentChosenVote << "\n";
        // incrementing votes received by the choosenCandidate
        votesPerCandidate[currentChosenVote][0] += 1;

        j++;
    }

    // showing result
    printResults(numOfCandidates, votesPerCandidate);

    // Free dynamically allocated memory
    delete[] voters;
    delete[] alreadyVotedUsers;
    for (int i = 0; i < numOfCandidates; i++)
        delete[] votesPerCandidate[i];
    
    delete[] votesPerCandidate;

    return 0;
}
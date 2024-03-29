#include <iostream>
using namespace std;

//Function for checking for the voter id entered lyes within the total no of voters
bool CheckForValidVoterID(int temp, int numOfVoters)
{
    if (temp > numOfVoters)
    {
        cout << "invalid Voter ID" << endl;
        return true; 
    }
    return false;
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

//Function for printing the votes received by each candidate
void printResults(int numOfCandidates, int **votesPerCandidate)
{
    for (int i = 1; i <= numOfCandidates; i++)
        cout << "Candidate " << i << "'s vote count: " << votesPerCandidate[i][0] << "\n";
}
// function returns the index value of the candidate having the maximum votes
int DeclareWinner(int **votesPerCandidate, int numOfCandidates)
{
    int candidateId = 0, maxVote = 0;
    for (int i = 0; i < numOfCandidates; i++)
    {
        if (votesPerCandidate[i+1][0] > maxVote)
        {
            maxVote = votesPerCandidate[i+1][0];
            candidateId = i+1;
        }
    }
    return candidateId;
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
        // checking for the voter id entered lyes within the total no of voters
        if (CheckForValidVoterID(temp, numOfVoters) == true)
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

    // showing result or votes received by each candidate
    printResults(numOfCandidates, votesPerCandidate);

    // Declaration of winner
    int winnerCandidate = DeclareWinner(votesPerCandidate, numOfCandidates);
    cout << "The winner is:" << winnerCandidate;

    // Free dynamically allocated memory
    delete[] voters;
    delete[] alreadyVotedUsers;
    for (int i = 0; i < numOfCandidates; i++)
        delete[] votesPerCandidate[i];

    delete[] votesPerCandidate;
    return 0;
}
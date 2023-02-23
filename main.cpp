/*
GIT STATES

git clone:
    You create a clone of the repo
    Repo is now a file in current directory

git status:
    Tells you the state of your Git local Repo

git add -A:
    Adds everything to repo

git commit:
    takes a snap shot of the changes

git commit -m "txt":
    Allow you to provide a string that allows you to add a comment

git push:
    Takes local commits and creates copies of them and sends them to the cloud

git pull: 
    Pulls data
    
*/

#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "how many times would you like to say hello world?" << endl;
    cout << "go" << endl;

    cin >> n;

    for(int i = 0;i < n; i++) {
        cout << "Hello world" << endl;    
    }

    return 0;
}
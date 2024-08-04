#include<bits/stdc++.h>
using namespace std;
struct Item{
    private:
        int id;
        double cost;
        string name;
        string description; 
        vector<string> fileLocations;
    public:
        ~Item();
        Item();
        void changeName(string newName);
        void changeId(int newId);
        void changeDescription(string newDescription);
        void changeCost(double newCost);
        void changeFileLocations(vector<string> newFileLocations);
        int getId();
        string getDesctiption();
        vector<string> getFileLocations();
};
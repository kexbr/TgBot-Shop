#include<bits/stdc++.h>
using namespace std;
class Item{
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
        string getName();
        double getCost();
        string getDesctiption();
        vector<string> getFileLocations();
};
class listOfItems{
    private:
        vector<Item> items; 
        int length;
    public:
        ~listOfItems();
        listOfItems();
        Item* findById(int id);
        vector<Item*> findByName(string name);
        Item* operator [] (int i);
};
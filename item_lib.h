#include<bits/stdc++.h>
using namespace std;
class Item{
    private:
        int id;
        double cost;
        string name;
        int cnt;
        string description; 
        vector<string> fileLocations;
    public:
        ~Item();
        Item();
        Item(int _id);
        Item(int _id, string _name, double _cost, int _cnt, string _description, vector<string> _fileLocations);
        void changeName(string newName);
        void changeDescription(string newDescription);
        void changeCost(double newCost);
        void changeFileLocations(vector<string> newFileLocations);
        void addCnt(int addCnt);
        void changeCnt(int newCnt);
        int getCnt();
        int getId();
        string getName();
        double getCost();
        string getDesctiption();
        vector<string> getFileLocations();
};
class listOfItems{
    private:
        vector<Item> items; 
        map<int, Item*> itemById;
        map<int, bool> usedId;
        int length;
    public:
        ~listOfItems();
        listOfItems();
        Item* findById(int id);
        vector<Item*> findByName(string name);
        Item* operator [] (int i);
        void eraseItem(int id);
        void addItem(Item newItem);
        int size();
};
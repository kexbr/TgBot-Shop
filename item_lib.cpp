#include "item_lib.h"
#include<bits/stdc++.h>
using namespace std;
mt19937 rnd(time(NULL));
Item::Item(){
    id = -1;
    cost = 0.0;
    name = "Item";
    description = "default";
    cnt = 0;
}
Item::~Item(){

}
Item::Item(int _id){
    id = _id;
    cost = 0;
    name = "Item";
    description = "default";
    cnt = 0;
}
Item::Item(int _id, string _name, double _cost, int _cnt, string _description, vector<string> _fileLocations){
    id = _id;
    name = _name;
    cost = _cost;
    cnt = _cnt;
    description = _description;
    fileLocations = _fileLocations;
}
void Item::changeName(string newName){
    cout << "Name of item" << id << " has changed to " << newName << endl;
    name = newName;
}
void Item::changeCost(double newCost){
    cout << "Cost of item " << id << " changed up to" << newCost << endl;
    cost = newCost;
}
void Item::changeDescription(string newDescription){
    cout << "Description of item " << id << " has changed" << endl;
    description = newDescription;
}
void Item::changeFileLocations(vector<string> newLocations){
    cout << "item " << id << "'s file paths has changed" << endl;
    fileLocations = newLocations;
}
void Item::addCnt(int addCnt){
    cout << "Count of item " << id << " has been increased by " << addCnt << endl;
    cnt += addCnt;
}
void Item::changeCnt(int newCnt){
    cnt = newCnt;
    cout << "Amount of item" << id << " has been changed up to " << cnt << endl;
}
int Item::getId(){
    return id;
}
double Item::getCost(){
    return cost;
}
string Item::getName(){
    return name;
}
int Item::getCnt(){
    return cnt;
}
vector<string> Item::getFileLocations(){
    return fileLocations;
}


listOfItems::listOfItems(){
    length = 0;
}
listOfItems::~listOfItems(){
    
}
Item* listOfItems::findById(int id){
    if(itemById.find(id) == itemById.end()){
        return nullptr;
    }
    return itemById[id];
}
vector<Item*> listOfItems::findByName(string name){
    vector<Item*> ans;
    for(int i = 0; i < length; i++){
        if(items[i].getName().find(name) != string::npos){
            ans.push_back(&items[i]);
        }
    }
    return ans;
}
Item* listOfItems::operator [](int i){
    return &items[i]; 
}
void listOfItems::eraseItem(int id){
    Item* itemId = findById(id);
    if(itemId == nullptr) return;
    int x = findById(id) - items.data();
    items[x] = Item();
    itemById[id] = nullptr;
}
int listOfItems::size(){
    return length;
}
void listOfItems::addItem(Item newItem){
    if(usedId[newItem.getId()] == 1){
        cout << "ERROR! Unable to add new Item with id " << newItem.getId() << " since Item's id is already used" << endl;
        return;
    }
    length++;
    items.push_back(newItem);
    itemById[newItem.getId()] = &items.back();
    usedId[newItem.getId()] = 1;
}

void listOfItems::compressItems(){
    vector<Item> newItems;
    for(int i = 0; i < length; i++){
        if(items[i].getId() != -1){
            newItems.push_back(items[i]);
            items[i].getId();
        }
    }
    items = newItems;
}

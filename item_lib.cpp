#include<item_lib.h>
#include<bits/stdc++.h>
using namespace std;
Item::Item(){
    id = 0;
    cost = 0.0;
    name = "Item";
    description = "default";
}
Item::~Item(){

}
void Item::changeId(int newId){
    cout << "Id of item" << name << " changed from " << id << " to " << newId << endl;
    id = newId; 
}
void Item::changeName(string newName){
    cout << "Name of item" << name << " has changed to " << newName << endl;
    name = newName;
}
void Item::changeCost(double newCost){
    cout << "Cost of item " << name << " changed up to" << newCost << endl;
    cost = newCost;
}
void Item::changeDescription(string newDescription){
    cout << "Description of item " << name << " has changed" << endl;
    description = newDescription;
}
void Item::changeFileLocations(vector<string> newLocations){
    cout << "item " << name << "'s file paths has changed" << endl;
    fileLocations = newLocations;
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




listOfItems::listOfItems(){
    length = 0;
}
Item* listOfItems::findById(int id){
    for(int i = 0; i < length; i++){
        if(items[i].getId() == id) return &items[i];
    }
    return nullptr;
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
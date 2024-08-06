#include<bits/stdc++.h>
#include "cmd.h"
#include<tgbot/tgbot.h>
using namespace std;
void cmd::addItem(){
    cout << "Adding item started. After filling all information, you can choose to upload item, or to terminate the process." << endl;
    cout << "Enter ID of the item. ID of the item must be unique. You can't add items with equal IDs to data base. ID should be an integer from 0 to 2^31" << endl;
    int id;
    cin >> id;
    cout << "Enter name of the item." << endl;
    string name;
    getline(cin, name);
    getline(cin, name);
    cout << "Enter cost of the item (It can be float with dot. For example, 4.5)" << endl;
    double cost;
    cin >> cost;
    cout << "Enter amount of the item." << endl;
    int amount;
    cin >> amount;
    cout << "Enter a description of the item." << endl;
    string description;
    getline(cin, description);
    getline(cin, description);
    cout << "Finally, enter amount of the Item's pictures" << endl;
    int picAmount;
    cin >> picAmount;
    cout << "Now, you should enter " << picAmount << " paths to the images. For example, images/img.png" << endl;
    vector<string> fileLocations;
    for(int i = 0; i < picAmount; i++){
        string cur;
        if(!i) getline(cin, cur);
        getline(cin, cur);
        fileLocations.push_back(cur);
    }
    cout << "Are you sure to proceed adding Item? y/n." << endl;
    char c;
    cin >> c;
    if(c == 'y'){
        cout << "Adding an item." << endl;
        Item newItem(id, name, cost, amount, description, fileLocations);
        items.addItem(newItem);
    }
    else{
        cout << "Process terminated." << endl;
    }
}
void cmd::runCmd(){
    while(1){
        cout << "Waiting for the command..." << endl;
        string cmd;
        getline(cin, cmd);
        if(cmd == "help"){
            cout << "Here are some command with comments:" << endl;
            cout << "help - get help with commands" << endl;
            cout << "additem - add new item to data base" << endl;
        }
        if(cmd == "additem"){
            addItem();
        }
    }
}

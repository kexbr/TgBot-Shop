#include<bits/stdc++.h>
#include<tgbot/tgbot.h>
#include "item_lib.cpp"
using namespace std;
using namespace TgBot;
class cmd{
    public:
        Bot bot;
        listOfItems items;
        map<uint32_t, int> userList;
        cmd(string botToken): bot(botToken){}
        cmd() = delete;
        void runCmd();
        void addItem();
};
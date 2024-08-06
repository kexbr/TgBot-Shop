#include<bits/stdc++.h>
#include<tgbot/tgbot.h>
#include "cmd.cpp"
using namespace std;
using namespace TgBot;
int main(){
    cmd mainCmd("");
    thread th1([&mainCmd](){mainCmd.runCmd();});
    th1.join();
}
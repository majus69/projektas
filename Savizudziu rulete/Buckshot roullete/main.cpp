#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <windows.h>
#include <conio.h>
#include <chrono>
#include <thread>

using namespace std;

string vardas;
vector<string> zaidejai;
vector<string> daiktai = {"cigarette pack", "handcuffs", "hand saw", "beer", "magnifying glass"}, kulkos = {"blank", "live"}, placement = {"first", "second", "third"};
vector<int> laimejimaik = {0, 0};
int round_num = 0, laimeta = -1;

void refresh()
{
    cin.ignore();
    system("cls");
}
void gameover()
{
 cout << R"(
















                          ###########       ##########.  #######       #############    ########             #############   .##.  ###############.   ..###.######################
                      ##############################################################################    ##########################################################################
                    ####             ######             ####        ##       ##                 ###########             ####       ###       ##                 #.               ###.
                  #####   ##########   ##.   ##########   ##  ####     .####     ##############   #######   .#########    ## #####     ####     ##############     ############    #####
                  ####  ####      ####     ####     #####    .###### #######     ####             ####### #####     #####    #####     #####    #####              ####      ####    ####
                 #####  ####      ###      ####      ####     ##############     ####             ####### #####     #####    #####     ####.    #####              ####      ####    ####.
                 #####  ####    ######     ####     .####     ##############     ############   ######### #####     #####    #####     #####    ############    #  ##############    #####
                  ####  ####    ######     ##############     ####  ## #####     ############   ######### .####     #####     #####   #####     ############    ## ##############    #####
                  ####  ####      ####     ##############     ####     #####     ####           ######### #####     #####   #  ##### ####       #####           ## ####      ####    #####
                  ####  #######.######     ####     .####     ####     #####     ####.....##.#  #########  ####.#...####    ##.  ######         #####..  .##..  #  ####      ####    ####
                  ####    ########  ##     ####     #####     ####     #####     ##############   #######   ###########     ####   ###       ## ##############     ####      ####    ####
                   .####                                                                          #########                 ######         ####                                      ###.
                     #####                #       .##       ##       ###       .#                 #####   ###             #########      ########                 ##       ##        ###
                      ###############################################################################      #############################################################################
                         #########################################################################.         .##############      ###.#####     #########.      #######    ############.
                                               #.                            #




)";


Sleep(3500);
}
void round2a(){
    cout << R"(

 /$$$$$$$                                      /$$         /$$
| $$__  $$                                    | $$        | $$
| $$  \ $$  /$$$$$$  /$$   /$$ /$$$$$$$   /$$$$$$$       /$$$$$$   /$$  /$$  /$$  /$$$$$$
| $$$$$$$/ /$$__  $$| $$  | $$| $$__  $$ /$$__  $$      |_  $$_/  | $$ | $$ | $$ /$$__  $$
| $$__  $$| $$  \ $$| $$  | $$| $$  \ $$| $$  | $$        | $$    | $$ | $$ | $$| $$  \ $$
| $$  \ $$| $$  | $$| $$  | $$| $$  | $$| $$  | $$        | $$ /$$| $$ | $$ | $$| $$  | $$
| $$  | $$|  $$$$$$/|  $$$$$$/| $$  | $$|  $$$$$$$        |  $$$$/|  $$$$$/$$$$/|  $$$$$$/
|__/  |__/ \______/  \______/ |__/  |__/ \_______/         \___/   \_____/\___/  \______/






==========================================================================================
                           Both of the players have 5 lives
                        Items are given out each time a gun is loaded
==========================================================================================





)";

}
void randItems(vector<string> &inventory1, vector<string> &inventory2)
{
    srand(time(0));
    int randIndex = rand() % 2;

 if(round_num == 2)
 {
    if(randIndex == 0){
        for(int i = 0; i < 2; i++){
            int randIndex1 = rand() % 5;
            int randIndex2 = rand() % 5;
            inventory1.push_back(daiktai[randIndex1]);
            inventory2.push_back(daiktai[randIndex2]);

        }

    }
    else{
        for(int i = 0; i < 3; i++){
            int randIndex1 = rand() % 5;
            int randIndex2 = rand() % 5;
            inventory1.push_back(daiktai[randIndex1]);
            inventory2.push_back(daiktai[randIndex2]);

        }
    }
 }
 else if(round_num == 3)
 {
     if(randIndex == 0){
        for(int i = 0; i < 3; i++){
            int randIndex1 = rand() % 5;
            int randIndex2 = rand() % 5;
            inventory1.push_back(daiktai[randIndex1]);
            inventory2.push_back(daiktai[randIndex2]);

        }

    }
    else{
        for(int i = 0; i < 4; i++){
            int randIndex1 = rand() % 5;
            int randIndex2 = rand() % 5;
            inventory1.push_back(daiktai[randIndex1]);
            inventory2.push_back(daiktai[randIndex2]);

        }
    }
 }
}
void laimejimai (int n){

laimeta++;

if(n == 0){

    laimejimaik[0]++;
    refresh();
    system("cmd/c\"color F0\"");
    Sleep(1000);
    system("cmd/c\"color 0F\"");

if (laimejimaik[0] == 2){

    gameover();
    system("cls");

    cout << R"(



     XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
 XXXXXXXXXXXXXXXXXX         XXXXXXXX
XXXXXXXXXXXXXXXX              XXXXXXX
XXXXXXXXXXXXX                   XXXXX
 XXX     _________ _________     XXX
  XX    I  _xxxxx I xxxxx_  I    XX
 ( X----I         I         I----X )
( +I    I      00 I 00      I    I+ )
 ( I    I    __0  I  0__    I    I )
  (I    I______ /   \_______I    I)
   I           ( ___ )           I
   I    _  :::::::::::::::  _    i
    \    \___ ::::::::: ___/    /
     \_      \_________/      _/
       \        \___,        /
         \                 /
          |\             /|
          |  \_________/  |



)";


    cout << "The winner of the game is " << zaidejai[0] << "!!!\n\n\n";
    Sleep(4000);
    system("cls");


}
else
{

cout << R"(



     XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
 XXXXXXXXXXXXXXXXXX         XXXXXXXX
XXXXXXXXXXXXXXXX              XXXXXXX
XXXXXXXXXXXXX                   XXXXX
 XXX     _________ _________     XXX
  XX    I  _xxxxx I xxxxx_  I    XX
 ( X----I         I         I----X )
( +I    I      00 I 00      I    I+ )
 ( I    I    __0  I  0__    I    I )
  (I    I______ /   \_______I    I)
   I           ( ___ )           I
   I    _  :::::::::::::::  _    i
    \    \___ ::::::::: ___/    /
     \_      \_________/      _/
       \        \___,        /
         \                 /
          |\             /|
          |  \_________/  |



)";


    cout << "The winner of the " << placement[laimeta] << " round is " << zaidejai[0] << "!!!\n\n\n";
    Sleep(4000);
    system("cls");
    }
}
else if(n == 1){

        laimejimaik[1]++;
        refresh();
        system("cmd/c\"color F0\"");
        Sleep(1000);
        system("cmd/c\"color 0F\"");


    if (laimejimaik[1] == 2){
            gameover();
            system("cls");
cout << R"(



                         ____...
             .-"--"""".__    `.
            |            `    |
  (         `._....------.._.:
   )         .()''        ``().
  '          () .=='  `===  `-.
   . )       (   -g)     g)
    )         )     /        J
   (          |.   /      . (
   $$         (.  (_'.   , )|`
   ||         |\`-....--'/  ' \
  /||.         \\ | | | /  /   \.
 //||(\         \`-===-'  '     \o.
.//7' |)         `. --   / (     OObaaaad888b.
(<<. / |     .a888b`.__.'d\     OO888888888888a.
 \  Y' |    .8888888aaaa88POOOOOO888888888888888.
  \  \ |   .888888888888888888888888888888888888b
   |   |  .d88888P88888888888888888888888b8888888.
   b.--d .d88888P8888888888888888a:f888888|888888b
   88888b 888888|8888888888888888888888888\8888888





)";
cout << "The winner of the game is " << zaidejai[1] << "!!!\n\n\n";
    Sleep(4000);
    system("cls");

    }
    else{
     cout << R"(



                         ____...
             .-"--"""".__    `.
            |            `    |
  (         `._....------.._.:
   )         .()''        ``().
  '          () .=='  `===  `-.
   . )       (   -g)     g)
    )         )     /        J
   (          |.   /      . (
   $$         (.  (_'.   , )|`
   ||         |\`-....--'/  ' \
  /||.         \\ | | | /  /   \.
 //||(\         \`-===-'  '     \o.
.//7' |)         `. --   / (     OObaaaad888b.
(<<. / |     .a888b`.__.'d\     OO888888888888a.
 \  Y' |    .8888888aaaa88POOOOOO888888888888888.
  \  \ |   .888888888888888888888888888888888888b
   |   |  .d88888P88888888888888888888888b8888888.
   b.--d .d88888P8888888888888888a:f888888|888888b
   88888b 888888|8888888888888888888888888\8888888





)";
cout << "The winner of the " << placement[laimeta] << " round is " << zaidejai[1] << "!!!\n\n\n";
    Sleep(4000);
    system("cls");
    }
}

}

void apkaba1(vector<string> &apkaba, int &blanks, int &lives) {

    srand(time(0));
    int randIndex = rand() % 2;

    if(round_num == 1){
        if (randIndex == 0) {
        for (int i = 0; i < 3; i++) {
            int randIndex = rand() % 2;
            apkaba.push_back(kulkos[randIndex]);

            if (randIndex == 0) {
                blanks++;
            } else {
                lives++;
            }
        }

        if (blanks == 3) {
            apkaba.pop_back();
            apkaba.push_back(kulkos[1]);
            blanks--;
            lives++;
            random_shuffle (apkaba.begin(), apkaba.end());

        } if (lives == 3) {
            apkaba.pop_back();
            apkaba.push_back(kulkos[0]);
            blanks++;
            lives--;
            random_shuffle (apkaba.begin(), apkaba.end());
        }
    } else {
        for (int i = 0; i < 4; i++) {
            int randIndex = rand() % 2;
            apkaba.push_back(kulkos[randIndex]);

            if (randIndex == 0) {
                blanks++;
            } else {
                lives++;
            }
        }

        if (blanks == 4) {
            apkaba.pop_back();
            apkaba.push_back(kulkos[1]);
            blanks--;
            lives++;
            random_shuffle (apkaba.begin(), apkaba.end());

        } if (lives == 4) {
            apkaba.pop_back();
            apkaba.push_back(kulkos[0]);
            blanks++;
            lives--;
            random_shuffle (apkaba.begin(), apkaba.end());
        }
    }
  } if(round_num == 2){
      if(randIndex == 0){
          for(int i = 0; i < 5; i++){
              int randIndex = rand() % 2;
              apkaba.push_back(kulkos[randIndex]);
              if (randIndex == 0) {
                blanks++;
                if(blanks == 4){
                    break;
                }
            } else {
                lives++;
                if(lives == 5){
                    break;
                }
            }

          } if(blanks == 4){
                apkaba.pop_back();
                blanks--;
                for(int j = 0; j < 2; j++){
                apkaba.push_back(kulkos[1]);
                lives++;
            }
            random_shuffle (apkaba.begin(), apkaba.end());

          }
            if (lives == 5){
                apkaba.pop_back();
                apkaba.push_back(kulkos[0]);
                lives--;
                blanks++;
                random_shuffle (apkaba.begin(), apkaba.end());
          }
    }
    else {
        for(int i = 0; i < 6; i++){
              int randIndex = rand() % 2;
              apkaba.push_back(kulkos[randIndex]);
              if (randIndex == 0) {
                blanks++;
                if(blanks == 5){
                    break;
                }
            } else {
                lives++;
                if(lives == 6){
                    break;
                }
            }
        }
        if(blanks == 5){
            apkaba.pop_back();
            blanks--;
            for(int i = 0; i < 2; i++){
                 apkaba.push_back(kulkos[1]);
                 lives++;
            }
             random_shuffle (apkaba.begin(), apkaba.end());
        }
        if (lives == 6) {

            apkaba.pop_back();
            apkaba.push_back(kulkos[0]);
            lives--;
            blanks++;
            random_shuffle (apkaba.begin(), apkaba.end());

        }
     }
   }
   if(round_num == 3)
   {
       if(randIndex == 0){
          for(int i = 0; i < 7; i++){
              int randIndex = rand() % 2;
              apkaba.push_back(kulkos[randIndex]);
              if (randIndex == 0) {
                blanks++;
                if(blanks == 4 && lives == 0){
                    break;
                }
            } else {
                lives++;
                if(lives == 5 && blanks == 0){
                    break;
                }
            }

          } if(blanks == 4 && lives == 0){
                for(int j = 0; j < 3; j++){
                apkaba.push_back(kulkos[1]);
                lives++;
            }
            random_shuffle (apkaba.begin(), apkaba.end());

          }
            if (lives == 5 && blanks == 0){
                for (int i = 0; i < 2; i++)
                {
                    apkaba.push_back(kulkos[0]);
                    blanks++;
                }
                random_shuffle (apkaba.begin(), apkaba.end());
          }
    }
    else {
        for(int i = 0; i < 8; i++){
              int randIndex = rand() % 2;
              apkaba.push_back(kulkos[randIndex]);
              if (randIndex == 0) {
                blanks++;
                if(blanks == 5 && lives == 0){
                    break;
                }
            } else {
                lives++;
                if(lives == 6 && blanks == 0){
                    break;
                }
            }
        }
        if(blanks == 5 && lives == 0){
            for(int i = 0; i < 3; i++){
                 apkaba.push_back(kulkos[1]);
                 lives++;
            }
             random_shuffle (apkaba.begin(), apkaba.end());
        }
        if (lives == 6 && blanks == 0) {

            for(int i = 0; i < 2; i++)
            {
                apkaba.push_back(kulkos[0]);
                blanks++;
            }
            random_shuffle (apkaba.begin(), apkaba.end());

        }
     }
   }
}
void round3(){

    round_num++;
    vector<string> apkaba;
    vector<string> inventory1, inventory2;
    int randIndex = rand() % 2, blanks = 0, lives = 0, a = 0, b = 0;
    int gyvybes0 = 8, gyvybes1 = 8, count1 = 0, count2 = 0, count3 = 0;
    char j;

    srand(time(0));

    apkaba1(apkaba, blanks, lives);

    cout << R"(

/$$$$$$$                                      /$$         /$$     /$$
| $$__  $$                                    | $$        | $$    | $$
| $$  \ $$  /$$$$$$  /$$   /$$ /$$$$$$$   /$$$$$$$       /$$$$$$  | $$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$
| $$$$$$$/ /$$__  $$| $$  | $$| $$__  $$ /$$__  $$      |_  $$_/  | $$__  $$ /$$__  $$ /$$__  $$ /$$__  $$
| $$__  $$| $$  \ $$| $$  | $$| $$  \ $$| $$  | $$        | $$    | $$  \ $$| $$  \__/| $$$$$$$$| $$$$$$$$
| $$  \ $$| $$  | $$| $$  | $$| $$  | $$| $$  | $$        | $$ /$$| $$  | $$| $$      | $$_____/| $$_____/
| $$  | $$|  $$$$$$/|  $$$$$$/| $$  | $$|  $$$$$$$        |  $$$$/| $$  | $$| $$      |  $$$$$$$|  $$$$$$$
|__/  |__/ \______/  \______/ |__/  |__/ \_______/         \___/  |__/  |__/|__/       \_______/ \_______/






==========================================================================================================
                                Both of the players have 8 lives
                            Items are given out each time a gun is loaded
==========================================================================================================





)";

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    randItems(inventory1, inventory2);

while (gyvybes0 > 0 && gyvybes1 > 0) {

   system("cmd/c\"color 0F\"");
   int m = 1;

    if(blanks == 0 && lives == 0){
             apkaba1(apkaba, blanks, lives);
             randItems(inventory1, inventory2);
             SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
             cout << "The shotgun has been loaded with new bullets:\n";
             SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        }

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << "There are " << blanks << " blanks and " << lives << " lives in the magazine\n";
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);


    if (randIndex == 0) {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

            cout << zaidejai[0] << " turn\n";

            if(inventory1.size() != 0){
                cout << zaidejai[0] << " has: ";

            for(int i = 0; i < inventory1.size(); i++){

                    if(i == inventory1.size()-1){
                        cout << inventory1[i];
                    }

                    else{
                        cout << inventory1[i] << ", ";
                    }
                }
                cout << "\n";
            }
            else{
                    cout << zaidejai[0] << " doesn't have any items left.\n";
                    m = 0;
            }
        }
        else{
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

            cout<< zaidejai[1] << " turn\n";

            if(inventory2.size() != 0){
                cout << zaidejai[1] << " has: ";


            for(int i = 0; i < inventory2.size(); i++){

                    if(i == inventory2.size()-1){
                        cout << inventory2[i];
                    }

                    else{
                        cout << inventory2[i] << ", ";
                    }
                }
                cout << "\n";
            }
            else{
                    cout << zaidejai[1] << " doesn't have any items left\n";
                    m = 0;
            }
        }
         SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

        if(randIndex == 0){
                while(m != 0){

                if(count3 == 3)
                {
                    cout << zaidejai[0] << " can't use any more items\n";
                    count3 = 0;
                    break;
                }

                if(inventory1.size() == 0){
                  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                  cout << zaidejai[0] << " doesn't have any items left\n";
                  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                  break;
                }

                else{

                cout << "Enter the number of item you want to use (max. 3 times). If you dont want to use any of your items enter 0: ";
                cin >> m;

                if (m == 0){

                    if(count3 == 0){
                        cout << zaidejai[0] << " didn't use any items\n";
                        break;
                    }
                    else{

                        break;
                    }
                }

                else{
                    cout << zaidejai[0] << " used " << inventory1[m-1] << endl;

                            if(inventory1[m-1] == daiktai[0]){
                                gyvybes0++;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << zaidejai[0] << " now has " << gyvybes0 << " lives" <<endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            }
                            if(inventory1[m-1] == daiktai[1]){

                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << zaidejai[1] << " skips one turn" <<   endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                a = 1;

                            }
                            if(inventory1[m-1] == daiktai[2]){

                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << "Shotgun deals double damage" << endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                b = 1;

                            }
                            if(inventory1[m-1] == daiktai[3]){
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout <<"A " << apkaba[0] << " was racked" << endl;
                                if(apkaba[0] == kulkos[0])
                                {
                                    blanks--;
                                }
                                else if(apkaba[0] == kulkos[1])
                                {
                                    lives--;
                                }
                                apkaba.erase(apkaba.begin() + 0);
                                if(apkaba.size() == 0){
                                    apkaba1(apkaba, blanks, lives);
                                    randItems(inventory1, inventory2);
                                }
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                cout << "There are " << blanks << " blanks and " << lives << " lives in the magazine\n";
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            }
                            if(inventory1[m-1] == daiktai[4]){
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << "The next bullet in the chamber is " << apkaba[0] <<endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            }

                    inventory1.erase(inventory1.begin()+(m-1));

                    if(inventory1.size() == 0){
                           continue;
                       }

                    else {

                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                        cout << zaidejai[0] << " now has: ";
                        for(int i = 0; i < inventory1.size(); i++){
                            if(i != inventory1.size()-1){
                                cout << inventory1[i] << ", ";
                            } else {
                                cout << inventory1[i] << " ";
                            }
                        }
                        cout << "left\n";
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

                        }
                    }
                }
                count3++;
            }
        }
        else{
            while(m != 0){

                if(count3 == 3)
                {
                    cout << zaidejai[1] << " can't use any more items\n";
                    count3 = 0;
                    break;
                }
                if(inventory2.size() == 0){
                  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                  cout << zaidejai[1] << " doesn't have any items left\n";
                  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                  break;
                }

                else{

                cout << "Enter the number of item you want to use (max. 3 times). If you dont want to use any of your items enter 0: ";
                cin >> m;

                if (m == 0){
                    if(count3 == 0){
                        cout << zaidejai[1] << " didn't use any items\n";
                        break;
                    }
                    else{

                        break;
                    }
                }

                else{
                    cout << zaidejai[1] << " used " << inventory2[m-1] << endl;

                            if(inventory2[m-1] == daiktai[0]){
                                gyvybes1++;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << zaidejai[1] << " now has " << gyvybes1 << " lives" <<endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            }
                            if(inventory2[m-1] == daiktai[1]){

                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << zaidejai[0] << " skips one turn" <<   endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                a = 1;

                            }
                            if(inventory2[m-1] == daiktai[2]){

                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << "Shotgun deals double damage" << endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                b = 1;

                            }
                            if(inventory2[m-1] == daiktai[3]){
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout <<"A " << apkaba[0] << " was racked" << endl;
                                if(apkaba[0] == kulkos[0])
                                {
                                    blanks--;
                                }
                                else if(apkaba[0] == kulkos[1])
                                {
                                    lives--;
                                }
                                apkaba.erase(apkaba.begin() + 0);
                                if(apkaba.size() == 0){
                                    apkaba1(apkaba, blanks, lives);
                                    randItems(inventory1, inventory2);
                                }
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                cout << "There are " << blanks << " blanks and " << lives << " lives in the magazine\n";
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

                            }
                            if(inventory2[m-1] == daiktai[4]){
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << "The next bullet in the chamber is " << apkaba[0] <<endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            }
                    inventory2.erase(inventory2.begin()+(m-1));

                    if(inventory2.size() == 0){
                           continue;
                       }

                    else {

                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                    cout << zaidejai[1] << " now has: ";
                        for(int i = 0; i < inventory2.size(); i++){
                        if(i != inventory2.size()-1){
                                cout << inventory2[i] << ", ";
                            }
                            else{
                                cout << inventory2[i] << " ";
                            }
                        }
                        cout << "left\n";
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                    }

                }

            }
            count3++;
        }
     }
        count3 = 0;

        cout << "Type 'q' if you want to shoot yourself or type 'w' if you want to shoot the other player: ";
        cin >> j;

        if (randIndex == 0) {
            if (j == 'q') {
                if (apkaba[0] == kulkos[1]) {
                    if(b == 1){
                        gyvybes0 = gyvybes0 - 2;
                         b = 0;
                    }
                    else {
                        gyvybes0--;
                    }
                    if(gyvybes0 < 0)
                    {
                        gyvybes0 = 0;
                        break;
                    }
                    cout << zaidejai[0] << " shot himself with a " << kulkos[1] << "\n";
                    cout << "Now " << zaidejai[0] << " have " << gyvybes0 << " lives left" << "\n\n\n\n\n\n";
                    apkaba.erase(apkaba.begin());
                    lives--;
                    if(a == 1){
                        randIndex = 0;
                        a = 0;
                    }
                    else {
                        randIndex = 1;
                    }
                    count1 = 0;
                    system("cmd/c\"color 4F\"");
                    Sleep(150);
                    system("cmd/c\"color 0F\"");
                    continue;

                } else {
                    cout << zaidejai[0] << " shot himself with a " << kulkos[0] << "\n";
                    cout << "Now " << zaidejai[0] << " have " << gyvybes0 << " lives left" << "\n\n\n\n\n\n";
                    apkaba.erase(apkaba.begin());
                    blanks--;
                    if(b == 1){
                        b = 0;
                    }

                    if(a != 1){
                        count1++;
                    }
                    else{
                      a = 0;
                    }

                    if(count1 == 2){
                        randIndex = 1;
                        count1 = 0;
                    }
                    else if(count1 < 2){
                        randIndex = 0;
                    }
                    continue;
                }
            }

            if (j == 'w') {
                if (apkaba[0] == kulkos[1]) {
                    if(b == 1){
                        gyvybes1 = gyvybes1 - 2;
                        b = 0;
                    }
                    else {
                        gyvybes1--;
                    }
                    if(gyvybes1 < 0)
                    {
                        gyvybes1 = 0;
                        break;
                    }
                    cout << zaidejai[0] << " shot " << zaidejai[1] << " with a " << kulkos[1] << "\n";
                    cout << "Now " << zaidejai[1] << " have " << gyvybes1 << " lives left" << "\n\n\n\n\n\n";
                    lives--;
                    apkaba.erase(apkaba.begin());
                    if(a == 1){
                        randIndex = 0;
                        a = 0;
                    }
                    else {
                        randIndex = 1;
                    }
                    count1 = 0;
                    system("cmd/c\"color F0\"");
                    Sleep(150);
                    system("cmd/c\"color 0F\"");
                    continue;

                } else {

                    cout << zaidejai[0] << " shot " << zaidejai[1] << " with a " << kulkos[0] << "\n";
                    cout << "Now " << zaidejai[1] << " have " << gyvybes1 << " lives left" << "\n\n\n\n\n\n";
                    blanks--;
                    if(b == 1){
                        b = 0;
                    }
                    apkaba.erase(apkaba.begin());
                    if(a == 1){
                        randIndex = 0;
                        a = 0;
                    }
                    else {
                        randIndex = 1;
                    }
                    count1 = 0;
                    continue;
                }
            }
        }

        if (randIndex == 1) {
            if (j == 'q') {
                if (apkaba[0] == kulkos[1]) {

                    if(b == 1){
                        gyvybes1 -= 2;
                         b = 0;

                    }
                    else {
                        gyvybes1--;
                    }
                    if(gyvybes1 < 0)
                    {
                        gyvybes1 = 0;
                        break;
                    }
                    cout << zaidejai[1] << " shot himself with a " << kulkos[1] << "\n";
                    cout << "Now " << zaidejai[1] << " have " << gyvybes1 << " lives left" << "\n\n\n\n\n\n";
                    apkaba.erase(apkaba.begin());
                    lives--;
                    if(a == 1){
                        randIndex = 1;
                        a = 0;
                    }
                    else {
                        randIndex = 0;
                    }
                    count2 = 0;
                    system("cmd/c\"color 4F\"");
                    Sleep(150);
                    system("cmd/c\"color 0F\"");
                    continue;

                } else {

                    cout << zaidejai[1] << " shot himself with a " << kulkos[0] << "\n";
                    cout << "Now " << zaidejai[1] << " have " << gyvybes1 << " lives left" << "\n\n\n\n\n\n";
                    apkaba.erase(apkaba.begin());
                    blanks--;
                    if(b == 1){
                        b = 0;
                    }
                    if(a != 1){
                        count2++;
                    }
                    else{
                        a = 0;
                    }
                    if(count2 == 2){
                        randIndex = 0;
                        count2 = 0;
                    }
                    else if(count2 < 2){
                        randIndex = 1;
                    }
                    continue;
                }
            }

            if (j == 'w') {
                if (apkaba[0] == kulkos[1]) {
                    if(b == 1){
                        gyvybes0 -= 2;
                        b = 0;

                    }
                    else {
                        gyvybes0--;
                    }
                    if(gyvybes0 < 0)
                    {
                        gyvybes0 = 0;
                        break;
                    }
                    cout << zaidejai[1] << " shot " << zaidejai[0] << " with a " << kulkos[1] << "\n";
                    cout << "Now " << zaidejai[0] << " have " << gyvybes0 << " lives left" << "\n\n\n\n\n\n";
                    lives--;
                    apkaba.erase(apkaba.begin());
                    if(a == 1){
                        randIndex = 1;
                        a = 0;
                    }
                    else {
                        randIndex = 0;
                    }
                    count2 = 0;
                    system("cmd/c\"color F0\"");
                    Sleep(150);
                    system("cmd/c\"color 0F\"");
                    continue;

                } else {

                    cout << zaidejai[1] << " shot " << zaidejai[0] << " with a " << kulkos[0] << "\n";
                    cout << "Now " << zaidejai[0] << " have " << gyvybes0 << " lives left" << "\n\n\n\n\n\n";
                    blanks--;
                    if(b == 1){
                        b = 0;
                    }
                    apkaba.erase(apkaba.begin());
                    if(a == 1){
                        randIndex = 1;
                        a = 0;
                    }
                    else {
                        randIndex = 0;
                    }
                    count2 = 0;
                    continue;
                }
            }
        }

    }
    if(gyvybes0 == 0)
    {
        int n = 1;
        laimejimai(n);
    }
        if(gyvybes1 == 0)
    {
         int n = 0;
         laimejimai(n);
    }


}
void round2(){


    round_num++;
    vector<string> apkaba;
    vector<string> inventory1, inventory2;
    int randIndex, blanks = 0, lives = 0, a = 0, b = 0;
    char j;

    apkaba1(apkaba, blanks, lives);

    round2a();

    int gyvybes0 = 5, gyvybes1 = 5, count1 = 0, count2 = 0, count3 = 0;

    for(int i = 0; i < 2; i++){
        if(laimejimaik[i] == 0){
            randIndex = i;
        }
    }
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    randItems(inventory1, inventory2);

    while (gyvybes0 > 0 && gyvybes1 > 0) {

   system("cmd/c\"color 0F\"");

    int m = 1;

    if(blanks == 0 && lives == 0){
             apkaba1(apkaba, blanks, lives);
             randItems(inventory1, inventory2);
             SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
             cout << "The shotgun has been loaded with new bullets:\n";
             SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        }

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << "There are " << blanks << " blanks and " << lives << " lives in the magazine\n";
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);


    if (randIndex == 0) {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

            cout << zaidejai[0] << " turn\n";

            if(inventory1.size() != 0){
                cout << zaidejai[0] << " has: ";

            for(int i = 0; i < inventory1.size(); i++){

                    if(i == inventory1.size()-1){
                        cout << inventory1[i];
                    }

                    else{
                        cout << inventory1[i] << ", ";
                    }
                }
                cout << "\n";
            }
            else{
                    cout << zaidejai[0] << " doesn't have any items left.\n";
                    m = 0;
            }
        }
        else{
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

            cout<< zaidejai[1] << " turn\n";

            if(inventory2.size() != 0){
                cout << zaidejai[1] << " has: ";


            for(int i = 0; i < inventory2.size(); i++){

                    if(i == inventory2.size()-1){
                        cout << inventory2[i];
                    }

                    else{
                        cout << inventory2[i] << ", ";
                    }
                }
                cout << "\n";
            }
            else{
                    cout << zaidejai[1] << " doesn't have any items left\n";
                    m = 0;
            }
        }
         SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

        if(randIndex == 0){
                while(m != 0){

                if(count3 == 3)
                {
                    cout << zaidejai[0] << " can't use any more items\n";
                    count3 = 0;
                    break;
                }

                if(inventory1.size() == 0){
                  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                  cout << zaidejai[0] << " doesn't have any items left\n";
                  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                  break;
                }

                else{

                cout << "Enter the number of item you want to use (max. 3 times). If you dont want to use any of your items enter 0: ";
                cin >> m;

                if (m == 0){

                    if(count3 == 0){
                        cout << zaidejai[0] << " didn't use any items\n";
                        break;
                    }
                    else{

                        break;
                    }
                }

                else{
                    cout << zaidejai[0] << " used " << inventory1[m-1] << endl;

                            if(inventory1[m-1] == daiktai[0]){
                                gyvybes0++;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << zaidejai[0] << " now has " << gyvybes0 << " lives" <<endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            }
                            if(inventory1[m-1] == daiktai[1]){

                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << zaidejai[1] << " skips one turn" <<   endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                a = 1;

                            }
                            if(inventory1[m-1] == daiktai[2]){

                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << "Shotgun deals double damage" << endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                b = 1;

                            }
                            if(inventory1[m-1] == daiktai[3]){
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout <<"A " << apkaba[0] << " was racked" << endl;
                                if(apkaba[0] == kulkos[0])
                                {
                                    blanks--;
                                }
                                else if(apkaba[0] == kulkos[1])
                                {
                                    lives--;
                                }
                                apkaba.erase(apkaba.begin() + 0);
                                if(apkaba.size() == 0){
                                    apkaba1(apkaba, blanks, lives);
                                    randItems(inventory1, inventory2);
                                }
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                cout << "There are " << blanks << " blanks and " << lives << " lives in the magazine\n";
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            }
                            if(inventory1[m-1] == daiktai[4]){
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << "The next bullet in the chamber is " << apkaba[0] <<endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            }

                    inventory1.erase(inventory1.begin()+(m-1));

                    if(inventory1.size() == 0){
                           continue;
                       }

                    else {

                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                        cout << zaidejai[0] << " now has: ";
                        for(int i = 0; i < inventory1.size(); i++){
                            if(i != inventory1.size()-1){
                                cout << inventory1[i] << ", ";
                            } else {
                                cout << inventory1[i] << " ";
                            }
                        }
                        cout << "left\n";
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

                        }
                    }
                }
                count3++;
            }
        }
        else{
            while(m != 0){

                if(count3 == 3)
                {
                    cout << zaidejai[1] << " can't use any more items\n";
                    count3 = 0;
                    break;
                }
                if(inventory2.size() == 0){
                  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                  cout << zaidejai[1] << " doesn't have any items left\n";
                  SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                  break;
                }

                else{

                cout << "Enter the number of item you want to use (max. 3 times). If you dont want to use any of your items enter 0: ";
                cin >> m;

                if (m == 0){
                    if(count3 == 0){
                        cout << zaidejai[1] << " didn't use any items\n";
                        break;
                    }
                    else{

                        break;
                    }
                }

                else{
                    cout << zaidejai[1] << " used " << inventory2[m-1] << endl;

                            if(inventory2[m-1] == daiktai[0]){
                                gyvybes1++;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << zaidejai[1] << " now has " << gyvybes1 << " lives" <<endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            }
                            if(inventory2[m-1] == daiktai[1]){

                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << zaidejai[0] << " skips one turn" <<   endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                a = 1;

                            }
                            if(inventory2[m-1] == daiktai[2]){

                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << "Shotgun deals double damage" << endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                b = 1;

                            }
                            if(inventory2[m-1] == daiktai[3]){
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout <<"A " << apkaba[0] << " was racked" << endl;
                                if(apkaba[0] == kulkos[0])
                                {
                                    blanks--;
                                }
                                else if(apkaba[0] == kulkos[1])
                                {
                                    lives--;
                                }
                                apkaba.erase(apkaba.begin() + 0);
                                if(apkaba.size() == 0){
                                    apkaba1(apkaba, blanks, lives);
                                    randItems(inventory1, inventory2);
                                }
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                                cout << "There are " << blanks << " blanks and " << lives << " lives in the magazine\n";
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

                            }
                            if(inventory2[m-1] == daiktai[4]){
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                                cout << "The next bullet in the chamber is " << apkaba[0] <<endl;
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                            }
                    inventory2.erase(inventory2.begin()+(m-1));

                    if(inventory2.size() == 0){
                           continue;
                       }

                    else {

                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
                    cout << zaidejai[1] << " now has: ";
                        for(int i = 0; i < inventory2.size(); i++){
                        if(i != inventory2.size()-1){
                                cout << inventory2[i] << ", ";
                            }
                            else{
                                cout << inventory2[i] << " ";
                            }
                        }
                        cout << "left\n";
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                    }

                }

            }
            count3++;
        }
     }
        count3 = 0;

        cout << "Type 'q' if you want to shoot yourself or type 'w' if you want to shoot the other player: ";
        cin >> j;

        if (randIndex == 0) {
            if (j == 'q') {
                if (apkaba[0] == kulkos[1]) {
                    if(b == 1){
                        gyvybes0 = gyvybes0 - 2;
                         b = 0;
                    }
                    else {
                        gyvybes0--;
                    }
                    if(gyvybes0 < 0)
                    {
                        gyvybes0 = 0;
                        break;
                    }
                    cout << zaidejai[0] << " shot himself with a " << kulkos[1] << "\n";
                    cout << "Now " << zaidejai[0] << " have " << gyvybes0 << " lives left" << "\n\n\n\n\n\n";
                    apkaba.erase(apkaba.begin());
                    lives--;
                    if(a == 1){
                        randIndex = 0;
                        a = 0;
                    }
                    else {
                        randIndex = 1;
                    }
                    count1 = 0;
                    system("cmd/c\"color 4F\"");
                    Sleep(150);
                    system("cmd/c\"color 0F\"");
                    continue;

                } else {
                    cout << zaidejai[0] << " shot himself with a " << kulkos[0] << "\n";
                    cout << "Now " << zaidejai[0] << " have " << gyvybes0 << " lives left" << "\n\n\n\n\n\n";
                    apkaba.erase(apkaba.begin());
                    blanks--;
                    if(b == 1){
                        b = 0;
                    }

                    if(a != 1){
                        count1++;
                    }
                    else{
                      a = 0;
                    }

                    if(count1 == 2){
                        randIndex = 1;
                        count1 = 0;
                    }
                    else if(count1 < 2){
                        randIndex = 0;
                    }
                    continue;
                }
            }

            if (j == 'w') {
                if (apkaba[0] == kulkos[1]) {
                    if(b == 1){
                        gyvybes1 = gyvybes1 - 2;
                        b = 0;
                    }
                    else {
                        gyvybes1--;
                    }
                    if(gyvybes1 < 0)
                    {
                        gyvybes1 = 0;
                        break;
                    }
                    cout << zaidejai[0] << " shot " << zaidejai[1] << " with a " << kulkos[1] << "\n";
                    cout << "Now " << zaidejai[1] << " have " << gyvybes1 << " lives left" << "\n\n\n\n\n\n";
                    lives--;
                    apkaba.erase(apkaba.begin());
                    if(a == 1){
                        randIndex = 0;
                        a = 0;
                    }
                    else {
                        randIndex = 1;
                    }
                    count1 = 0;
                    system("cmd/c\"color F0\"");
                    Sleep(150);
                    system("cmd/c\"color 0F\"");
                    continue;

                } else {

                    cout << zaidejai[0] << " shot " << zaidejai[1] << " with a " << kulkos[0] << "\n";
                    cout << "Now " << zaidejai[1] << " have " << gyvybes1 << " lives left" << "\n\n\n\n\n\n";
                    blanks--;
                    if(b == 1){
                        b = 0;
                    }
                    apkaba.erase(apkaba.begin());
                    if(a == 1){
                        randIndex = 0;
                        a = 0;
                    }
                    else {
                        randIndex = 1;
                    }
                    count1 = 0;
                    continue;
                }
            }
        }

        if (randIndex == 1) {
            if (j == 'q') {
                if (apkaba[0] == kulkos[1]) {

                    if(b == 1){
                        gyvybes1 -= 2;
                         b = 0;

                    }
                    else {
                        gyvybes1--;
                    }
                    if(gyvybes1 < 0)
                    {
                        gyvybes1 = 0;
                        break;
                    }
                    cout << zaidejai[1] << " shot himself with a " << kulkos[1] << "\n";
                    cout << "Now " << zaidejai[1] << " have " << gyvybes1 << " lives left" << "\n\n\n\n\n\n";
                    apkaba.erase(apkaba.begin());
                    lives--;
                    if(a == 1){
                        randIndex = 1;
                        a = 0;
                    }
                    else {
                        randIndex = 0;
                    }
                    count2 = 0;
                    system("cmd/c\"color 4F\"");
                    Sleep(150);
                    system("cmd/c\"color 0F\"");
                    continue;

                } else {

                    cout << zaidejai[1] << " shot himself with a " << kulkos[0] << "\n";
                    cout << "Now " << zaidejai[1] << " have " << gyvybes1 << " lives left" << "\n\n\n\n\n\n";
                    apkaba.erase(apkaba.begin());
                    blanks--;
                    if(b == 1){
                        b = 0;
                    }
                    if(a != 1){
                        count2++;
                    }
                    else{
                        a = 0;
                    }
                    if(count2 == 2){
                        randIndex = 0;
                        count2 = 0;
                    }
                    else if(count2 < 2){
                        randIndex = 1;
                    }
                    continue;
                }
            }

            if (j == 'w') {
                if (apkaba[0] == kulkos[1]) {
                    if(b == 1){
                        gyvybes0 -= 2;
                        b = 0;

                    }
                    else {
                        gyvybes0--;
                    }
                    if(gyvybes0 < 0)
                    {
                        gyvybes0 = 0;
                        break;
                    }
                    cout << zaidejai[1] << " shot " << zaidejai[0] << " with a " << kulkos[1] << "\n";
                    cout << "Now " << zaidejai[0] << " have " << gyvybes0 << " lives left" << "\n\n\n\n\n\n";
                    lives--;
                    apkaba.erase(apkaba.begin());
                    if(a == 1){
                        randIndex = 1;
                        a = 0;
                    }
                    else {
                        randIndex = 0;
                    }
                    count2 = 0;
                    system("cmd/c\"color F0\"");
                    Sleep(150);
                    system("cmd/c\"color 0F\"");
                    continue;

                } else {

                    cout << zaidejai[1] << " shot " << zaidejai[0] << " with a " << kulkos[0] << "\n";
                    cout << "Now " << zaidejai[0] << " have " << gyvybes0 << " lives left" << "\n\n\n\n\n\n";
                    blanks--;
                    if(b == 1){
                        b = 0;
                    }
                    apkaba.erase(apkaba.begin());
                    if(a == 1){
                        randIndex = 1;
                        a = 0;
                    }
                    else {
                        randIndex = 0;
                    }
                    count2 = 0;
                    continue;
                }
            }
        }

    }
        if(gyvybes0 == 0)
    {
        int n = 1;
        laimejimai(n);
    }
        if(gyvybes1 == 0)
    {
         int n = 0;
         laimejimai(n);
    }


 }
void round1() {


    round_num++;
    vector<string> apkaba;
    int randIndex;
    int blanks = 0, lives = 0;
    char j;

    apkaba1(apkaba, blanks, lives);

    cout << R"(

 /$$$$$$$                                      /$$
| $$__  $$                                    | $$
| $$  \ $$  /$$$$$$  /$$   /$$ /$$$$$$$   /$$$$$$$        /$$$$$$  /$$$$$$$   /$$$$$$
| $$$$$$$/ /$$__  $$| $$  | $$| $$__  $$ /$$__  $$       /$$__  $$| $$__  $$ /$$__  $$
| $$__  $$| $$  \ $$| $$  | $$| $$  \ $$| $$  | $$      | $$  \ $$| $$  \ $$| $$$$$$$$
| $$  \ $$| $$  | $$| $$  | $$| $$  | $$| $$  | $$      | $$  | $$| $$  | $$| $$_____/
| $$  | $$|  $$$$$$/|  $$$$$$/| $$  | $$|  $$$$$$$      |  $$$$$$/| $$  | $$|  $$$$$$$
|__/  |__/ \______/  \______/ |__/  |__/ \_______/       \______/ |__/  |__/ \_______/




======================================================================================
                           Both of the players have 2 lives
======================================================================================





)";

    int gyvybes0 = 2, gyvybes1 = 2, count1 = 0, count2 = 0;

    srand(time(0));

    randIndex = rand() % 2;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    while (gyvybes0 != 0 && gyvybes1 != 0) {

        system("cmd/c\"color 0F\"");

        if(blanks == 0 && lives == 0)
        {
             apkaba1(apkaba, blanks, lives);
             cout << "The shotgun has been loaded with new bullets:\n\n\n\n\n";


        }

        cout << "There are " << blanks << " blanks and " << lives << " lives in the magazine\n";

        if (randIndex == 0) {
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << zaidejai[0] << " turn\n";
        }
        else{
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout<< zaidejai[1] << " turn\n";
        }

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);

        cout << "Type 'q' if you want to shoot yourself or type 'w' if you want to shoot the other player: ";
        cin >> j;
        cout << endl;

        if (randIndex == 0) {
            if (j == 'q') {
                if (apkaba[0] == kulkos[1]) {
                    gyvybes0--;
                    cout << zaidejai[0] << " shot himself with a " << kulkos[1] << "\n";
                    cout << "Now " << zaidejai[0] << " have " << gyvybes0 << " lives left" << "\n\n\n\n\n";
                    apkaba.erase(apkaba.begin());
                    lives--;
                    randIndex = 1;
                    count1 = 0;
                    system("cmd/c\"color 4F\"");
                    Sleep(150);
                    system("cmd/c\"color 0F\"");
                    continue;

                } else {
                    cout << zaidejai[0] << " shot himself with a " << kulkos[0] << "\n";
                    cout << "Now " << zaidejai[0] << " have " << gyvybes0 << " lives left" << "\n\n\n\n\n";
                    apkaba.erase(apkaba.begin());
                    blanks--;
                    count1++;
                    if(count1 == 2){
                        randIndex = 1;
                        count1 = 0;
                    }
                    else if(count1 < 2){
                        randIndex = 0;
                    }
                    continue;
                }
            }

            if (j == 'w') {
                if (apkaba[0] == kulkos[1]) {
                    gyvybes1--;
                    cout << zaidejai[0] << " shot " << zaidejai[1] << " with a " << kulkos[1] << "\n";
                    cout << "Now " << zaidejai[1] << " have " << gyvybes1 << " lives left" << "\n\n\n\n\n";
                    lives--;
                    apkaba.erase(apkaba.begin());
                    randIndex = 1;
                    system("cmd/c\"color F0\"");
                    Sleep(150);
                    count1 = 0;
                    system("cmd/c\"color 0F\"");
                    continue;

                } else {
                    cout << zaidejai[0] << " shot " << zaidejai[1] << " with a " << kulkos[0] << "\n";
                    cout << "Now " << zaidejai[1] << " have " << gyvybes1 << " lives left" << "\n\n\n\n\n";
                    blanks--;
                    apkaba.erase(apkaba.begin());
                    randIndex = 1;
                    count1 = 0;
                    continue;
                }
            }
        }

        if (randIndex == 1) {
            if (j == 'q') {
                if (apkaba[0] == kulkos[1]) {
                    gyvybes1--;
                    cout << zaidejai[1] << " shot himself with a " << kulkos[1] << "\n";
                    cout << "Now " << zaidejai[1] << " have " << gyvybes1 << " lives left" << "\n\n\n\n\n";
                    apkaba.erase(apkaba.begin());
                    lives--;
                    randIndex = 0;
                    count2  = 0;
                    system("cmd/c\"color 4F\"");
                    Sleep(150);
                    system("cmd/c\"color 0F\"");
                    continue;

                } else {
                    cout << zaidejai[1] << " shot himself with a " << kulkos[0] << "\n";
                    cout << "Now " << zaidejai[1] << " have " << gyvybes1 << " lives left" << "\n\n\n\n\n";
                    apkaba.erase(apkaba.begin());
                    blanks--;
                    count2++;
                    if(count2 == 2){
                        randIndex = 0;
                        count2 = 0;
                    }
                    else if(count2 < 2){
                        randIndex = 1;
                    }
                    continue;
                }
            }

            if (j == 'w') {
                if (apkaba[0] == kulkos[1]) {
                    gyvybes0--;
                    cout << zaidejai[1] << " shot " << zaidejai[0] << " with a " << kulkos[1] << "\n";
                    cout << "Now " << zaidejai[0] << " have " << gyvybes0 << " lives left" << "\n\n\n\n\n";
                    lives--;
                    count2 = 0;
                    apkaba.erase(apkaba.begin());
                    randIndex = 0;
                    system("cmd/c\"color F0\"");
                    Sleep(150);
                    system("cmd/c\"color 0F\"");
                    continue;

                } else {
                    cout << zaidejai[1] << " shot " << zaidejai[0] << " with a " << kulkos[0] << "\n";
                    cout << "Now " << zaidejai[0] << " have " << gyvybes0 << " lives left" << "\n\n\n\n\n";
                    blanks--;
                    count2 = 0;
                    apkaba.erase(apkaba.begin());
                    randIndex = 0;
                    continue;
                }
            }
        }
    }
    if(gyvybes0 > 0)
    {
        int n = 0;
        laimejimai(n);

    }
    if(gyvybes1 > 0)
    {
        int n = 1;
        laimejimai(n);
    }
}
void names()
{
    cout << R"(

     XXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
 XXXXXXXXXXXXXXXXXX         XXXXXXXX
XXXXXXXXXXXXXXXX              XXXXXXX
XXXXXXXXXXXXX                   XXXXX
 XXX     _________ _________     XXX
  XX    I  _xxxxx I xxxxx_  I    XX
 ( X----I         I         I----X )
( +I    I      00 I 00      I    I+ )
 ( I    I    __0  I  0__    I    I )
  (I    I______ /   \_______I    I)
   I           ( ___ )           I
   I    _  :::::::::::::::  _    i
    \    \___ ::::::::: ___/    /
     \_      \_________/      _/
       \        \___,        /
         \                 /
          |\             /|
          |  \_________/  |



)";
    cout<<"Player 1 name: ";
    cin>>vardas;

    zaidejai.push_back(vardas);

    cout << R"(



                         ____...
             .-"--"""".__    `.
            |            `    |
  (         `._....------.._.:
   )         .()''        ``().
  '          () .=='  `===  `-.
   . )       (   -g)     g)
    )         )     /        J
   (          |.   /      . (
   $$         (.  (_'.   , )|`
   ||         |\`-....--'/  ' \
  /||.         \\ | | | /  /   \.
 //||(\         \`-===-'  '     \o.
.//7' |)         `. --   / (     OObaaaad888b.
(<<. / |     .a888b`.__.'d\     OO888888888888a.
 \  Y' |    .8888888aaaa88POOOOOO888888888888888.
  \  \ |   .888888888888888888888888888888888888b
   |   |  .d88888P88888888888888888888888b8888888.
   b.--d .d88888P8888888888888888a:f888888|888888b
   88888b 888888|8888888888888888888888888\8888888




)";
    cout<<"Player 2 name: ";
    cin>>vardas;

    zaidejai.push_back(vardas);

    cout << "\n\n\n";



}
void rules()
{
    cout << R"(

  =========
    Rules
  =========

  *The game involves two players going against one another in a game in Russian roulette with the use of a 12-gauge shotgun rather than a revolver,
  which is traditionally used in Russian roulette*

  *The game consists of three rounds, at the beginning of which, the shotgun is loaded with a certain number of live shells and blanks in a random order*

  *One of the players chooses to either shoot the other player or themselves; choosing the latter option with a blank in the chamber skips the other players
  turn and the player that shot the blank gets another turn*

  *Both of the players have the same amount of hearts*

  *A round is won when the one player destroys other players lives*

  *The game is best out of three, first player to win 2 rounds is the winner of the game*

  *If the magazine is emptied and neither party has lost all their lives, the shotgun gets loaded again*

  *Items are regularly given to both parties at the beginning of the second round, which can give an advantage to the user of the items*




  )";
}

void openPage()
{
    cout << R"(

 /$$$$$$$                      /$$                 /$$                   /$$                                         /$$ /$$             /$$
| $$__  $$                    | $$                | $$                  | $$                                        | $$| $$            | $$
| $$  \ $$ /$$   /$$  /$$$$$$$| $$   /$$  /$$$$$$$| $$$$$$$   /$$$$$$  /$$$$$$          /$$$$$$   /$$$$$$  /$$   /$$| $$| $$  /$$$$$$  /$$$$$$    /$$$$$$
| $$$$$$$ | $$  | $$ /$$_____/| $$  /$$/ /$$_____/| $$__  $$ /$$__  $$|_  $$_/         /$$__  $$ /$$__  $$| $$  | $$| $$| $$ /$$__  $$|_  $$_/   /$$__  $$
| $$__  $$| $$  | $$| $$      | $$$$$$/ |  $$$$$$ | $$  \ $$| $$  \ $$  | $$          | $$  \__/| $$  \ $$| $$  | $$| $$| $$| $$$$$$$$  | $$    | $$$$$$$$
| $$  \ $$| $$  | $$| $$      | $$_  $$  \____  $$| $$  | $$| $$  | $$  | $$ /$$      | $$      | $$  | $$| $$  | $$| $$| $$| $$_____/  | $$ /$$| $$_____/
| $$$$$$$/|  $$$$$$/|  $$$$$$$| $$ \  $$ /$$$$$$$/| $$  | $$|  $$$$$$/  |  $$$$/      | $$      |  $$$$$$/|  $$$$$$/| $$| $$|  $$$$$$$  |  $$$$/|  $$$$$$$
|_______/  \______/  \_______/|__/  \__/|_______/ |__/  |__/ \______/    \___/        |__/       \______/  \______/ |__/|__/ \_______/   \___/   \_______/






)";

}
int main()
{
    string start;
    int i;

    openPage();

    cout<<"Type 1 if the rules are needed, else press 2: ";
    cin>>i;

    if(i == 1)  {

        refresh();
        rules();
    }

    cout<<"Press enter if u want to start the game: ";
    i = _getch();

    cin.ignore();
    system("cls");

    names();

    refresh();

    round1();
    round2();
    if(laimejimaik[0] != 2 && laimejimaik[1] != 2)
    {
        round3();
    }

    return 0;
}

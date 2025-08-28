#include<bits/stdc++.h>
using namespace std;
class Player{
    public:
    string name;
    int jurseyNo;
    string nation;
    //constructor
    Player(string name, string nation, int jurseyNo){
        this->name = name;
        this->nation = nation;
        this->jurseyNo = jurseyNo;
    }
};
int main(){
    Player * virat = new Player("virat", "india", 28);
    cout << virat->jurseyNo << " " << virat->name << " " << virat->nation << " " << endl;
    Player * sakib = new Player("shakib", "bangladesh", 75);
    cout << sakib->jurseyNo << " " << sakib->name << " " << sakib->nation << " " << endl;
    // sakib = virat; not work because memory address deleted
    *sakib = *virat;
    // delete virat;
    cout << sakib->jurseyNo << " " << sakib->name << " " << sakib->nation << " " << endl;
    cout << virat->jurseyNo << " " << virat->name << " " << virat->nation << " " << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printMap(const vector<string>& map) {
 for (string row: map){
    cout<<row<<"\n";
 }
}
int main(){
    vector<string> map = {
        "########",
        "#......#",
        "#......#",
        "#......#",
        "########"
    };
    printMap(map);
    return 0;
}
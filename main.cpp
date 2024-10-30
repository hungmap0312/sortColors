#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void sortColors(vector<string>& colors) {
    vector<int> codedColors;
    for (int i = 0; i < colors.size(); i++){
        if (colors[i] == "red"){
            codedColors.push_back(0);
        }
        else if (colors[i] == "white"){
            codedColors.push_back(1);
        }
        else{
            codedColors.push_back(2);
        }
    }
    colors.clear();
    for (int i = 0; i < codedColors.size() - 1; i++) {
        for (int j = 0; j < codedColors.size() - i - 1; j++) {
            if (codedColors[j] > codedColors[j + 1]) {
                int temp = codedColors[j];
                codedColors[j] = codedColors[j + 1];
                codedColors[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < codedColors.size(); i++){
        if (codedColors[i] == 0){
            colors.push_back("red");
        }
        else if (codedColors[i] == 1){
            colors.push_back("white");
        }
        else{
            colors.push_back("blue");
        }
    }
}

int main() {
    vector<string> colors = {"white", "red", "blue", "red", "white", "red", "blue", "red", "white", "white", "blue", "white", "red"};
    cout<<colors.size()<<endl;
    sortColors(colors);
    for (int i = 0; i < colors.size(); i++){
        cout<<colors[i]<<" ";
    }
    return 0;
}

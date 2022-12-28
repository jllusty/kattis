#include <iostream>

using namespace std;

int main() {
    int widthComputer, heightComputer, widthSticker, heightSticker;
    cin >> widthComputer >> heightComputer >> widthSticker >> heightSticker;
    if(widthComputer >= widthSticker + 2 && heightComputer >= heightSticker + 2) printf("1\n");
    else printf("0\n");
}
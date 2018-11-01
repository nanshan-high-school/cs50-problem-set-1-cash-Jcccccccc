#include <iostream>
using namespace std;

int main() {
int money;
cout << "請輸入金額";
cin >> money;
int coin50=money / 50;
cout << "50元硬幣有" << coin50 <<"個\n";
cout << "10元硬幣有" << money % 50 / 10 <<"個\n";
cout << "5元硬幣有" << money % 50 % 10 / 5 <<"個\n";
cout << "1元硬幣有" << money % 50 % 10 % 5 / 1 <<"個";
}

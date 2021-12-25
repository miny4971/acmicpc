#include<iostream> 

using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3 ;

    int ans1, ans2, ans3, ans4;
    ans1 = (num1 + num2) % num3;
    ans2 = ( (num1%num3) + (num2%num3) ) % num3;
    ans3 = (num1*num2) % num3;
    ans4 = ((num1 % num3) * (num2 % num3))%num3;

    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;
    cout << ans4 << endl;

    return 0;
}
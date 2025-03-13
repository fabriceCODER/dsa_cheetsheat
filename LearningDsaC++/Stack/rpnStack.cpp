#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> stk;

    for (string& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = stk.top(); stk.pop();
            int a = stk.top(); stk.pop();

            if (token == "+") stk.push(a + b);
            else if (token == "-") stk.push(a - b);
            else if (token == "*") stk.push(a * b);
            else if (token == "/") stk.push(a / b);  // Integer division

        } else {
            stk.push(stoi(token));  // Convert string to integer
        }
    }

    return stk.top();  // Final result
}

int main() {
    vector<string> tokens1 = {"2", "1", "+", "3", "*"};  // (2 + 1) * 3 = 9
    vector<string> tokens2 = {"4", "13", "5", "/", "+"}; // 4 + (13 / 5) = 6

    cout << evalRPN(tokens1) << endl;
    cout << evalRPN(tokens2) << endl;

    return 0;
}

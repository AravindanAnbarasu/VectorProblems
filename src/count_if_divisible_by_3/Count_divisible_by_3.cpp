#include <iostream>

using namespace std;

int solution(string& num)
{

    int count = 0;
    int total_sum = 0;

    for (auto i = 0; i < num.size(); ++i) { //A number is divisible by 3 if its digits add up to a number divisible by 3.
        total_sum += (num[i] - 48);
    }

    if (total_sum % 3 == 0) // check for the number itself
        count++;

    for (auto i = 0; i < num.size(); ++i) {

        int remaining_sum = total_sum - (num[i] - 48);

        for (int j = 0; j <= 9; ++j) {

            if ((remaining_sum + j) % 3 == 0) {

                if (j != num[i] - 48)
                    ++count;
            }
        }
    }
    return count;
}

int main()
{
    string number = "0081";

    cout << "Ans:" << solution(number);

}

/*
* Given a string str[] number N, the task is to calculate the number of ways to make the 
given number divisible by 3 by changing at most one digit of the number.
*/


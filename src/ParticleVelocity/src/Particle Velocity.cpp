#include <iostream>
#include <vector>

using namespace std;

int find_count(const vector<int>& A) {

    int total = 0;

    for (auto i = 0; i < A.size(); ++i) 
    {
        for (auto count = 0; i + 2 < A.size() && A[i + 1] - A[i] == A[i + 2] - A[i + 1]; ++i) 
        {
            total += ++count;
        }
    }
    if (total < 1000000000)
        return total;
    else
        return - 1;
}

int main()
{
    vector<int> A = { -1,1,3,3,3,2,3,2,1,0};

    cout << "Ans:" << find_count(A) << endl <<"Expected Answer 5";

}

/*This task is very simple. We just need go through the given array and check that the difference 
between three simultaneous items is equal. For example in array 1, 2, 3 the difference between
1 and 2 and between 2 and 3 is 1. That is in term of the task the movement of the particle was
stable. Each time when they are equal we increase the counter of the periods of time when the 
movement is stable and add it into a counter of all periods. We need two counters in order to 
count periods which include other periods. Pay attention of the note in the task description 
“Note that some periods of time might be contained in others”. Also pay attention that we pass
through the array only once. Despite the fact that we have two nested arrays we use only one
iterator “i”. So complexity of the task is O(N).*/
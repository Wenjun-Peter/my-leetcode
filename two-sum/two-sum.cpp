#include <vector>
#include <iostream>

#include "two-sum.h"

using namespace std;


void run_test1(void)
{
    Solution S;
    vector<int> input = {2,7,11,15};
    vector<int> ret;
    int target = 9;

    ret = S.twoSum(input,target);
    if((ret[0]!=0)||(ret[1]!=1))
    {
        cout<<"run_test1 fail"<<endl;
    }else
    {
        cout<<__FUNCTION__<<"OK"<<endl;
    }
    
}

void run_test2(void)
{
    Solution S;
    vector<int> input = {3,3};
    vector<int> ret;
    int target = 6;

    ret = S.twoSum(input,target);
    if((ret[0]!=0)||(ret[1]!=1))
    {
        cout<<"run_test2 fail"<<endl;
    }
}


int main(int argc, char **argv)
{
    run_test1();
    run_test2();
    return 0;
}
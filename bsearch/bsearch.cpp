#include <vector>
#include <iostream>
using namespace std;



pair<int, int> bsearch(vector<int> &list, int value)
{
    int upper = list.size();
    int lower = 0;
    int mid = 0;
    bool found = false;
    pair<int, int> result;

    do{
        mid = (lower + upper) / 2;

        if(list[mid] == value)
        {
            found = true;
            break;
        }
        else if(list[mid] < value)
        {
            lower = mid + 1;
        }
        else//if(list[mid] > value)
        {
            upper = mid - 1;
        }

        mid = (lower + upper) / 2;

        if(list[mid] == value)
        {
            found = true;
            break;
        }
    } while(lower < upper);

    if(found)
    {
        result = pair<int, int>(mid, mid);    
    }
    else
    {
        if(value > list[mid])
        {
            result = pair<int, int>(mid + 1, mid);    
        }
        else
        {
            result = pair<int, int>(mid, mid - 1);    
        }
    }

    return result;
}

int main(int argc, char **argv)
{
    vector<int> list;
    
    for(int i = 0; i <= 10; i ++)
    {
        list.push_back(i *2);
    }

    auto result = bsearch(list, 21);

    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}
// bubble_sort_cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

using namespace std;

int* sort_func(int *sort,int len, bool repeat);
int size_array = 0;


int main()
{
    int tmp[] = { 2,7,2,1,3,100,3,32,342,2,44,23 };
    size_array = (sizeof(tmp) / sizeof(int))-1;
    int* sorted= sort_func(tmp, size_array,false);

    for (int i = 0; i <= size_array; i++)
    {
        cout << sorted[i] << endl;
    }
}

int* sort_func(int *sort, int len, bool repeat) {

    bool t = true;
    int j = 0;

    while (t)
    {
        for (int i = 0; i <= len - 1; i++)
        {
            if (sort[i] > sort[i + 1])
            {
                int tmp1 = sort[i];
                sort[i] = sort[i + 1];
                sort[i + 1] = tmp1;
                j = 0;
            }
            else if (sort[i] == sort[i + 1] && !repeat)
            {
                int del = i;
                for (int a = del - 1; a < len; a++)
                {
                    sort[del] = sort[del+ 1];
                    del++;
                }

                size_array--;
                len--;
                j = 0;
            }
            else
            {
                if (j == len)
                    t = false;
                else
                    j++;
            }
        }
    }
    return sort;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

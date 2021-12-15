using System;
using System.Collections.Generic;

namespace bubble_sort_cs
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] tmp= { 2, 7, 2, 1, 3, 100, 3, 32, 342, 2, 44, 23 };
            int[] sorted = sort_func(tmp,tmp.Length,false);
            for (int i = 0; i <= sorted.Length-1; i++)
            {
                Console.WriteLine(sorted[i]);
            }
        }
        static int[] sort_func(int[] sort, int len,bool repeat)
        {
            len = len - 1;
            bool t = true;
            int j = 0;
            while (t)
            {
                for (int i = 0; i <= len - 1; i++)
                {
                    if (sort[i] > sort[i + 1])
                    {
                        int tmp = sort[i];
                        sort[i] = sort[i + 1];
                        sort[i + 1] = tmp;
                        j = 0;
                    }
                    else if (sort[i] == sort[i + 1]&& !repeat)
                    {
                        List<int> tmp = new List<int>(sort);
                        tmp.RemoveAt(i);
                        sort = tmp.ToArray();
                        //for (int a = i; a < len - 1; a++)
                        //    sort[a] = sort[a + 1];
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
    }
}

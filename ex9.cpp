#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct Workshop
{
    int start_time;
    int end_time;
    int duration;
};
struct Available_Workshops
{
    int n;
    Workshop *a = new Workshop[n];
};
Available_Workshops *initialize(int start_time[], int duration[], int n)
{
    Available_Workshops aa;
    Available_Workshops *ptr = &aa;
    ptr->n = n;
    for (int i = 0; i < n; i++)
    {
        ptr->a[i].start_time = start_time[i];
        ptr->a[i].duration = duration[i];
        ptr->a[i].end_time = start_time[i] + duration[i];
    }
    return ptr;
}
int CalculateMaxWorkshops(Available_Workshops *ptr)
{
    for (int i = 0; i < ptr->n; i++)
    {
        int x = 25;
        for (int j = i; j < ptr->n; j++)
        {

            if (ptr->a[j].start_time < x)
            {
                x = ptr->a[j].start_time;
                int temp = ptr->a[i].start_time;
                ptr->a[i].start_time = ptr->a[j].start_time;
                ptr->a[j].start_time = temp;

                int temp2 = ptr->a[i].end_time;
                ptr->a[i].end_time = ptr->a[j].end_time;
                ptr->a[j].end_time = temp2;

                int temp3 = ptr->a[i].duration;
                ptr->a[i].duration = ptr->a[j].duration;
                ptr->a[j].duration = temp3;
            }
        }
    }
    int Start[ptr->n];
    for (int i = 0; i < ptr->n; i++)
    {
        int m = 0;
        int f = 0;
        for (int j = i; j < ptr->n; j++)
        {
            if (ptr->a[j].start_time >= m)
            {
                m = ptr->a[j].end_time;
                f++;
            }
        }
        Start[i] = f;
    }
    int am = 0;
    for (int i = 0; i < ptr->n; i++)
    {
        if (Start[i] > am)
        {
            am = Start[i];
        }
    }

    return am;
}
// Define the structs Workshops and Available_Workshops.
// Implement the functions initialize and CalculateMaxWorkshops

int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int *start_time = new int[n];
    int *duration = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> start_time[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> duration[i];
    }

    Available_Workshops *ptr;
    ptr = initialize(start_time, duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}

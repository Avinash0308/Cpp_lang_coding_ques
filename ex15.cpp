#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
struct Workshop{
    int start_time;
    int end_time;
    int duration;
};
struct Available_Workshops{
    int n;
    Workshop arr[];
};
Available_Workshops* initialize(int start_time[] , int duration[] , int num){
    
    Available_Workshops * ptr =new Available_Workshops;
    ptr->n = num;
    for(int i = 0 ; i < ptr->n ; i++ ){
        ptr->arr[i].start_time = start_time[i];
        ptr->arr[i].duration = duration[i];
        ptr->arr[i].end_time = start_time[i] + duration[i];
    }
    return ptr;
}
int CalculateMaxWorkshops(Available_Workshops* ptr){
    
    for (int i = 0; i < ((ptr->n)-1); i++)
    {
        for (int j = 0; j < ((ptr->n)-1); j++)
        {
            if (ptr->arr[j].start_time > ptr->arr[j+1].start_time )
            {
                int temp;
                temp = ptr->arr[j].duration ;
                ptr->arr[j].duration = ptr->arr[j+1].duration ;
                ptr->arr[j+1].duration = temp;

                temp = ptr->arr[j].start_time ;
                ptr->arr[j].start_time = ptr->arr[j+1].start_time ;
                ptr->arr[j+1].start_time = temp; 

                temp = ptr->arr[j].end_time ;
                ptr->arr[j].end_time = ptr->arr[j+1].end_time ;
                ptr->arr[j+1].end_time = temp; 
            }
            
        }
        
    }
    int count = 1;
    int et = ptr->arr[0].end_time;
    for (int i = 0; i < (ptr->n) ; i++)
    {
        if (et<= ptr->arr[i].start_time)
        {
            count++;
            et = ptr->arr[i].end_time;
        }
        
    }
    
    return count;
    
    
}
//Implement the functions initialize and CalculateMaxWorkshops

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cout<<"Enter the number of workshops\n";
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cout<<"Start time : "<<i<<endl;
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cout<<"duration : "<<i<<endl;
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}

#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

void printMaxActivities(int start_time[], int finish_time[],string name[], int n)
{
    int i,j;

    printf("\n");
    printf ("The Selected Activities :");

    // The first activity always gets selected
    i=0;
    cout << name[i];
    for (j=1;j<n;j++)
    {

        if (start_time[j]>=finish_time[i])
        {
            cout << name[j];
            i=j;
        }
    }
}

// driver program to test above function
int main()
{
    int n,i,j,t;
    printf("Enter the total activities : ");
    cin >> n;
    string name[n];
    //int start_time[] =  {1, 3, 0, 5, 8, 5};
    //int finish_time[] =  {2, 4, 6, 7, 9, 9};
    int start_time[n];
    int finish_time[n];
    printf("Enter the starting time of all rides : ");
    for(i=0;i<n;i++)
    {
        cin >> start_time[i];
    }


    printf("Enter the finishing time of all rides : ");
    for(i=0;i<n;i++)
    {
        cin >> finish_time[i];
    }

    for(i=0;i<n;i++)
   {
     for(j=i;j<n;j++)
       {
          if(finish_time[j]<finish_time[i])
           {
            t=finish_time[i];
            finish_time[i]=finish_time[j];
            finish_time[j]=t;
           }
       }
   }

    printf("Enter the name of each rides : ");
    for(i=0;i<n;i++)
    {
        cin >> name[i];
    }

   // int n = sizeof(s)/sizeof(s[0]);
    printMaxActivities(start_time, finish_time, name, n);
    printf("\n");
    return 0;
}

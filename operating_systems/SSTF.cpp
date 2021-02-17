#include <bits/stdc++.h>
using namespace std;

const int N=100005;

int n; //number of elements entered
int head;  //position of disk head 
int done[N]; //array to keep track of the done indexes 
int positions[N];  //queue formed 
int seek = 0; //initialise seek as zero
float avg; //average value

//function for SSTF disk scheduling algorithm (function defination)
void sstf()
{
    int movement,shortest,index;

	//initialise movement to be zero
    movement = 0;
    
    //run a loop on the elements of queue
    for(int i=0; i<n; i++)
    {
        index = 0;
        //initialise shortest with INT_MAX to update minimum
        shortest = INT_MAX;
		
		//inner loop time complexity = O(n^2)
        for(int k=0; k<n; k++)
        {
        	//check if the difference of head and the element is less than shortest and check if not done 
            if(abs(head - positions[k]) < shortest && !done[k])
            {
            	//assign that index of array as index only when if condition true
                index = k;
                //uodate the value of shortest only when if condition true
                shortest = abs(head - positions[k]);
            }
        }
		
		//now mark that index as done 
        done[index] = true;
        //add the shortest found in movement
        movement += shortest;
        //make positions[index] as head
        head = positions[index];
    }
    printf("Total Head Movement %d Cylinders\n",movement);
    return;
}

//driver function 
int main()
{
	//take input of initial head position 
    cout<<"Initial Head Position: ";
    cin>>head;

	//take input of size of queue 
    cout<<"Queue Size: ";
    cin>>n;
	
	//enter the elements of queue
    cout<<"Queue:\n";
    for(int i=0; i<n; i++) 
		cin>>positions[i];
		
	//loop to add to the seek value while traversing full queue	
	for (int i = 1; i < n - 1; i++)
    {
    	//add differnence of head and value of position of that index to seek 
        seek = seek + abs(head - positions[i]);
        //update head 
        head = positions[i];
    }
    
    //print the total seek time
    printf("\nTotal Seek Time is %d\t", seek);
    
    //find the average of seek time
    avg = seek / (float)n;
    
    //print the average calculated 
    printf("\nAverage Seek Time is %f\t\n", avg);

	//function call
    sstf();

    return 0;
}
